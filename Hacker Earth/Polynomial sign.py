n = int(input())
a = map(int,raw_input().split())

flag = 0

for i in range(0,n+1):

	if(a[i] != 0):

		flag = 1
		break

if(flag == 1):

	for i in range(0,n+1):

		if(a[n-i] != 0):

			break

	if(a[n-i]>0):

		if((n-i)%2 == 0):

			print 1,1

		else:

			print 1,-1

	else:

		if((n-i)%2 == 0):

			print -1,-1

		else:

			print -1,1

else:

	print 0,0
