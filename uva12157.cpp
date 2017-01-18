#include <iostream>
#include <math.h>

int main(void){
	int t, n;
	std::cin >> t;
	for(int i=0;i<t;i++){
		std::cin >> n;
		int calls[n];
		for(int j=0;j<n;j++)
			std::cin >> calls[j];
			
		int mile=0, juice=0, aux=0;
		for(int j=0;j<n;j++){
		
			mile+= floor((calls[j])/30)+1;
			
			juice+=floor(calls[j]/60)+1;
			
			
			
		}
		std::cout << "Case "<<i+1<<": ";
		if(mile*10 < juice*15)
			std::cout << "Mile "<<mile*10<<"\n";
		else if(juice*15 < mile*10)
			std::cout << "Juice " << juice*15 << "\n";
		else
			std::cout << "Mile Juice "<<mile*10 <<"\n";
	}

	return 0;
}
