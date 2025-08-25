#include <iostream>
#include <vector>

void printVec(std::vector<int> vec){
    for(auto x:vec)
        std::cout << x << " ";
    std::cout << std::endl;
}

void bubbleSort(std::vector<int> &vec){

    
    for(int times = 1 ; times < vec.size() ; times++){
        bool isSwapped = false;
        for(int i = 0 ; i < vec.size() - times ; i++)
            if(vec[i] > vec[i+1]){
                std::swap(vec[i],vec[i+1]);
                isSwapped = true;
            }
                
        printVec(vec);
        if(!isSwapped)
            break;    
    }
}

int main(){

    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10}; //{-2,3,4,-1,5,-12,6,1,3};
    printVec(vec);

    bubbleSort(vec);
    printVec(vec);

    return 0;
}