t=input()
for k in range(0,t):
    s=raw_input()
    c=0
    m=0
    i=0
    while(i<len(s)):
        if s[i]=='M':
            m=m+3
        elif s[i]=='L':
            m=m+4
        c=(c+1)%6
        if c==0 and i<(len(s)-1):
            i=i+1
        i=i+1
    print m
            
        
