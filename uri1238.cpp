#include <iostream>
#include <string>

int main(void){
	int n;
	std::cin>>n;
	for(int k=0;k<n;k++){
		std::string s1;
		std::string s2;
		std::string output="";
		std::cin>>s1>>s2;
		int n1=s1.length();
		int n2=s2.length();
		int i=0,j=0;
		while(i<n1&&j<n2){
			output+=s1[i];
			output+=s2[j];
			i++;
			j++;
		}
		for(i; i<n1; i++) output+=s1[i];
		for(j;j <n2;j++) output+=s2[j];
	
		std::cout<<output<<"\n";
	}

	return 0;
}
