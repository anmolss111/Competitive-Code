import math
t = input()
for k in range(0,t):
	n = input()
	sqr = int(math.sqrt(n))
	if(sqr*sqr == n):
		print('YES')
	else:
		print('NO')