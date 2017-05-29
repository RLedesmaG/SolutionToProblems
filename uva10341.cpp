#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#define EPS 1e-9

int p, q, r, s, t, u;
double f(double x){
	return p*pow(M_E, -x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}

double bisection(){
	double lo=0.0, hi=1.0, x, ans;
	while(lo + EPS < hi){
		x = (lo+hi)/2;
		if(f(lo)*f(x)<=0) hi=x;
		else lo=x;
	}
	return (lo+hi)/2;
}

int main(void){
	while(std::cin>>p>>q>>r>>s>>t>>u){
		if(f(0)*f(1) > 0) std::cout<<"No solution\n";
		else std::cout<<std::fixed<<std::setprecision(4)<<bisection()<<"\n";
	}


	return 0;
}


