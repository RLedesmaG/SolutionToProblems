def ispalindrome(number):
	i=0
	j=len(number)-1
	while i<=j:
		if number[i] != number[j]:
			return False
		i+=1
		j-=1
	return True
		
def getsolution():
	i=j=999
	max=0
	while True:
		if ispalindrome(str(i*j)) and i*j>max:
			print(i, j)
			max=i*j
			print(max)
			
		if j>=100:
			j-=1
		else:
			j=999
			i-=1
getsolution()
		
