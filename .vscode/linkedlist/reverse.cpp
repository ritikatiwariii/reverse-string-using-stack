//reverse a string using stack time complexity O(n),space complexity O(n);
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="ritika";
    stack<char>s;
    //push into the stack
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans=" ";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);

       s. pop();
    }
    cout<<"ans is"<<ans;
    return 0;

}