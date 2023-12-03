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
type Input = _

type Output = _

formatOutput :: Output -> String
formatOutput solution = _ ++ "\n"

parseInput :: String -> Input
parseInput rawInput = map read (splitOn ',' rawInput)

parseTestcases :: String -> [Input]
parseTestcases rawInput = map parseInput tail (lines rawInput)

solve :: Input -> Output
solve tc = map (\v -> v + 1) tc
