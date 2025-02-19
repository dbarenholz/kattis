import Data.List (intercalate)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE
import Data.Char (toLower)

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = String
type Output = String

formatOutput :: Output -> String
formatOutput solution = solution ++ "\n"

parseInput :: String -> Input
parseInput rawInput = head $ lines rawInput

toAlphabet :: Char -> String
toAlphabet 'a' = "@"
toAlphabet 'b' = "8"
toAlphabet 'c' = "("
toAlphabet 'd' = "|)"
toAlphabet 'e' = "3"
toAlphabet 'f' = "#"
toAlphabet 'g' = "6"
toAlphabet 'h' = "[-]"
toAlphabet 'i' = "|"
toAlphabet 'j' = "_|"
toAlphabet 'k' = "|<"
toAlphabet 'l' = "1"
toAlphabet 'm' = "[]\\/[]"
toAlphabet 'n' = "[]\\[]"
toAlphabet 'o' = "0"
toAlphabet 'p' = "|D"
toAlphabet 'q' = "(,)"
toAlphabet 'r' = "|Z"
toAlphabet 's' = "$"
toAlphabet 't' = "']['"
toAlphabet 'u' = "|_|"
toAlphabet 'v' = "\\/"
toAlphabet 'w' = "\\/\\/"
toAlphabet 'x' = "}{"
toAlphabet 'y' = "`/"
toAlphabet 'z' = "2"
toAlphabet c = [c]

solve :: Input -> Output
solve = concatMap (toAlphabet . toLower)
