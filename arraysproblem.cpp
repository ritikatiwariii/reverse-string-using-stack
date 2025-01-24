//find max elements in a list of array
#include<iostream>
using namespace std;
int maxelement(int arr[],int size){
    max=arr[0];
    for(int i=0;i<n;i++){
        arr[i]>max;
        max=arr[i];
        cout<<"the value of maximum elements is",<<max<<i<<endl;
        return max;
    }
}
int main(){
    int n=8;
    int a[]={2,45,67,10000,56,134,123,123};
    cout<<"maxelements is",<<maxelement(a,n);
    return 0;

}
