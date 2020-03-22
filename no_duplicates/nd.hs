main = do
        kattis <- getLine
        putStrLn (similar (words kattis))

similar :: [String] -> String
similar [] = "yes"
similar [_] = "yes"
similar (x:xs) =
  if elem x xs then "no"
  else similar xs