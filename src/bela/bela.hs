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
type Input = (Char, [(Char, Char)])
type Output = Int

formatOutput :: Output -> String
formatOutput solution = show solution ++ "\n"

parseInput :: String -> Input
parseInput rawInput =
  let
    s  = lines rawInput
    s' = splitOn ' ' (head s)
    b  = head $ s' !! 1
    p  = map (\l -> (l !! 0, l !! 1)) (tail s)
  in
    (b, p)

solve :: Input -> Output
solve (b, ((tFirst, tSecond):rest)) =
  case tFirst of
    'A' -> 11 + solve (b, rest)
    'K' -> 4 + solve (b, rest)
    'Q' -> 3 + solve (b, rest)
    'J' -> if b == tSecond then 20 + solve (b, rest) else 2 + solve (b, rest)
    'T' -> 10 + solve (b, rest)
    '9' -> if b == tSecond then 14 + solve (b, rest) else solve (b, rest)
    _   -> solve (b, rest)
solve (b, []) = 0
