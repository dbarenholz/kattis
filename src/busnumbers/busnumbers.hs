import Data.List (sort, tails, dropWhileEnd)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE
import Data.Char (isSpace)
import Control.Monad.State

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = [Int]
type Output = String

formatOutput :: Output -> String
formatOutput solution = (dropWhileEnd isSpace solution) ++ "\n"

parseInput :: String -> Input
parseInput rawInput = sort $ map read (splitOn ' ' ((lines rawInput) !! 1))

solve :: Input -> Output
solve nums = evalState (drive nums) (getStartState nums)

-- Monad to the rescue!
type BusValue = String
type BusState = (Bool, [Int], String) -- (inside block?, toProcess, result)

getStartState :: [Int] -> BusState
getStartState nums = (False, nums, "")

-- Wrapper function for "easy" cases
drive :: [Int] -> State BusState BusValue
drive [] = do
  (_, _, result) <- get
  return result
drive (a:[])       = driveSimple ([a])
drive (a:b:[])     = driveSimple ([a, b])
drive nums         = driveBus nums

-- At this point, we are at the end of processing busnumbers
-- We write each 'k' (current value) to the result, compute the new state (even if we don't need it)
-- and then continue driving simply
driveSimple :: [Int] -> State BusState BusValue
driveSimple (a:rest) = do
  (inBlock, toProcess, result) <- get
  let current    = toProcess !! 0 -- 'a'
  let newResult  = result ++ show current ++ " "
  let newProcess = drop 1 toProcess
  let newBlock   = inBlock -- should be False
  put (newBlock, newProcess, newResult)
  drive newProcess

-- The "hard" situation, where we may have blocks
-- We know that we have at least 3 items in the list
driveBus :: [Int] -> State BusState BusValue
driveBus (a:b:c:rest) = do
  (inBlock, toProcess, result) <- get

  let current = toProcess !! 0 -- 'a'
  let next    = toProcess !! 1 -- 'b'
  let future  = toProcess !! 2 -- 'c'

  if (not inBlock) then do
    let newBlock = shouldEnterBlock current next future
    if (not newBlock) then do
      -- We don't need to enter a block (and we're not in a block)
      let newResult  = result ++ show current ++ " "
      let newProcess = drop 1 toProcess -- 'b:c:rest'
      put (newBlock, newProcess, newResult)
      drive newProcess
    else do
      -- We should enter a block (but we're not in one right now)
      -- If we enter a new block, we need to still have access to the current (then "previous") value
      let newResult  = result ++ show current ++ "-"
      let newProcess = toProcess -- 'a:b:c:rest' because we need 'a'
      put (newBlock, newProcess, newResult)
      drive newProcess
  else do
    -- We are in a block
    -- Find how long this block is
    let toProcess'  = drop 1 toProcess
    let blockLength = getCount toProcess'
    -- Compute the block bound
    let blockBound  = current + blockLength
    -- Compute the result (and other state items)
    let newResult   = result ++ show blockBound ++ " "
    let newProcess  = drop blockLength toProcess'
    -- Update the new state
    put (not inBlock, newProcess, newResult)
    drive newProcess


shouldEnterBlock :: Int -> Int -> Int -> Bool
shouldEnterBlock curr next future = curr + 1 == next && next + 1 == future

-- Counts how many digits are strictly increasing from the head.
-- Example: [1, 2, 3, 5] -> 3
getCount :: [Int] -> Int
getCount lst = length $ filter (\(a, b) -> a == b) (zip lst ([head lst ..]))

