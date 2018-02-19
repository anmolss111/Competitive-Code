n = int(input())

for i in range(0,n):

	sumOfAnswers = sum(list(map(int,input().split())))

	if(sumOfAnswers == 0):

		print('Beginner')

	elif(sumOfAnswers == 1):

		print('Junior Developer')

	elif(sumOfAnswers == 2):

		print('Middle Developer')

	elif(sumOfAnswers == 3):

		print('Senior Developer')

	elif(sumOfAnswers == 4):

		print('Hacker')

	elif(sumOfAnswers == 5):

		print('Jeff Dean')