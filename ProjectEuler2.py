x = int(input())

def getfibonacci():
	fib1 = 1
	fib2 = 1
	while True:
		fib3 = fib2+fib1
		yield fib3
		fib1=fib2
		fib2=fib3
def getsum(x):
	sum =0
	for fibo in getfibonacci():
		if fibo <= x:
			if fibo %2 ==0:
				sum+=fibo
		else:
			print(sum)
			return
			
getsum(x)
	

