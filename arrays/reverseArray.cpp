#include <iostream>

void printArray(int arr[], int size){
    for(int i = 0; i < size ; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void reverseArray(int arr[],int size){
    int i = 0, j = size-1;
    while(i!=j) {
         std::swap(arr[i],arr[j]);
         i++;j--;
    }
}

int main(){
    int arr[] = {1,4,13,24,35,37,42,56,63};
    int size = sizeof(arr)/sizeof(int);
    printArray(arr,size);
    reverseArray(arr,size); 
    printArray(arr,size);
    return 0;
}