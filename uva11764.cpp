#include <iostream>
int main(void){
	int t, n;
	std::cin >> t;
	for(int i=0;i<t;i++){
		std::cin >> n;
		int walls[n];
		for(int j=0;j<n;j++)
			std::cin >> walls[j];
		int high=0, low=0, aux;
		aux = walls[0];
		for(int j=0;j<n;j++){
			if(aux > walls[j])
				low++;
			else if(aux < walls[j])
				high++;
			aux = walls[j];
		}
		std::cout << "Case "<<i+1<<": "<<high<<" "<<low<<"\n";
		
	}

	return 0;
}
