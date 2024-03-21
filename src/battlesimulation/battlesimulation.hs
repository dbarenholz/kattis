import Data.List (intercalate)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
data MonsterMove
  = Rake  -- R
  | Bite  -- B
  | Laser -- L
  deriving (Show, Eq)

data CounterMove
  = Slice  -- S, counters Rake
  | Kick   -- K, counters Bite
  | Shield -- H, counters Laser
  | Combo  -- C, counters Combo
  deriving (Show, Eq)

type Input = [MonsterMove]
type Output = [CounterMove]

showCounterMove :: CounterMove -> String
showCounterMove (Slice)  = "S"
showCounterMove (Kick)   = "K"
showCounterMove (Shield) = "H"
showCounterMove (Combo)  = "C"

formatOutput :: Output -> String
formatOutput counterMoves = concatMap showCounterMove counterMoves ++ "\n"

asMonsterMove :: Char -> MonsterMove
asMonsterMove 'R' = Rake
asMonsterMove 'B' = Bite
asMonsterMove 'L' = Laser

parseInput :: String -> Input
parseInput rawInput = let str = head $ lines rawInput
                      in  map asMonsterMove str

allDifferent :: (Eq a) => [a] -> Bool
allDifferent []     = True
allDifferent (x:xs) = x `notElem` xs && allDifferent xs

isCombination :: (MonsterMove, MonsterMove, MonsterMove) -> Bool
isCombination (a, b, c) = allDifferent [a, b, c]

solveSingle :: MonsterMove -> CounterMove
solveSingle (Rake) = Slice
solveSingle (Bite) = Kick
solveSingle (Laser) = Shield

solve :: Input -> Output
solve (a:b:c:rest) = if isCombination (a, b, c)
  then Combo : solve rest
  else solveSingle a : solve (b : c : rest)

solve (x:xs) = solveSingle x : solve xs
solve [] = []
