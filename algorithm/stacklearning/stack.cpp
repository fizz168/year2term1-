#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>s;
s. push(10);
s. push(30);
s. push(20);
cout<<"top element :" << s.top()<<endl;

s.pop();
cout<<"after one pop element, top is now"<< s.top()<<endl;
cout<<"stack size"<<s. size()<<endl;
if(!s.empty())
cout<<"stack is not empty";
else 
cout<<"stack is empty";

    return 0;
}