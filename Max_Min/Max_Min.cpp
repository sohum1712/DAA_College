#include <iostream>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair findMinMax(int arr[], int low ,int high){
    Pair result,left,right;

    if(low==high){
        result.max=arr[low];
        result.min=arr[low];
        return result;
    }

    if(high == low+1){
        if(arr[low]>arr[high]){
            result.max=arr[low];
            result.min=arr[high];
        }else{
            result.max=arr[high];
            result.min=arr[low];
        }
        return result;
    }

    int mid =(high+low)/2;
    left = findMinMax(arr,low,mid);
    right=findMinMax(arr,mid+1,high);

    result.max = (left.max > right.max)? left.max : right.max;
    result.min = (left.min < right.min)? left.min : right.min;
    return result; 
}

int main() {
    int arr[] = {20, 5, 15, 30, 10, 50, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Pair result = findMinMax(arr, 0, n - 1);

    cout << "Maximum element: " << result.max << endl;
    cout << "Minimum element: " << result.min << endl;

    return 0;
}