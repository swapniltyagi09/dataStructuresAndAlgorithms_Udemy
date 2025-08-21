#include <iostream>

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = 0;

    while(start <= end){
        mid = (start+end)/2;

        if(key == arr[mid])
            return mid;
        else if(key > arr[mid])
            start = mid+1;
        else
            end = mid-1;
    }

    return -1;
}

int main(){
    int arr[] = {1,4,13,24,35,37,42,56,63};
    int size = sizeof(arr)/sizeof(int);
    int key = 35;
    int idx = binarySearch(arr,size,key);

    std::cout << idx << std::endl;    
    return 0;
}