#include <iostream>
#include <string>

int lcs(std::string s1, std::string s2, int n, int m){
	int max=-1;
	int matrix[n+2][m+2];
	for(int i=0;i<n+2;i++)
		for(int j=0;j<m+2;j++)
			matrix[i][j]=0;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(s1[i-1]==s2[j-1]) matrix[i][j]=1+matrix[i-1][j-1];
		if(matrix[i][j]>max) max=matrix[i][j];
		}
	}
	return max;
}



int main(void){
	std::string s1, s2;
	while(std::getline(std::cin, s1)){
		std::getline(std::cin, s2);
		int n = s1.length();
		int m = s2.length();
		int res = lcs(s1, s2, n, m);
		std::cout<<res<<"\n";
	}


	return 0;
}
