#include<iostream>
using namespace std;

int binarys(int arr[], int start, int end, int e){
    if(end>=start){
        int mid = (start+end)/2;
        if(arr[mid] == e){
            return mid;
        }
         if(arr[mid]>e){
             return binarys(arr, start, mid-1, e);
        }
         else{
            return binarys(arr, mid+1, end, e);
         }
    }
    else{
        return -1;
    }
}

int  binarys(int arr[], int size, int element){

    return binarys(arr, 0, size-1, element);
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    
    int x;
    cin>>x;
    
  int y =  binarys(arr, n, x);
    cout<<y<<endl;
}
