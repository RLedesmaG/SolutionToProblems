#include <iostream>
#include <math.h>

int getdivisors(int n){

	int res=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i == 0)
			res+=1;
	}
	return res*2;
}

int main(void){
	int i=1;
	while(true){
		
		if(getdivisors(i*(i+1)/2)> 500){
			std::cout << i*(i+1)/2 << "\n";
			break;
		}
		i+=1;
	}
return 0;
}
