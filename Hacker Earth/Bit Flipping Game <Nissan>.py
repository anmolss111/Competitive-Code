n = int(input())
sumArray = []
for i in range(0,n):

	s = input()

	for j in range(0,len(s)):

		if(len(sumArray) == j):

			sumArray.append(int(s[j]))
		else:

			sumArray[j] += int(s[j])

move = 0
for i in range(0,len(sumArray)):

	if(sumArray[i] != 0):

		move += 1

if(move%2 == 1):

	print('A')
else:

	print('B')

print(move)
