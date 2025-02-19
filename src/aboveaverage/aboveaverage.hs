import Data.List (intercalate)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE
import Numeric (showFFloat)

main :: IO ()
main = interact (solveAll . parseTestcases)

-- helpers for parsing
splitOn' :: Char -> String -> NonEmpty String
splitOn' sep s = case s of { [] -> "" :| []; (part : remainder) -> if part == sep then "" <| splitOn' sep remainder else let head :| tail = splitOn' sep remainder in (part : head) :| tail}

splitOn :: Char -> String -> [String]
splitOn sep s = NE.toList (splitOn' sep s)

-- Define input and output here
type Input = (Int, [Int])
type Output = Double

formatOutput :: Output -> String
formatOutput solution = showFFloat (Just 3) solution "" ++ "%\n"

parseInput :: String -> Input
parseInput line =
  let ws = words line
  in (read $ ws !! 0, map read $ drop 1 ws)

parseTestcases :: String -> [Input]
parseTestcases rawInput = map parseInput $ drop 1 $ lines rawInput

average :: [Int] -> Double
average ls = fromIntegral (sum ls) / fromIntegral (length ls)

solveAll :: [Input] -> String
solveAll [] = ""
solveAll ((n, tc):tcs) = formatOutput (solve (n, tc)) ++ solveAll tcs

solve :: Input -> Output
solve (n, tc) =
  let filtered = filter (> average tc) (map fromIntegral tc)
  in 100 * fromIntegral (length filtered) / fromIntegral n
