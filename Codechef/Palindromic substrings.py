t=input()
for i in range(0,t):
	a = raw_input()
	b = raw_input()
	f = 0
	a_n = [0 for j in range(0,26)]
	b_n = [0 for j in range(0,26)]
	for j in range(0,len(a)):
		a_n[ord(a[j])-97] +=1
	for j in range(0,len(b)):
		b_n[ord(b[j])-97] +=1
	for j in range(0,26):
		if(a_n[j]>=1 and b_n[j]>=1):
			f = 1
			break
	if(f==1):
		print 'Yes'
	else:
		print 'No'
