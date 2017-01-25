#include <iostream>

int main(void){
	int n;
	int array[5]={0};
	bool flag = true;
	for(int i=0;i<5;i++){
		std::cin>>n;
		array[i]+=n;
	}
	for(int i=0;i<5;i++){
		std::cin>>n;
		array[i]+=n;
	}
	for(int i=0;i<5;i++){
		if(array[i]!=1)
			flag=false;
	}
	
	if(flag==true)
		std::cout<<"Y\n";
	else std::cout<<"N\n";

	return 0;
}	
