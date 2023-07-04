#include<iostream>
using namespace std;

int step(int n){
    if(n == 0){
        return 1;
    }
    else if(n<0){
        return 0;
    }
    else{
       return step(n-3) + step(n-2) + step(n-1);
    }
}

int main(){
    int n ;
    cin>>n;
    
  int result =   step(n);
    cout<<result<<endl;
}
