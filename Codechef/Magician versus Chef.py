t = int(input())

for test in range(0,t):

	n,x,s = list(map(int,input().split()))

	currentIndex = x

	for swap in range(0,s):

		a,b = list(map(int,input().split()))

		if(a == currentIndex):

			currentIndex = b

		elif(b == currentIndex):

			currentIndex = a

	print(currentIndex)
