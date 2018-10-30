import math

t = int(input())

for test in range(0,t):

	n, m = list(map(int,input().split()))

	n = n-2
	m = m-2

	print(math.ceil(n/3)*math.ceil(m/3))
