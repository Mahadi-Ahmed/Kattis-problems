# coding: utf-8
# OpenKattis problem Quadrant Selection
# Mahadi 22-11-17

import sys

def main():
	siffror = [0]
	for n in sys.stdin:
		siffror.append(int(n))
	x = siffror[1]
	y = siffror[2]
	if (x < 0) & (y > 0): # x is less than zero and y is bigger than 0 i.e 2nd quadrant 
		print 2
	elif (x < 0) & (y < 0):	# x is less than zero and y is less than zero i.e 3rd quadrant
		print 3
	elif (x > 0) & (y < 0): # x is bigger than zero and y is less than zero i.e 4th quadrant
		print 4
	else:
		print 1


if __name__ == '__main__': main()

