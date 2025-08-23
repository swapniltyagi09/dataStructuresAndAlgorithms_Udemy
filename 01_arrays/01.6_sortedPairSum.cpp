#include <iostream>
#include <vector>

std::pair<int,int> closestSum(std::vector<int> arr, int val){  //O(N/2)

    int left = 0;
    int right = arr.size()-1;

    int closestSum = arr[left]+ arr[right];
    std::pair<int,int> closestPair = {arr[left],arr[right]} ;


    while(left < right){
        int currSum = arr[left] + arr[right];

        if(std::abs(currSum - val) < std::abs(closestSum - val)){
            closestSum = currSum;
            closestPair = {arr[left],arr[right]};
        }

        if(currSum < val)
            ++left;
        
        else if(currSum > val)
            --right;

        else    
            break;
    }

    return closestPair;

}

int main(){

    std::vector<int> arr = {10, 22, 28, 29, 30, 40};
    int sum = 80;

    std::cout << closestSum(arr,sum).first << " " << closestSum(arr,sum).second << std::endl;

}