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
type Output = (Int, Int)

formatOutput :: Output -> String
formatOutput (a, b) = show a ++ " " ++ show b ++ "\n"

parseInput :: String -> Input
parseInput rawInput =
  let
    s = lines rawInput
    res = map (\line -> (
      let items = map read (words line)
      in  (items !! 0, items !! 1)
      )) s
  in
    res

solve :: Input -> Output
solve points =
  let
    xs = map fst points
    ys = map snd points
  in
    (findUnique xs, findUnique ys)

-- Note: this only works if there is a single unique value
-- picks "the first" one if there are multiple
findUnique :: [Int] -> Int
findUnique xs =
  let
    c = counts xs
    f (x, count) = count == 1
  in
    fst $ head $ filter f c

count :: Int -> [Int] -> Int
count x =  length . filter (==x)

counts :: [Int] -> [(Int, Int)]
counts (xs) = map (\x-> (x, count x xs)) xs
