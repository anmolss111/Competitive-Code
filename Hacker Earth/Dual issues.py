a = [2]
for i in range(3,1001,2):
	flag = 0
	for j in range(0,len(a)):
		if(i%a[j] == 0):
			flag = 1
			break
	if(flag == 0):
		a.append(i)
t = input()
while t != 0:
	n = input()
	s = map(int,raw_input().split())
	s.sort()
	flag = -1
	for i in range(0,len(s)):
		if(s[len(s)-i-1] in a):
			flag = len(s)-i-1
			break
	if(flag == -1):
		print -1
	else:
		print s[flag]*s[flag]
	t -= 1