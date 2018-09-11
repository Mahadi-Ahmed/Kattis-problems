# coding: utf-8
# Open kattis problem Cetvrta: https://open.kattis.com/problems/cetvrta
# Mahadi 03-09-18
import sys

def main():
	#coordinates = [5,5,5,7,7,5]
	#coordinates = [30,20,10,10,10,20]
	coordinates = []
	for coord in sys.stdin:
		coordinates.append((coord))
		print(coord)
	xCord = []
	yCord = []
	xCord = coordinates[::2]
	yCord = coordinates[1::2]

	missisngXCord = 0
	missingYCord = 0

	#print(xCord)
	#print(yCord)

	solx = missingX(xCord)
	soly = missingY(yCord)

	print(solx)
	print(soly)

def missingX(xCords):
	xFound = xCords[0]
	if xFound == xCords[1]:
		return xCords[2]
	elif xFound == xCords[2]:
		return xCords[1]
	else:
		return xCords[0]			

def missingY(yCords):
	yFound = yCords[0]
	if yFound == yCords[1]:
		return yCords[2]
	elif yFound == yCords[2]:
		return yCords[1]
	else:
		return yCords[0]

			
	#print(coordinates)
if __name__ == '__main__': main()


# Input1 :
# 5 5
# 5 7
# 7 5

# Output1 : 
# 7 7

# Input2 : 
# 30 20
# 10 10
# 10 20

# Output2 :
# 30 10

# Basic soloution: Notice the pattern that the inputs of the x coordinate have a pair and another number, this number is missing its partner, its the same with the inputs of the y coordinates. IE 5 & 5 & 7 is the inputs of x coords with the pair being 5 & 5 with 7 being left out, meaning the output should be 7 to form the missing pair. 

