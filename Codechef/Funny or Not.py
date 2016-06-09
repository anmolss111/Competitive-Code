t=input()
for j in range(0,t):
    s=raw_input()
    r=s[::-1]
    f=0
    for i in range(1,len(s)):
        if abs(ord(s[i])-ord(s[i-1]))!=abs(ord(r[i])-ord(r[i-1])):
            f=1
            break
    if f==0:
        print 'Funny'
    else:
        print 'Not Funny'
