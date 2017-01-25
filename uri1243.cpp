#include <iostream>
#include<string>
#include <ctype.h>

bool isword(std::string word){
	bool flag=true;
	if(word[word.length()-1]=='.') word = word.substr(0, word.length()-1);
	if(word=="") return false;
	for(int i=0;i<word.length();i++){
		if(isalpha(word[i])) 
			continue;
		else flag=false;
	}
	return flag;
}


int main(void){
	std::string input, input1;
	while(std::getline(std::cin, input)){

		int words=0,lengths=0;
		int average=0;
		
		
		input+=" ";
		std::string word="";
		for(int i=0;i<input.length();i++){
		
			if(input[i]!=' ')
		 		word+=input[i];
		 		
			else{
				
				if(isword(word)==true){
					words++;
					if(word[word.length()-1]=='.')
						lengths-=1;
					lengths+=word.length();
				
					
				}
				word="";
			}
		}
		if(words==0)
			std::cout<<"250\n";
		else{
			average = lengths/words;
			if(average<=3) std::cout<<"250\n";
			else if(average==4 || average == 5) std::cout<<"500\n";
			else std::cout<<"1000\n";
		}
	}
	return 0;
}
