import math

t = int(input())

for test in range(0,t):

	n = int(input())

	if(n == 1):

		print(26)

	else:

		print(pow(26,math.ceil(n/2),1000000009))
