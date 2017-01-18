#include <iostream>
#include <string.h>

int main(void){
	int t;
	std::cin >> t;
	for(int i=0;i<t;i++){
		int relevance[10];
		std::string urls[10];
		
		for(int j=0;j<10;j++){
			std::cin >> urls[j] >> relevance[j];
		}
		int max=0;
		for(int j=0;j<10;j++)
			if(relevance[j] >max)
				max=relevance[j];
				
		std::cout << "Case #"<<i+1<<":\n";
		for(int j=0;j<10;j++)
			if(relevance[j] == max)
				std::cout << urls[j] << "\n";
		
	}

	return 0;
}
