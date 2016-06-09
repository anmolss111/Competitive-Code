t = input()
for k in range(0,t):
	s = map(int,raw_input().split())
	if(s[0]+s[1]+s[2]+s[3]<=s[4]):
		print('YES')
	else:
		print('NO')