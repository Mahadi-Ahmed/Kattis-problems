# coding: utf-8
# OpenKattis problem Simon Says : https://open.kattis.com/problems/simonsays
# Mahadi 25-11-17

import sys

def main():
	commands = [] 
	for command in sys.stdin:		# first command will be the number of incomming commands, the rest are
		commands.append(command) 	# Simons commands

	for command in commands:
		if (command.find("Simon says ") != -1):
			print command[11:]

















if __name__ == '__main__': main()