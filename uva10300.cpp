#include <iostream>
int main(void){
    long cases, f, size, animals, friendly;
    std::cin >> cases;
    for(long i=0;i<cases;i++){
        std::cin >> f;
        long total=0;
        for(long j=0;j<f;j++){
            std::cin >> size >> animals >> friendly;
            total+=(size)*friendly;
          
        }
        std::cout << total << "\n";
    }

}
