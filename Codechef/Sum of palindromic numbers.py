t=input()
for i in range(0,t):
    s=raw_input()
    s=s.split()
    l=int(s[0])
    r=int(s[1])
    c=0
    for j in range(l,r+1):
        s=str(j)
        if len(s)==1:
            c=c+j
        elif len(s)==2 or len(s)==3:
            if s[0]==s[len(s)-1]:
                c=c+j
        elif len(s)==4 or len(s)==5:
            if s[0]==s[len(s)-1] and s[1]==s[len(s)-2]:
                c=c+j
    print c
