#include <bits/stdc++.h>
#include <bitset>
long long int sieve_size;
std::bitset<9832718> bs;
std::vector<int> primes;

void sieve(long long int up){
    sieve_size = up+1;
    bs.set();
    bs[0]=bs[1]=0;
    for(long long int i=2;i<=sieve_size;i++) if(bs[i]){
        for(long long int j=i*i;j<=sieve_size;j+=i) bs[j]=0;
        primes.push_back((int) i);
    }
}

bool isPrime(long long int N){
    if(N<=sieve_size) return bs[N];
    for(int i=0;i<(int)primes.size();i++)
        if(N%primes[i]==0) return false;
    return true;
}

//main nos da el n-esimo primo;
int main(void){
    int n;
    std::cin>>n;
    sieve(9832718);
    int i=1;
    std::vector<int>::iterator it = primes.begin();
    while(i!=n){
        ++it;
        i++;
    }
    int aux = *it;
    std::cout<<aux<<"\n";
}
