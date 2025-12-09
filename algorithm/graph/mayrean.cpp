#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<vector<int>>n = {
        {1,2,3},
        {4,5,6}

    };
cout<<n.at(1).at(2)<<endl;


    return 0;
}