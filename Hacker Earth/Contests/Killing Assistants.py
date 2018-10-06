def gcd(a,b):
	if(b == 0):
		return a
	else:
		return gcd(b,a%b)

t = input()
while t != 0:
	s = map(int,raw_input().split())
	n = s[0]
	m = s[1]
	x1 = m
	y1 = n*4
	x2 = (n-m)*2
	y2 = n*9
	x3 = x1*y2 + x2*y1
	y3 = y1*y2
	x4 = x1*y3
	y4 = y1*x3
	d = gcd(x4,y4)
	print str(x4/d) + '/' + str(y4/d)
	t -= 1