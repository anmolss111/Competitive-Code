t = int(input())
for x in range(0,t):

	[n,p] = list(map(int, input().split()))

	a = list(map(int, input().split()))

	c = [0,0]
	for i in range(0,len(a)):

		if(a[i] >= int(p/2)):

			c[0] += 1

		if(a[i] <= int(p/10)):

			c[1] += 1

	if(c[0] == 1 and c[1] == 2):

		print('yes')

	else:

		print('no')
