#include<iostream>
#include<vector>
using namespace std;
int main (){
//     vector<vector<int>>n = {
//         {1,2,3},
//         {4,5,6}

//     };
// cout<<n.at(1).at(2)<<endl;
vector<vector<int>> n(3, vector<int>(3, 0));
for(auto i: n){
    for(auto j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}



    return 0;
}