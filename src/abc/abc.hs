import Data.List (intercalate, sort)
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
type Input = ([Int], String)

type Output = (Int, Int, Int)

formatOutput :: Output -> String
formatOutput (a, b, c) = show a ++ " " ++ show b ++ " " ++ show c ++ "\n"

parseInput :: String -> Input
parseInput rawInput =
  let
    -- map read (splitOn ',' rawInput)
    l    = lines rawInput
    nums = sort (map read (splitOn ' ' (l !! 0)))
    str  = l !! 1
  in
    (nums, str)

--parseTestcases :: String -> [Input]
--parseTestcases rawInput = map parseInput tail (lines rawInput)

solve :: Input -> Output
solve (nums, str) =
  let
    a = nums !! 0
    b = nums !! 1
    c = nums !! 2
  in case str of
    "ABC" -> (a, b, c)
    "ACB" -> (a, c, b)
    "BAC" -> (b, a, c)
    "BCA" -> (b, c, a)
    "CAB" -> (c, a, b)
    "CBA" -> (c, b, a)
    _     -> error "should not happen"
