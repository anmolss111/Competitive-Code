n,k = list(map(int,input().split()))
a = list(map(int,input().split()))

topSum = [a[0]]
bottomSum = [a[n-1]]

for i in range(1,k):

	topSum.append(topSum[i-1] + a[i])
	bottomSum.append(bottomSum[i-1] + a[n-i-1])

sum = -1
for i in range(0,k):

	if(i == k-1):

		if(sum < topSum[i]):

			sum = topSum[i]

	else:

		if(sum < (topSum[i] + bottomSum[k-i-2])):

			sum = topSum[i] + bottomSum[k-i-2]

print(sum)
