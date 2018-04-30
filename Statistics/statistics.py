# coding: utf-8
# OpenKattis problem Statistics: https://open.kattis.com/problems/statistics
# Ibbe feat mahadi 30-04-18

import sys
def main():

	n=1 

	for line in sys.stdin:

		s = [int(x) for x in line.split()][1:]
		print "Case {}: {} {} {}".format(n,min(s),max(s),max(s)-min(s)) 
		n+=1


	
	



if __name__ == '__main__': main()
