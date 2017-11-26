# coding: utf-8
# OpenKattis problem Modulo : https://open.kattis.com/problems/modulo
# Mahadi 25-11-17

# Indata will be 10 numbers: 0 < n < 1000. I need to find all the DISTINCT numbers from mod 42

import sys

def main():
	numbers = []
	result = [] 								# in this array i save the result of the operation: numbers % 42
	for n in sys.stdin:
		numbers.append(int(n))
	
	for n in numbers:
		result.append(n%42) 	 		# The result array should contain the result of n mod 42
	countsOfResult = {} 				# dictionary

	for amountOfDistinct in result:
		countsOfResult.update({amountOfDistinct:result.count(amountOfDistinct)})

	print len(countsOfResult)
 
	


# If count returns 0 it means there are no matches which is fucked. 

if __name__ == '__main__': main()