t = int(input())

for test in range(0,t):

	p1, p2, k = list(map(int,input().split()))

	if(int((p1+p2)/k)%2 == 0):

		print('CHEF')

	else:

		print('COOK')
