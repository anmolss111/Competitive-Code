n = int(input())
a = map(int,raw_input().split())
m = int(input())
b = map(int,raw_input().split())

maxb = max(b)

count = 0

for i in range(0,len(a)):

	if(maxb - a[i] >= 0):

		count += maxb - a[i] + 1

print(count)
