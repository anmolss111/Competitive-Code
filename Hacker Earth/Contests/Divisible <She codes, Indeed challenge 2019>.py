def solve (A,N):

	number = ['','']
	for i in range(0,int(N/2)):

		number[0] += A[i][0]
		number[1] += A[int(N/2)+i][-1]

	newnumber = number[0] + number[1]

	newnumber = int(newnumber)

	if(newnumber%11==0):

		return('OUI')

	else:

		return('NON')

N = int(input())
A = input().split()

out_ = solve(A,N)
print (out_)
