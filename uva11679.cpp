#include <iostream>
int main(void){
	int b, n, d, c, v;
	while(true){
		std::cin >> b >> n;
		if(b == 0 && n == 0)
			break;
		bool flag = true;
		int reserves[b];
		for(int i=0;i<b;i++)
			std::cin >> reserves[i];
		for(int j=0;j<n;j++){
			std::cin >> d >> c >> v;
			reserves[d-1]-=v;
			reserves[c-1]+=v;
		}
		for(int i=0;i<b;i++){
			if(reserves[i]<0)
				flag=false;
		}
		if(flag == true)
			std::cout << "S\n";
		else
			std::cout << "N\n";
	
	}

	return 0;
}
