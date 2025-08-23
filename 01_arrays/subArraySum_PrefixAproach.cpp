#include <iostream>

int largestSubArraySum_prefixApproach(int arr[],int size){

    int prefix[size] = {0};
    prefix[0] = arr[0];
    for(int i = 1; i < size; i++)
        prefix[i] = prefix[i-1] + arr[i];

    int largestSum = 0;

    for(int i = 0; i < size ; i++){
        for(int j = i ; j < size ; j++){
            int subArraySum = (i > 0 ? prefix[j] - prefix[i-1] : prefix[j]);
            //std::cout << subArraySum << std::endl;
            largestSum = std::max(largestSum,subArraySum);
        }
    }

    return largestSum;
     
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr)/sizeof(int);

    std::cout << "Largest sub array sum : " << largestSubArraySum_prefixApproach(arr,size) << std::endl;
    return 0;
}