#include <iostream>
using namespace std;
void printNum(int n){ //recursive function 
    if(n == 1){
        cout<<"1\n";
        return;
    }
   cout<< n << " ";  
   printNum (n - 1);
}
int factorial(int n){
    if(n == 0){
      return 1;
    }
    return n* factorial(n - 1);

}
int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n - 1);
}
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n- 2);
}
int main(){
    //printNum(1);
    // cout<<factorial(5)<<endl; 
    // cout<<sum(100)<<endl;
    cout<<fibonacci(4)<<endl;
    return 0;

}