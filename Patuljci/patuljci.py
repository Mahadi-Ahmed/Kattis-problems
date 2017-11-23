# coding: utf-8
# OpenKattis problem Patuljci
# Mahadi 23-11-17
import sys
import random

def main():
	dwarfs = [] # array which holds the value for all the dwarfs
	for dwarf in sys.stdin:
		dwarfs.append(int(dwarf))
	# TODO I need 7 and only 7 to make up 100
	i = 0
	result = 0
	while i < 7:
		result +=dwarfs[i]
		i+=1
		if result !== 100:
			random.shuffle(dwarfs)
	# printar resultatet
	print "these dwarfs are the OG"
	for hat in dwarfs:
		print hat

	# print "printar svaret"
	# print result
	# for dwarf in dwarfs:
	# 	print "printar dwarfs"
	# 	print dwarf










if __name__ == '__main__': main()