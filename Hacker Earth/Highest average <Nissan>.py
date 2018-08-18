n = int(input())
a = list(map(int,input().split()))
q = int(input())

a.sort()

aSum = [a[0]]
aAverage = [a[0]]

for i in range(1,n):

	aSum.append(aSum[i-1] + a[i])
	aAverage.append(aSum[i]/(i+1))

for i in range(0,q):

	k = int(input())

	if(aAverage[n-1] < k):

		print(n)

	else:

		low = 0
		high = n

		while (low != high):

			mid = int((low + high)/2)

			if(aAverage[mid] < k):

				low = mid + 1

			else:

				high = mid;

		print(high)
