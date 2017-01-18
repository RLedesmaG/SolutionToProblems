#include <iostream>
#include <string.h>


int main(void){
	int t, n, r, aux;
	std::cin >> t;
	for(int i=0;i<t;i++){
		std::cin >> n;
		r=0;
		std::string input;
		int instructions[n];
		for(int j=0;j<n;j++){
			std::cin >> input;
			if(input == "LEFT")
				instructions[j] = -1;
			else if(input == "RIGHT")
				instructions[j] = 1;
			else{
				std::cin >> input;
				std::cin >> aux;
				instructions[j] = instructions[aux-1];
			}
		}
		for(int j=0;j<n;j++)
			r+= instructions[j];
		
		std::cout << r << "\n";
	}
	
	return 0;
}
