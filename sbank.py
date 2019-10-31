t = int(input())

for iterNum in range(t):
	n = int(input())
	accDict = {} 
	for acc in range(n):
		accNum = input()
		if accNum in accDict.keys():
			accDict[accNum] += 1
		else:
			accDict[accNum] = 1
	for num in sorted(accDict.keys()):
		repeatVal = accDict[num]
		print(num+' '+str(repeatVal))
	print()
	input()
