t=input()
for k in range(0,t):
    s=raw_input()
    s=s.split()
    n=int(s[0])
    m=int(s[1])
    s=raw_input()
    s=s.split()
    a=map(int,s)
    a.sort()
    s=m-1
    cuts=1
    a[0]=a[0]-1
    for i in range(0,m):
        while(s>2 and a[i]!=0):
            a[i]=a[i]-1
            s=s-1
            cuts=cuts+1
        if(a[i]==0 and s>2):
            s=s-1
        elif(s==2 and a[i]!=0):
            cuts=cuts+1
            break
        elif(a[i]==0 and s==2):
            break
    if(m==1):
        cuts=0
    print cuts
