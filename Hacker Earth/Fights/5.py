from sys import stdin
import math

valueMap = {}

def evaluate(n):

	global valueMap

	if(n == 0):

		return 0

	if(n in valueMap):

		# print(1)

		return valueMap[n]

	else:

		valueMap[n] = max(n, evaluate(math.floor(n/2)) + evaluate(math.floor(n/3)) + evaluate(math.floor(n/4)))
		return valueMap[n]

for line in stdin:

	n = int(line)
	print(evaluate(n))
