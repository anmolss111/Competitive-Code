n = int(input())
a = list(map(int,input().split()))

flag = 0
for i in range(0,n-1):

	a[i+1] -= a[i]
	if(a[i+1] < 0):

		flag = 1
		break

if(a[n-1] != 0):

	flag = 1

if(flag == 1):

	print('NO')

else:

	print('YES')
