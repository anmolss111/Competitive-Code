def n2(n):
    x=n*(n+1)*(2*n+1)
    x=x/6
    return x
t=input()
for k in range(0,t):
    s=input()
    i=0
    while n2(i)<s:
        i=i+1000
    i=i-1000
    if n2(i)==s:
        print i
    else:
        f=0
        for j in range(1,1000):
            if n2(j+i)>s:
                f=1
                break
            if n2(j+i)==s:
                break
        if f==1:
            j=j-1
        print i+j
    
