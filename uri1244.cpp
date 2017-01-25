#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct pair{
	std::string palabra;
	int posicion;
};

bool compare(pair i, pair j){
	if(i.palabra.length() == j.palabra.length()) return i.posicion<j.posicion;
	return i.palabra.length()>j.palabra.length();
}



int main(void){
	int n;
	std::cin>>n;
	std::string aux;
	std::string input, word, output;
	std::getline(std::cin, input);
	for(int i=0;i<n;i++){
		word="";
		output="";
		std::getline(std::cin, input);
		input+=" ";
		std::vector<pair> strings;
		for(int j=0;j<input.length();j++){
			if(input[j]!= ' ') word+=input[j];
			else{
			word+=" ";
			strings.push_back({word, j});
			word="";
			}
		}
		std::sort(strings.begin(), strings.end(), compare);
		for(int i=0;i<strings.size();i++){
			output+=strings.at(i).palabra;
		}
		output=output.substr(0, output.length()-1);
		std::cout<<output<<"\n";
	}

	return 0;
}
