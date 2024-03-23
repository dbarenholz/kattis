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
formatOutput solution = unlines $ map show solution

parseInput :: String -> Input
parseInput rawInput = map read (tail $ lines rawInput)

solve :: Input -> Output
solve tc  = map (\k -> recurse k 0) tc

recurse :: Int -> Int -> Int
recurse k x | k == 0 = x
recurse k x          = recurse (k-1) (step x)

step :: Int -> Int
step n = (n * 2) + 1

