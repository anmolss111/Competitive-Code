n = int(input())
s = input().split()

count = 0
for i in range(0,n):

	if(sum(list(map(int,list(s[i]))))%3 == 0):

		count+=1

print(count)
