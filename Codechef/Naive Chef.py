t = int(input())

for m in range(0,t):

	x = list(map(int,input().split()))

	n = x[0]
	a = x[1]
	b = x[2]

	x = list(map(int,input().split()))

	acount = 0
	bcount = 0
	for i in range(0,len(x)):

		if(x[i] == a):

			acount += 1

		if(x[i] == b):

			bcount += 1

	probablity = (acount*bcount)/(n*n)

	print("{:.6f}".format(probablity))
