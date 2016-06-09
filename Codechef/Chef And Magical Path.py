t = input()
for k in range(0,t):
	s = raw_input()
	s = map(int,s.split())
	n = s[0]
	m = s[1]
	if(n%2 == 1 and m%2 == 1):
		print 'No'
	else:
		if((n == 1 and m > 2) or (m == 1 and n > 2)):
			print 'No'
		else:
			print 'Yes'

spoj