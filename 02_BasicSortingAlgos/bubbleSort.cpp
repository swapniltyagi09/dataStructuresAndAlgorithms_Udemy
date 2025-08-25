#include <iostream>
#include <vector>

void printVec(std::vector<int> vec){
    for(auto x:vec)
        std::cout << x << " ";
    std::cout << std::endl;
}

void bubbleSort(std::vector<int> &vec){
    for(int times = 1 ; times < vec.size() ; times++){
        for(int i = 0 ; i < vec.size() - times ; i++)
            if(vec[i] > vec[i+1])
                std::swap(vec[i],vec[i+1]);
        
        printVec(vec);
    }
}

int main(){

    std::vector<int> vec = {-2,3,4,-1,5,-12,6,1,3};
    printVec(vec);

    bubbleSort(vec);
    printVec(vec);

    return 0;
}