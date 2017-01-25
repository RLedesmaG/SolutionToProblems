#include <iostream>
#include <ctype.h>
#include <string>

int main(void){
	std::string input;
	while(std::getline(std::cin, input)){
		bool flag=true;
		for(int i=0;i<input.length();i++){
			if(isalpha(input[i])&&flag==true){
				input[i]=toupper(input[i]);
				flag=false;
			}
			else if(isalpha(input[i])){
				input[i]=tolower(input[i]);
				flag=true;
			}
		}
		std::cout<<input<<"\n";
		
	}

	return 0;
}

