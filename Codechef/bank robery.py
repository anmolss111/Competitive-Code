t=input()
for k in range(0,t):
    s=raw_input()
    s=s.split()
    m=int(s[0])
    p=float(s[1])
    if(p!=1):
        p2=-1*p
        r1=pow(p2,m)
        r2=(1+p)
        c = float(1-r1)/(r2)
        d = 1-c
        c1 = c*1000000000
        c2 = d*1000000000
    else:
        if(m%2==1):
            c1 = 1000000000.00
            c2 = 0.00
        else:
            c1 = 0.00
            c2 = 1000000000.00
    print c1,c2
