import math

t = int(input())

for test in range(0,t):

	n = int(input())

	if(n%26 in [i for i in range(1,3)]):

		print(pow(2,int(math.floor(n/26))), 0, 0)

	elif(n%26 in [i for i in range(3,11)]):

		print(0, pow(2,int(math.floor((n-2)/26))), 0)

	else:

		print(0, 0, pow(2,int(math.floor((n-10)/26))))
