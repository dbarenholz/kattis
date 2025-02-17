import Data.List (intercalate)
import Data.List.NonEmpty (NonEmpty ((:|)), (<|))
import qualified Data.List.NonEmpty as NE

main :: IO ()
main = let ls = replicate 20 "Hipp hipp hurra!"
       in mapM_ putStrLn ls
