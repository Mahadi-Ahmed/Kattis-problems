main = do
        date <- getLine
        putStrLn (halloween date)


halloween :: String -> String
halloween "OCT 31" = "yup"
halloween "DEC 25" = "yup"
halloween _ = "nope"
