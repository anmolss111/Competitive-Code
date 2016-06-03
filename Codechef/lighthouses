def light(xy,house):
    if len(xy)==0:
        return house
    minx=xy[0][0]
    minxym=xy[0][1]
    minxyp=xy[0][1]
    maxx=xy[0][0]
    maxxym=xy[0][1]
    maxxyp=xy[0][1]
    miny=xy[0][0]
    minyxm=xy[0][1]
    minyxp=xy[0][1]
    maxy=xy[0][0]
    maxyxm=xy[0][1]
    maxyxp=xy[0][1]
    for i in range(1,len(xy)):
        if(minx>xy[i][0]):
            minx=xy[i][0]
            minxym=xy[i][1]
            minxyp=xy[i][1]
        elif(minx==xy[i][0] and minxym>xy[i][1]):
            minxym=xy[i][1]
        elif(minx==xy[i][0] and minxyp<xy[i][1]):
            minxyp=xy[i][1]
        if(maxx<xy[i][0]):
            maxx=xy[i][0]
            maxxym=xy[i][1]
            maxxyp=xy[i][1]
        elif(maxx==xy[i][0] and maxxym>xy[i][1]):
            maxxym=xy[i][1]
        elif(maxx==xy[i][0] and maxxyp<xy[i][1]):
            maxxyp=xy[i][1]
        if(miny>xy[i][1]):
            miny=xy[i][1]
            minyxm=xy[i][0]
            minyxp=xy[i][0]
        elif(miny==xy[i][1] and minyxm>xy[i][0]):
            minyxm=xy[i][0]
        elif(miny==xy[i][1] and minyxp<xy[i][0]):
            minyxp=xy[i][0]
        if(maxy<xy[i][1]):
            maxy=xy[i][1]
            maxyxm=xy[i][0]
            maxyxp=xy[i][0]
        elif(maxy==xy[i][1] and maxyxm>xy[i][0]):
            maxyxm=xy[i][0]
        elif(maxy==xy[i][1] and maxyxp<xy[i][0]):
            maxyxp=xy[i][0]
    c=[0 for i in range(0,16)]
    for i in range(0,len(xy)):
        if xy[i][1]>=minxyp:
            c[0]+=1
        if xy[i][1]<=minxyp:
            c[1]+=1
        if xy[i][1]>=minxym:
            c[2]+=1
        if xy[i][1]<=minxym:
            c[3]+=1
        if xy[i][1]>=maxxyp:
            c[4]+=1
        if xy[i][1]<=maxxyp:
            c[5]+=1
        if xy[i][1]>=maxxym:
            c[6]+=1
        if xy[i][1]<=maxxym:
            c[7]+=1
        if xy[i][0]>=minyxp:
            c[8]+=1
        if xy[i][0]<=minyxp:
            c[9]+=1
        if xy[i][0]>=minyxm:
            c[10]+=1
        if xy[i][0]<=minyxm:
            c[11]+=1
        if xy[i][0]>=maxyxp:
            c[12]+=1
        if xy[i][0]<=maxyxp:
            c[13]+=1
        if xy[i][0]>=maxyxm:
            c[14]+=1
        if xy[i][0]<=maxyxm:
            c[15]+=1
    maxc=c[0]
    maxci=0
    for i in range(1,16):
        if maxc<c[i]:
            maxc=c[i]
            maxci=i
    if maxci==0:
        house.append([[minx,minxyp],'NE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]>=minxyp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==1:
        house.append([[minx,minxyp],'SE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]<=minxyp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==2:
        house.append([[minx,minxym],'NE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]>=minxym:
                xy.pop(i)
            else:
                i+=1
    elif maxci==3:
        house.append([[minx,minxym],'SE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]<=minxym:
                xy.pop(i)
            else:
                i+=1
    elif maxci==4:
        house.append([[maxx,maxxyp],'NW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]>=maxxyp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==5:
        house.append([[maxx,maxxyp],'SW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]<=maxxyp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==6:
        house.append([[maxx,maxxym],'NW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]>=maxxym:
                xy.pop(i)
            else:
                i+=1
    elif maxci==7:
        house.append([[maxx,maxxym],'SW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][1]<=maxxym:
                xy.pop(i)
            else:
                i+=1
    elif maxci==8:
        house.append([[miny,minyxp],'NW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]>=minyxp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==9:
        house.append([[miny,minyxp],'SW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]<=minyxp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==10:
        house.append([[miny,minyxm],'NE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]>=minyxm:
                xy.pop(i)
            else:
                i+=1
    elif maxci==11:
        house.append([[miny,minyxm],'SE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]<=minyxm:
                xy.pop(i)
            else:
                i+=1
    elif maxci==12:
        house.append([[maxy,maxyxp],'NW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]>=maxyxp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==13:
        house.append([[maxy,maxyxp],'SW'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]<=maxyxp:
                xy.pop(i)
            else:
                i+=1
    elif maxci==14:
        house.append([[maxy,maxyxm],'NE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]>=maxyxm:
                xy.pop(i)
            else:
                i+=1
    elif maxci==15:
        house.append([[maxy,maxyxm],'SE'])
        i=0
        for j in range(0,len(xy)):
            if xy[i][0]<=maxyxm:
                xy.pop(i)
            else:
                i+=1
    temp=light(xy,house)
    return temp
t=input()
for i in range(0,t):
    n=input()
    xy=[]
    o=[]
    for j in range(0,n):
        s=raw_input()
        s=s.split()
        s=map(int,s)
        xy.append(s)
        o.append(s)
    lighthouse=light(xy,[])
    print len(lighthouse)
    for i in range(0,len(lighthouse)):
        print o.index(lighthouse[i][0])+1,lighthouse[i][1]
