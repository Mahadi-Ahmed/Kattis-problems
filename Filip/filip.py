# coding: utf-8
# Open kattis problem filip: https://open.kattis.com/problems/filip
# Mahadi 12-09-18

import sys


def main():
	twoThreeDigitNumbers = []

	for n in sys.stdin:
		twoThreeDigitNumbers.append(n)
		#if(n == "\n"):
			#break

	firstDigit = twoThreeDigitNumbers[0]
	secondDigit = twoThreeDigitNumbers[1]

	firstDigArray = []
	secondDigArray = []

	for w in firstDigit:
		if(w != "\n"):
			firstDigArray.append(int(w))

	for w in secondDigit:
		if(w != "\n"):
			secondDigArray.append(int(w))

	# reverse the arrays
	firstDigArray = firstDigArray[::-1]
	secondDigArray = secondDigArray[::-1]

	if(firstDigArray[0] > secondDigArray[0]):
		st = "".join(str(firstDigArray))
		print(st)
	else:
		st = "".join(str(secondDigArray))
		print(st)
    

	#print(firstDigit)
	#print(secondDigit)

	#print(twoThreeDigitNumbers)


if __name__ == '__main__': main()
