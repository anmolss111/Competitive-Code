while 1:

	s = input()

	if(s == '0 0 0 0'):

		break

	initial, l1, l2, l3 = list(map(int,s.split()))

	value = 720

	if(l1 < initial):

		value += (initial-l1)*9

	else:

		value += (40-(l1-initial))*9

	value += 360

	if(l2 < l1):

		value += (40-(l1-l2))*9

	else:

		value += (l2-l1)*9

	if(l3 < l2):

		value += (l2-l3)*9

	else:

		value += (40-(l3-l2))*9

	print(value)
