import Data.List (intercalate, subsequences)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE
import Data.Graph (Graph)

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = (Int, [Int])
type Output = Int

formatOutput :: Output -> String
formatOutput solution = show solution ++ "\n"

parseInput :: String -> Input
parseInput rawInput = let l = lines rawInput in (read $ l !! 0, map read $ words $ l !! 1)

solve :: Input -> Output
solve (n, ints) = (n - 2) * m + sum ints
  where m = minimum ints

