#include <iostream>

int main(void){
    int n;
    while(true){
        std::cin >> n;
        if(n == 0)
            break;
        int res = n%9;
        if(res != 0)   
            std::cout << n%9 << "\n";
        else
            std::cout << "9\n";
    }


    return 0;
}
