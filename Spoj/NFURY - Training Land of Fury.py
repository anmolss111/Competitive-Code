import math
a = [1]

for i in range(2,1001):
	sq = int(math.sqrt(i))
	if( sq*sq == i ):
		a.append(1)
	else:
		min = i
		for j in range(1,sq+1):
			if(min > (a[i - j*j -1] + 1)):
				min = a[i - j*j -1] + 1
		a.append(min)

t = input()
for k in range(0,t):
	n = input()
	print a[n-1]