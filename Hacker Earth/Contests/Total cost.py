p, s, t, h, x = list(map(int,input().split()))

if((s-x)<=t):

	print((s-t)*p + h*(t-(s-x)))

else:

	print(x*p)
