def gettriplet():
	c=1
	while c*c < 1000000:
		for i in range(1, c):
			for j in range(1, c):
				
				if i*i + j*j == c*c and i+j+c==1000:
					print(i, j, c, i+j+c)
					print(i*j*c)
					return
					
					
		c+=1
					
gettriplet()
