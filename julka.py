## Julka - https://www.spoj.com/problems/JULKA/
'''
If a = no. of apples with Natalia , b = no. of apples with Klaudia.
Then, 
a+b = m 	(1)
b-a = n 	(2)
=> b = (m+n)/2
=> a = m-b
'''
nCases = 10
for i in range(nCases):
	m = int(input())
	n = int(input())

	b = (m+n) // 2
	a = m-b
	print(b)
	print(a)