## Solution to sbank from spoj
# Problem statement can be found at https://www.spoj.com/problems/SBANK/

t = int(input())

for iterNum in range(t):
	n = int(input())
	accDict = {} 
	for acc in range(n):
		accNum = input()				# account number is read and added to dictionary
		if accNum in accDict.keys():
			accDict[accNum] += 1
		else:
			accDict[accNum] = 1
	for num in sorted(accDict.keys()):
		repeatVal = accDict[num]
		print(num+' '+str(repeatVal))
	print()								# for blank lines
	input()
