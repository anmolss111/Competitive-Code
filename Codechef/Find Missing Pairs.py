t=input()
for k in range(0,t):
    n=input()
    a=raw_input()
    a=map(int,a.split())
    c=0
    for i in range(0,n):
        for j in range(i,n):
            if a[i]==a[j]:
                c=c+1
    print c
    
