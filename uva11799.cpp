#include <iostream>

int main(void){
	int t, n;
	std::cin >> t;
	for(int i=0;i<t;i++){
		std::cin >> n;
		int max=0;
		for(int j=0;j<n;j++){
			int aux;
			std::cin >> aux;
			if(aux > max)
				max = aux;
		}
		std::cout << "Case "<<i+1<<": "<<max<<"\n";
			
	}	
	return 0;
}
