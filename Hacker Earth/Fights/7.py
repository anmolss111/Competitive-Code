import math

t, r, g, b = list(map(int, input().split()))

count = {

	'red': 0,
	'green': 0,
	'blue': 0,
	'yellow': 0,
	'cyan': 0,
	'magenta': 0,
	'white': 0,
	'black': 0
}
for i in range(0,t):

	redFlag = ((math.floor(i/r))%2 == 1)
	greenFlag = ((math.floor(i/g))%2 == 1)
	blueFlag = ((math.floor(i/b))%2 == 1)

	if(not redFlag and not greenFlag and not blueFlag):

		count['black'] += 1

	elif(not redFlag and not greenFlag and blueFlag):

		count['blue'] += 1

	elif(not redFlag and greenFlag and not blueFlag):

		count['green'] += 1

	elif(not redFlag and greenFlag and blueFlag):

		count['cyan'] += 1

	elif(redFlag and not greenFlag and not blueFlag):

		count['red'] += 1

	elif(redFlag and not greenFlag and blueFlag):

		count['magenta'] += 1

	elif(redFlag and greenFlag and not blueFlag):

		count['yellow'] += 1

	elif(redFlag and greenFlag and blueFlag):

		count['white'] += 1

print(count['red'], count['green'], count['blue'], count['yellow'], count['cyan'], count['magenta'], count['white'], count['black'])
