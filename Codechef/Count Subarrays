t=input()
for k in range(0,t):
    n=input()
    s=raw_input()
    a=map(int,s.split())
    s=0
    i=0
    while(i<n-1):
        c=1
        while(i<n-1 and a[i]<=a[i+1]):
            c=c+1
            i=i+1
        i=i+1
        d=c*(c+1)
        d=d/2
        s=s+d
    if a[n-2]>a[n-1] and n>=2:
        s=s+1
    if n==1:
        s=1
    print s
    
        
