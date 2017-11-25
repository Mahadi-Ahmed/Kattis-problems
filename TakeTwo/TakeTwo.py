# coding: utf-8
# OpenKattis problem Take two
# Mahadi 25-11-17

import sys
def main():
	number = []
	for n in sys.stdin:
		number.append(int(n))
	if number[0] % 2 == 0:
		print "Bob"
	else:
		print "Alice"









if __name__ == "__main__": main()