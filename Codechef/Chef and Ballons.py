t = input()
for k in range(0,t):
	s = raw_input()
	s = map(int,s.split())
	k = input()
	c = 0
	for i in range(0,3):
		if(s[i] < k-1):
			c = c + s[i]
		else:
			c = c + k-1
	print c+1