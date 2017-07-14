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
