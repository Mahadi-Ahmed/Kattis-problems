# coding: utf-8
# OpenKattis problem R2
# Mahadi 24-11-17

# indata is 2 numbers: for example 11 15 where 11 is R1 and 15 is S1. 
# (R1+R2)/2 = S1 find R2 -> R2 = (2*S1) - R1 

import sys


def main():
	numbers = []
	for n in sys.stdin:
		numbers.append(float(n))
	R1 = numbers[0]
	S1 = numbers[1]
	R2 = float((2*S1) - (R1))
	print int(R2)



	# calculate R1







if __name__ == '__main__': main()