#include <iostream>
#include <vector>

using namespace std;

int fac(int n){
    if(n <= 1) return n;
    return n * fac(n - 1);
}

/*

    5!
    fac(5): 5 * fac(4)
            5 * 4 * fac(3)
            5 * 4 * 3 * fac(2)
            5 * 4 * 3 * 2 * fac(1)
            5 * 4 * 3 * 2 * 1
            120


*/

int main(){
    vector<int> v = {1,2,3};

    vector<int> b = {4,5, 6};

    v.insert(v.begin(), b.begin(), b.end());

    for(auto i: v){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}