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
type Input  = (Double, [Double])
type Output = Double

formatOutput :: Output -> String
formatOutput solution = showFFloat Nothing solution "" ++ "\n"

parseInput :: String -> Input
parseInput rawInput =
  let
    l    = lines rawInput
    n    = (read $ head l) :: Double
    nums = (map read (words (head (tail l)))) :: [Double]
  in
    (n, nums)

solve :: Input -> Output
solve (n, nums) =
  let
    s = sum                   $ filter (\x -> x >= 0) nums
    c = fromIntegral $ length $ filter (\x -> x < 0)  nums
  in
    s / (n - c)
