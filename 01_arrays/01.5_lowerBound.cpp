#include <iostream>
#include <vector>

int lowerBound(std::vector<int> arr, int val){  //O(log2N)
    int l = 0, r = arr.size()-1;

    int answer = -1;

    while(l<=r){
        int mid = (l+r)/2;

        if(arr[mid] > val)
            r = mid - 1;
        
        else{
            answer = arr[mid];
            l = mid + 1;
        }
    }

    return answer;
}

/*int lowerBound(std::vector<int> arr, int val){  // O(N)
    if(val < arr[0])
        return -1;

    else{
        for(int i = 0; i < arr.size() ; i++){
            if(arr[i] > val)
                return arr[i-1];
        }
    }

    return arr.back();
    
}*/

int main(){

    std::vector<int> arr = {-1, -1, 2, 3, 5};

    std::cout << lowerBound(arr,5) << std::endl;

}