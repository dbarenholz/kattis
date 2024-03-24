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
type Input  = [(Int, Int)]
type Output = [(Int, Int)]

formatOutput :: Output -> String
formatOutput ((a, b):rest) = show a ++ " " ++ show b ++ "\n" ++ formatOutput rest
formatOutput [] = []

parseInput :: String -> Input
parseInput rawInput =
  let
    s = drop 1 (lines rawInput)
    tmp = map (\l -> map read (words l)) s
  in
    map (\ws -> (ws !! 0, ws !! 1)) tmp

solveSingle :: (Int, Int) -> (Int, Int)
solveSingle (k, b) = (k, sum [b+1, b .. 2])

solve :: Input -> Output
solve cases = map solveSingle cases
