import sys

def main():
	for line in sys.stdin:
		ab = line.split()
		a = int(ab[0])
		b = int(ab[1])
		print(abs(a-b))

if __name__ == '__main__': main()
