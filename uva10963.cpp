#include <iostream>
#include <string.h>
int main(void){
    
    int cases, y1, y2, w, aux;
    std::cin >> cases;
    std::string blank;
    bool flag;
    for(int j=0;j<cases;j++){
        if(j>=1)
            std::cout << "\n";
        flag=true;
        std::cin >> w;
        int grid[w];
        for(int i=0;i<w;i++){
            std::cin >> y1 >> y2;
            grid[i] = y1-y2;
            
        }
        for(int i=0;i<w;i++){
            if(grid[i] != grid[0])
                flag=false;
               
            
        }
        if(flag==true)
            std::cout << "yes\n";
        else
            std::cout << "no\n";
        
    }
    
    
    return 0;
}
