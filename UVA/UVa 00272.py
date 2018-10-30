from sys import stdin

flag = 0
for line in stdin:

	line = list(line)[:-1]
	for characterIndex in range(0,len(line)):

		if(line[characterIndex] == '"'):

			if(flag == 0):

				line[characterIndex] = '``'
				flag = 1

			else:

				line[characterIndex] = "''"
				flag = 0

	print(''.join(line))
