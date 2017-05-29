#include <iostream>
#include <iomanip>
#include <cmath>

#define EPS 1e-9


int main(void){
	int t;
	while(true){
		std::cin>>t;
		if(t==0) break;
		int numbers[t+1];
		for(int i=0;i<=t;i++) std::cin>>numbers[i];
		double lo = -1;
		double hi = 100000.0;
		double ans, mid, f0=0.0, f1=0.0;
		while(lo + EPS < hi){
			mid = (lo+hi)/2.0;
			double fl=0.0, fh=0.0;
			for(int i=0;i<=t;i++){
				fl+= numbers[i]/pow((1+lo), i);
				fh+=numbers[i]/pow((1+mid), i);
			}
			if(fl*fh <=0) hi = mid;
			else lo = mid;
		}
		for(int i=0;i<=t;i++){
			f0+= numbers[i]/pow((1+-0.999), i);
			f1+=numbers[i]/pow((1+100000.0), i);
		}	
		if(f0*f1 > 0) std::cout<<"No\n";
		else std::cout<<std::fixed<<std::setprecision(2)<<mid<<"\n";
	}
	return 0;
}
