n = int(input())

evaluatedDictionary = {}

for i in range(0,n):

	s = input()
	s = s.split()
	username = s[0]
	time = int(s[1])

	if(username not in evaluatedDictionary):

		evaluatedDictionary[username] = {

			'score': 0,
			'time': 0
		}

	evaluatedDictionary[username]['score'] += 1
	evaluatedDictionary[username]['time'] += time

indexedDictionary = {}
scores = []

for username in evaluatedDictionary:

	score = evaluatedDictionary[username]['score']
	time = evaluatedDictionary[username]['time']

	if(score not in indexedDictionary):

		indexedDictionary[score] = {}

	if(time not in indexedDictionary[score]):

		indexedDictionary[score][time] = []

	indexedDictionary[score][time].append(username)

count = 1

scores = sorted(indexedDictionary)

for x in range(len(scores)-1,-1,-1):

	i = scores[x]

	for j in sorted(indexedDictionary[i]):

		usernames = indexedDictionary[i][j]
		usernames.sort()

		for username in usernames:

			print(count, username)
			count += 1
