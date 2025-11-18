//convert decimal into binary
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int num;//declare num
    cout<<"Enter Your Number :";
    cin>>num;
    stack<int>s; //create stack integer 
    while(num > 0){//condition
        s.push(num % 2); //store each number in stack and give the remainder 
        num /= 2;//devide the number by 2 continue 
    }
    cout<<"Binary : ";
    while(!s.empty()){//check the stack that it not empty 
        cout<<s.top();
        s.pop();

    }


    return 0;
}