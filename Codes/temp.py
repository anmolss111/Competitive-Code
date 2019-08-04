'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

N = int(input());
M = int(input());

data = {}

for i in range(0,N):

	for j in input().split():

		mktID = int(j)

		if(mktID not in data):

			data[mktID] = []

		data[mktID].append(i)



data1 = data.copy()
print(data1)

#  write your code here,
# process the inputs
#  and print the output
