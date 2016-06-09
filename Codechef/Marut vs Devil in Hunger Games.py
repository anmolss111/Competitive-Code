s=raw_input()
s=s.split()
s=map(int,s)
q=input()
st=0
dt=0
for i in range(0,q):
    m=raw_input()
    d=raw_input()
    mi=[0 for x in range(0,27)]
    di=[0 for x in range(0,27)]
    for j in range(0,len(m)):
        mi[ord(m[j])-97]+=1
    for j in range(0,len(d)):
        di[ord(d[j])-97]+=1
    for j in range(0,27):
        mi[j]=mi[j]-di[j]
        di[j]=di[j]-mi[j]
        if mi[j]>0:
            st=st+mi[j]*s[j]
        if di[j]>0:
            dt=dt+di[j]*s[j]
if st>dt:
    print 'Marut'
elif st<dt:
    print 'Devil'
else:
    print 'Draw'
