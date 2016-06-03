x={}
y=[]
count=0
def issafe(i,j):
    if i>=1 and (x[i-1]==j-1 or x[i-1]==j+1):
        return 0
    if y[i][j]!='.':
        return 0
    return 1
def nbishop(z,n,m):
    global count
    for i in range(0,m):
        if(issafe(z,i)):
            x[z]=i
            if(z==n-1):
                count+=1
            else:
                nbishop(z+1,n,m)
s=raw_input()
s=s.split()
s=map(int,s)
n=s[0]
m=s[1]
for i in range(0,n):
    s=raw_input()
    y.append(s)
nbishop(0,n,m)
print count
