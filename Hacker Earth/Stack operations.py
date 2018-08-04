n,k = list(map(int,input().split()))
a = list(map(int,input().split()))

if n == 1:

	if(k%2==0):

		print(a[0])

	else:

		print (-1)

else:

	if n > k:

		print(max(max(a[:k-1]),a[k]))

	elif n ==k:

		print(max(a[:k-1]))

	else:

		print(max(a))
