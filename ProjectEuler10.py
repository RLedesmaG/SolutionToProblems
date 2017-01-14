import math
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
	
def getprimes():
	number=2
	while True:
		if(is_prime(number)):
			yield number
		number+=1
sum=0		
for i in getprimes():
	if i <= 2000000:
		sum+=i
		print(i, sum)
	else:
		print(sum)
		break
