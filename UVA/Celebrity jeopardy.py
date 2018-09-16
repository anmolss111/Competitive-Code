from sys import stdin

flag = 0
for line in stdin:

	line = list(line)[:-1]
	print(''.join(line))
