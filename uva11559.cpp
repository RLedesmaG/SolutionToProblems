#include <iostream>
#include <string.h>
#include <algorithm>
int main(void){
    int participants, budget, hotels, weeks, price, mincost, aux;
    while(std::cin >> participants >> budget >> hotels >> weeks){
        
        mincost=2000000000;
        for(int j=0;j<hotels;j++){
            std::cin >> price;
            for(int i=0;i<weeks;i++){
                std::cin >> aux;
                if(aux >= participants){
                    mincost = std::min(mincost, participants*price);
                    /*we already got a budget for this hotel, so we clean cin*/
                    std::string s;
                    std::getline(std::cin, s);
                    break;
                }
            }
            
        }
        if(mincost!=2000000000 && mincost <= budget)
            std::cout << mincost << "\n";
        else
            std::cout << "stay home\n";
        
    }
        

    return 0;
}

