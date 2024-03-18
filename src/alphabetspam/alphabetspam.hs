import Data.Char (isLower, isUpper)
import Data.List (intercalate, foldl')
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE

import Numeric (showFFloat)

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = [[Double]]
type Output = [Double]

formatOutput :: Output -> String
formatOutput (c1:c2:c3:c4:_) = showFFloat Nothing c1 "" ++ "\n" ++ showFFloat Nothing c2 "" ++ "\n" ++ showFFloat Nothing c3 "" ++ "\n" ++ showFFloat Nothing c4 "" ++ "\n"

asList :: Char -> [Double]
asList '_'           = [1, 0, 0, 0]
asList c | isLower c = [0, 1, 0, 0]
asList c | isUpper c = [0, 0, 1, 0]
asList _             = [0, 0, 0, 1]

parseInput :: String -> Input
-- parseInput rawInput = map asList rawInput -- WRONG: includes the \n at the end, which gets counted as symbol
parseInput rawInput = map asList $ (head . lines) rawInput

solve :: Input -> Output
solve tc =
  let
    n    = fromIntegral $ length tc
    sums = foldl' (\(a1:a2:a3:a4:_) (e1:e2:e3:e4:_) -> [a1 + e1, a2 + e2, a3 + e3, a4 + e4]) [0, 0, 0, 0] tc
  in
    map (\f -> f/n) sums
