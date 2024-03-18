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
type Input = (Int, Int, Int)

type Output = String

formatOutput :: Output -> String
formatOutput solution = solution ++ "\n"

parseInput :: String -> Input
parseInput rawInput = let nums = map read (splitOn ' ' rawInput) in (nums !! 0, nums !! 1, nums !! 2)

solve :: Input -> Output
solve (a, b, c) = if a + b == c then "correct!" else "wrong!"
