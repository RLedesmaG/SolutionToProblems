#include <iostream>
#include <string.h>

int main(void){
	std::string input;
	int n, aux=0, finish = 16;
	std::cin >> n;
	std::string song[16];
	for(int i=0;i<16;i++){
		if(i%4 == 0)
			song[i] = "Happy";
		else if(i%4 == 1)
			song[i] = "birthday";
		else if(i%4 == 2)
			song[i] = "to";
		else if(i%4 == 3 && i!= 11)
			song[i] = "you";
		else
			song[i] = "Rujia";
	
	}
	std::string names[n];
	for(int i=0;i<n;i++){
		std::cin >> input;
		names[i] = input;
	}
	aux=0;
	if(n <= 16){
		while(aux < n){
			for(int i=0;i<16;i++){
				std::cout << names[i%n] <<": ";
				std::cout << song[i]<<"\n";
				aux+=1;
			}
		
		}
	}
	else{
		int flag=0;
		while(aux < n){
			for(int i=0;i<16;i++){
				
				std::cout << names[flag] <<": ";
				std::cout << song[i]<<"\n";
				aux+=1;
				flag+=1;
				if(flag == n)
					flag = 0;
			}
		
		}
	
	
	}
	
	
	
	return 0;
}
