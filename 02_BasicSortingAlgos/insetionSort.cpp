#include <iostream>
#include <vector>

void printVec(std::vector<int> vec){
    for(auto x:vec)
        std::cout << x << " ";
    std::cout << std::endl;
}

void insertionSort(std::vector<int> &vec){

    for(int i = 1 ; i < vec.size() ; i++){
        int current = vec[i];
        int prev = i-1;

        while((prev > -1) && (vec[prev] > current)){
            vec[prev+1] = vec[prev];
            prev = prev - 1;
        }

        vec[prev+1] = current;
    }
}

int main(){

    std::vector<int> vec = {-2,3,4,-1,5,-12,6,1,3};
    printVec(vec);

    insertionSort(vec);
    printVec(vec);

    return 0;
}