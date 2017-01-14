x = int(input())
def getsum1(number):
	result = 0
	for i in range(1, number+1):
		result+=i*i
	return result

def getsum2(n):
	result = 0
	return n*n*(n+1)*(n+1)/4
	
print(getsum2(x)-getsum1(x))
