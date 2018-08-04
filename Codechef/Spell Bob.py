t = int(input())

for i in range(0,t):

	top = input()
	bottom = input()

	b = []
	o = []
	for j in range(0,3):

		if(top[j].lower() == 'b' or bottom[j].lower() == 'b'):

			b.append(j)

		if(top[j].lower() == 'o' or bottom[j].lower() == 'o'):

			o.append(j)

	flag = 0

	for oIndex in o:

		if(len(b) == 2 and oIndex not in b):

			flag = 1
			break

		elif (len(b) == 3):

			flag = 1
			break

	if flag == 0:

		print('no')

	else:

		print('yes')
