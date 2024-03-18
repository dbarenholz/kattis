import Data.List (intercalate, isInfixOf)
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
type Input  = [(Int, String)]
type Output = [Int]

formatOutput :: Output -> String
formatOutput []       = "HE GOT AWAY!\n"
formatOutput solution = unlines $ map show solution

parseInput :: String -> Input
parseInput rawInput = zip [1..] (lines rawInput)

solveLine :: [(Int, String)] -> [Int]
solveLine ((idx, line):s) = if "FBI" `isInfixOf` line then idx : solveLine s else solveLine s
solveLine [] = []

solve :: Input -> Output
solve = solveLine
