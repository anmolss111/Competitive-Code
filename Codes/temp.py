inputArray = map(int,raw_input().split())
s,t = inputArray[0],inputArray[1]
inputArray = map(int,raw_input().split())
a,b = inputArray[0],inputArray[1]
inputArray = map(int,raw_input().split())
m,n = inputArray[0],inputArray[1]
inputArray = map(int,raw_input().split())
c = [0,0]
for i in range(0,m):
    if(a + inputArray[i] >= s and a + inputArray[i] <= t):
        c[0] += 1
inputArray = map(int,raw_input().split())
for i in range(0,n):
    if(b + inputArray[i] >= s and b + inputArray[i] <= t):
        c[1] += 1
print c[0]
print c[1]
