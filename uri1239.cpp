#include <iostream>
#include <string>

int main(void){
	std::string input;
	while(std::getline(std::cin, input)){
		std::string output="";
		bool italic=false;
		bool bold=false;
		for(int i=0;i<input.length();i++){
			if(input[i] == '*'){
				if(bold==false){
					output+="<b>";
					bold=true;
				}
				else{
				output+="</b>";
				bold=false;
				}
			}
			else if(input[i]=='_'){
				if(italic==false){
					output+="<i>";
					italic=true;
				}
				else{
					output+="</i>";
					italic=false;
				}
			}
			else output+=input[i];
		}
		std::cout<<output<<"\n";
	}

	return 0;
}
