#include <iostream>

int main(void){
	int x,y;
	std::cin>>x>>y;
	int tablero[8][8];
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			tablero[i][j]=0;
	}
	int caballo=1;
	tablero[x][y]=caballo;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			std::cout<<tablero[i][j];
		std::cout<<"\n";
	}
	int res=0;
	if(x+1 < 8 && y+2 < 8) res++;
	if(x+2 < 8 && y+1 < 8) res++;
	if(x+1 < 8 && y-2 >= 0) res++;
	if(x+2 < 8 && y-1 >= 0) res++;
	if(x-1 >= 0 && y-2 >= 0) res++;
	if(x-2 >= 0 && y-1 >= 0) res++;
	if(x-1 >= 0 && y+2 < 8) res++;
	if(x-2 >= 0 && y+1 < 8) res++;

	std::cout<<res<<"\n";
	return 0;
}
