import Data.List (intercalate)
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
type Input  = ((Int, Int), Int, [(Int, Int, Double)])
type Output = Double

formatOutput :: Output -> String
formatOutput solution = showFFloat Nothing solution "" ++ "\n"

parseInput :: String -> Input
parseInput rawInput =
  let
    s         = lines rawInput
    line1     = s !! 0
    pos       = map read (words line1)
    position  = (pos !! 0, pos !! 1)
    line2     = s !! 1
    nShields  = read line2
    remaining = drop 2 s
    info = map (\dbls -> (
      floor $ dbls !! 0
      , floor $ dbls !! 1
      , dbls !! 2
      )) (map ( \line -> map read (words line)) remaining)
  in
    (position, nShields, info)

solve :: Input -> Output
solve ((posx, posy), nShields, shieldInfo) =
  let
    hDist = sum $ map (\(lower, upper, factor) -> upper - lower) shieldInfo
    eDist' = sum $ map (\(lower, upper, factor) -> factor * (fromIntegral (upper - lower))) shieldInfo
    eDist    = eDist' + (fromIntegral (posy - hDist))
    solution = (fromIntegral posx) / eDist
  in
    solution
