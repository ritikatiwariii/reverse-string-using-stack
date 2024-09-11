//printing thr 2d array
#include<iostream>
using namespace std; 
bool ispresent( int arr[][3], int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
    // row wise sum
  
void sumarray(int arr[][3],int i,int j){
      cout<<"printing the sum";                                                       
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;


}   
int main(){
    int arr[3][3]={};
    cout<<"printing thr elements";
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"enter the element to be search"<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,3)){
        cout<<"element is found";
    }
    else{
        cout<<"element is not found in this array -> try it later";
    }
  sumarray(arr,3,3);
return 0;
}    