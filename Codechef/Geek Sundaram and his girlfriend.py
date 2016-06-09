t = input()
fact = [1,1]
for i in range(2,31):
	fact.append(i*fact[i-1])
for k in range(0,t):
	s = raw_input()
	a = [0 for i in range(0,26)]
	for i in range(0,len(s)):
		a[ord(s[i])-97] += 1
	count = 0
	j = -1
	for i in range(0,26):
		if(a[i]%2 == 1):
			count = count + 1
			j = i
		else:
			a[i] = a[i]/2
	if(count > 1):
		print '-1'
	else:
		x = fact[int(len(s)/2)]
		for i in range(0,26):
			if(i != j):
				x = x/fact[a[i]]
		print x
