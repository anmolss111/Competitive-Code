import re

t = int(input())

for test in range(0,t):

	s = input()

	a1 = [m.start() for m in re.finditer('SUVOJIT', s)]
	a2 = [m.start() for m in re.finditer('SUVO', s)]

	a2 = set(a2)
	a2 = [o for o in a2 if o not in a1]

	print('SUVO = ' + str(len(a2)) + ', SUVOJIT = ' + str(len(a1)))
