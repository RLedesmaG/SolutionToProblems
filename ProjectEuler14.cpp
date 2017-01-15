#include <iostream>

long long getcollatz(long long n){
    long long res = 1;
    while(n!=1){
        if(n%2 == 0)
            n=n/2;
        else
            n=3*n+1;
        res++;
    }
    return res;
}

int main(void){

    long long n=2, maxn=2;
    long long max=0;
    for(n; n<=1000000; n++){
        std::cout << n << " "<<getcollatz(n)<<"\n";
        if(getcollatz(n) > max){
            max = getcollatz(n);
            maxn = n;
        }
    }
    std::cout << maxn<< " "<<getcollatz(maxn)<< "\n";
   
    return 0;
}
