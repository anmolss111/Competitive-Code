from sys import stdin

flag = 1
for line in stdin:

	number = int(line)

	if(number == 42):

		flag = 0

	if(flag == 1):

		print(number)
