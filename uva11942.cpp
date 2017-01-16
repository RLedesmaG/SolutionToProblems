#include <iostream>

int main(void){
	int n, aux;
	int beards[10];
	
	std::cin >> n;
	std::cout << "Lumberjacks:\n";
	for(int i=0;i<n;i++){
		for(int k=0;k<10;k++)
			std::cin >> beards[k];
		aux=0;
		for(int j=0;j<9;j++){
			if(beards[j] > beards[j+1])
				aux++;
			else
				aux--;
		}
		if(aux == 9 || aux == -9)
			std::cout << "Ordered\n";
		else
			std::cout << "Unordered\n";
	}
		

	return 0;
}
