import Data.List (intercalate)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE

import Numeric

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = Double
type Output = (Double, Double)

formatOutput :: Output -> String
formatOutput (a, b) = showFFloat Nothing a "" ++ "\n" ++ showFFloat Nothing b "" ++ "\n"

parseInput :: String -> Input
parseInput rawInput = read rawInput


solve :: Input -> Output
solve x = ( (100.0 / x), (100.0 / (100.0 - x)))
