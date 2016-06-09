t=input()
for i in range(0,t):
    s=map(int,raw_input().split())
    r=map(int,raw_input().split())
    tl=abs(s[1]-s[2])+abs(s[1]-s[3])
    tl=tl*r[0]
    ts=abs(s[1]-s[3])
    ts=ts*r[1]
    if tl<=ts:
        print 'LIFT'
    else:
        print 'STAIRS'
