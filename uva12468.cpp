#include <iostream>
#include <cmath>

int main(void){
	int a, b;
	while(true){
		std::cin >> a >> b;
		if(a==-1 && b == -1)
			break;
		int aux = std::abs(a-b);
		int aux2 = 100-aux;
		if(aux > aux2)
			std::cout << aux2<<"\n";
		else
			std::cout << aux <<"\n";
	
	}
	
	return 0;
}
