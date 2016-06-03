t=input()
for k in range(0,t):
    n = input()
    x = [[] for i in range(0,n*n)]
    for i in range(0,n):
        s=raw_input()
        s=s.split()
        s=map(int,s)
        for j in range (0,n):
            temp = s[j]-1
            l = []
            l.append(i)
            l.append(j)
            x[temp] = l
    s=0
    for i in range(1,len(x)):
        s = s + abs(x[i][0]-x[i-1][0])
        s = s + abs(x[i][1]-x[i-1][1])
    print s
