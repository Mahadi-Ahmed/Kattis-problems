main = do
  kattis <- getLine
  let x = (read kattis :: Double)
  print (round $ romans x)

romans:: Double -> Double
romans f = f * 1000 * (5280/4854)