#include<iostream>
using namespace std;
//is sorted array
bool issorted(int arr[],int n){
    //base conditon
    if(n==0 || n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int pre=issorted(arr+1,n-1);
        return pre;
    }
}
int main(){
    int arr[5]={2,7,8,5,6};
    int n=5;
    int ans=issorted(arr,n);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}