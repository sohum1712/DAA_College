#include <iostream>
using namespace std;

int linearsearch(int arr[], int n ,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key =3;
    int result = linearsearch(arr,n,key);
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
}