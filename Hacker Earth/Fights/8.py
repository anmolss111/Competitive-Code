t = int(input())

for test in range(0,t):

	m, n = list(map(int, input().split()))

	newSubjectsMap = {}
	for m in range(0,m):

		u, v = list(map(int, input().split()))

		if(u not in newSubjectsMap):

			newSubjectsMap[u] = []

		newSubjectsMap[u].append(v)

	oldSubjectMap = {}
	for n in range(0,n):

		w, x = list(map(int, input().split()))

		if(w not in oldSubjectMap):

			oldSubjectMap[w] = []

		oldSubjectMap[w].append(x)

	good = 0
	great = 0
	for i in newSubjectsMap:

		if(i in oldSubjectMap):

			good += min(len(oldSubjectMap[i]),len(newSubjectsMap[i]))

			transformedProficencies = list(set(newSubjectsMap[i]))
			for j in range(0,len(transformedProficencies)):

				great += min(oldSubjectMap[i].count(transformedProficencies[j]), newSubjectsMap[i].count(transformedProficencies[j]))

	g, h = list(map(int, input().split()))

	if(good >= g and great < h):

		print('Good')

	if(good >= g and great >= h):

		print('Great')

	else:

		print(':(')
