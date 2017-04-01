unsigned long int phi(unsigned long int n)
{    
    unsigned long int result = n; 
    for (unsigned long int p=2; p*p<=n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result/2;
}

bool isprime(unsigned long n) {
    if (n == 2) return true;
    if (n % 2 == 0 || n < 2) return false;

    for (unsigned long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
//find first substring
if(s1.find(s2) != std::string::npos){
			std::cout<<"Resistente\n";
		}
		else std::cout<<"Nao resistente\n";
		
//longestcommonsubstring	
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

//longestcommonssubsqeuence
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAX(a, b) (a > b ? a : b)
 
int lcs (char *a, int n, char *b, int m, char **s) {
    int i, j, k, t;
    int *z = calloc((n + 1) * (m + 1), sizeof (int));
    int **c = calloc((n + 1), sizeof (int *));
    for (i = 0; i <= n; i++) {
        c[i] = &z[i * (m + 1)];
    }
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            }
            else {
                c[i][j] = MAX(c[i - 1][j], c[i][j - 1]);
            }
        }
    }
    
    t = c[n][m];
    *s = malloc(t);
    for (i = n, j = m, k = t - 1; k >= 0;) {
        if (a[i - 1] == b[j - 1])
            (*s)[k] = a[i - 1], i--, j--, k--;
        else if (c[i][j - 1] > c[i - 1][j])
            j--;
        else
            i--;
    }
    free(c);
    free(z);
    return t;
}

--------
//ORDENAR

struct student{
	std::string name;
	std::string lastname;
};

int mycomp(student a, student b){
	if(b.lastname == a.lastname) return b.name >= a.name;
	return b.lastname >= a.lastname;
}


int main(void){
	int n;
	std::string st1;
	std::string st2;
	std::vector<student> v;
	std::cin>>n;
	for(int i=0;i<n;i++){
		std::cin>> st1>>st2;
		v.push_back({st1, st2});
	}
	std::sort(v.begin(),v.end(),mycomp);
	
	for(std::vector<student>::iterator it=v.begin();it!=v.end();++it){
		student aux = *it;
		std::cout<<aux.name <<" "<<aux.lastname<<"\n";
	}
}

--------
//precision, getline
#include <iostream>
#include <string>
#include <iomanip>

int main(void){
	std::string name;
	int average=0,n,total=0;
	while(std::getline(std::cin,name)){
		std::cin>>n;
		std::getline(std::cin,name);
		total++;
		average+=n;
	}
	double res = 1.0*average/(total-1);
	std::cout<<std::fixed<<std::setprecision(1)<<res<<"\n";

	return 0;
}

---
//map
#include <iostream>
#include <iomanip>
#include <map>

struct pair{
	int residents;
	int consumption;
};

int main(void){
	int n, cases=0;
	while(true){
		std::cin>>n;
		if(n==0) break;
		double ciudadanos=0;
		double consumo=0;
		int parser;
		double average;
		if(cases>0) std::cout<<"\n";
		
		std::map<int,int> m;
		for(int i=0;i<n;i++){
			int x, y;
			std::cin>>x>>y;
			ciudadanos+=x;
			consumo+=y;
			if(m.count(y/x)) m[y/x]+=x;
			else m[y/x]=x;

		}
		average=consumo/ciudadanos;
		parser = average*100;
		average = parser/100.0;
		
		std::cout<<"Cidade# "<<cases+1<<":\n";
		std::map<int,int>::iterator last=m.end();
		--last;
		for(std::map<int,int>::iterator it=m.begin();it!=last;++it){
		
			std::cout<<it->second<<"-"<<it->first<<" ";
		}
		std::cout<<last->second<<"-"<<last->first<<"\n";
		
		

		std::cout<<"Consumo medio: "<<std::fixed<<std::setprecision(2)<<average<<"m3.\n";
		
		cases++;
	}

	return 0;
}	

-----
//sort with vector

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
