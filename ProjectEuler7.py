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
	
def getprime(number):
	aux=1
	n=2
	while aux!=number+1:
		if is_prime(n):
			print(n)
			aux+=1
		n+=1
	print(n-1)
	
getprime(x)
