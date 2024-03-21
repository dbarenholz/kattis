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
type Input  = [Int]
type Output = [Int]

formatOutput :: Output -> String
formatOutput nums = (unwords $ map show nums) ++ "\n"

parseInput :: String -> Input
parseInput rawInput = map read (splitOn ' ' rawInput)

solve :: Input -> Output
solve nums =
  let
    k = 1 - nums !! 0
    q = 1 - nums !! 1
    r = 2 - nums !! 2
    b = 2 - nums !! 3
    n = 2 - nums !! 4
    p = 8 - nums !! 5
  in
    [k, q, r, b, n, p]
