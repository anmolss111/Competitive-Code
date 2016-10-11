import math
t = input()
for k in range(0,t):
    s = map(int,raw_input().split())
    n,m,c = s[0],s[1],s[2]
    if(n*m < c):
        print 0
    else:
        count = 0
        for i in range(1,int(math.sqrt(c)+1)):
            if(c%i == 0):
                if(i<=n and (c/i)<=m):
                    count += 1
                if(i<=m and (c/i)<= n and i != (c/i)):
                    count += 1
        print(count)
