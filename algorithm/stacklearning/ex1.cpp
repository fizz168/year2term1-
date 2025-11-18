//reverse string using stack 
//Goal: Input a string → output the reversed string using a stack.
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str; //declare string 
    cout<<"Enter the word :";
    cin>>str;
    stack<char>s;
    for(char ch : str){
        s.push(ch);

    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();

    }

    return 0;
}