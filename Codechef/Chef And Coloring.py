t = input()
for k in range(0,t):
	n = input()
	s = raw_input()
	a = [0 for i in range(0,3)]
	for i in range(0,n):
		if(s[i] == 'R'):
			a[0] += 1
		elif(s[i] == 'G'):
			a[1] += 1
		elif(s[i] == 'B'):
			a[2] += 1
	max = a[0]
	ind = 0
	for i in range(1,3):
		if max < a[i]:
			max = a[i]
			ind = i
	c = 0
	for i in range(0,3):
		if(i != ind):
			c = c + a[i]
	print c
