x = int(input())

def getmultiples(x):
	total=0
	for i in range(1, x):
		if i%3 == 0:
			total+=i
		elif i%5==0:
			total+=i
	return total
			
print(getmultiples(x))
