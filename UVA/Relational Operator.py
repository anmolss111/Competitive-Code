t = int(input())

for test in range(0,t):

	a, b = list(map(int,input().split()))

	if(a>b):

		print('>')

	elif(a<b):

		print('<')

	else:

		print('=')
