#include <iostream>

int largestSubArraySum_kadanes(int arr[],int size){

    int currSum = arr[0];
    int maxSum  = arr[0];

    for(int i = 1; i < size ; i++){
        currSum = std::max(arr[i],currSum + arr[i]);
        maxSum = std::max(maxSum,currSum);
    }

    return maxSum; 
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr)/sizeof(int);

    std::cout << "Largest sub array sum : " << largestSubArraySum_kadanes(arr,size) << std::endl;
    return 0;
}