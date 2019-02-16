n, m = list(map(int,input().split()))

bestPrice = {}
for i in range(0,n):

	p, b = list(map(int,input().split()))

	if(b not in bestPrice):

		bestPrice[b] = p

	elif(bestPrice[b] < p):

		bestPrice[b] = p

count = 0
for i in bestPrice:

	count += bestPrice[i]

print(count)
