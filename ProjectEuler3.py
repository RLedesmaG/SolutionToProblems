import math
x = int(input())

def is_prime(number):
	if number > 1:
		if number ==2:
			return True
		if number % 2 == 0:
			return False
		for current in range(3, int(math.sqrt(number)+1), 2):
			if number % current == 0:
				return False
		return True
	return False
	
def getlargestprime(x):
	max=0
	for i in range(1, int(math.sqrt(x)+1)):
		if is_prime(i) and x%i==0:
			max=i
			
	print(max)
getlargestprime(x)
