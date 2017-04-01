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


