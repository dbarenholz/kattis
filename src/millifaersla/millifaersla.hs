import Data.List (intercalate, elemIndex)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE
import Data.Maybe (fromJust)

main :: IO ()
main = interact (formatOutput . solve . parseInput)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input  = [Int]
type Output = String

formatOutput :: Output -> String
formatOutput solution = solution ++ "\n"

parseInput :: String -> Input
parseInput rawInput = map read (lines rawInput)

solve :: Input -> Output
solve xs@(a:b:c:_) =
  let min = minimum xs
      idx = fromJust $ elemIndex min xs
  in ["Monnei", "Fjee", "Dolladollabilljoll"] !! idx
