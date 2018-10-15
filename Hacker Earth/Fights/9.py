n = int(input())

playerMap = {}
for i in range(0,n):

	s1, s2 = input().split()

	if(s1 not in playerMap):

		playerMap[s1] = 0

	if(s2 not in playerMap):

		playerMap[s2] = 0

	playerMap[s1] += 1
	playerMap[s2] += 1

maximumCount = max([playerMap[i] for i in playerMap])

players = []
for i in playerMap:

	if(playerMap[i] == maximumCount):

		players.append(i)

players.sort()

print(len(players))
for player in players:

	print(player)
