#include<iostream>
#include<vector>
using namespace std;
// checked array sorted
bool isSorted(vector<int> arr, int n){
    if(n == 0 || n == 1){
        return true;
    }
    return arr[n - 1] >= arr [n - 2] && isSorted(arr, n - 1);

}


int main(){
    vector<int> arr ={1, 2, 7, 4, 5};
    int n = arr.size();
    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is NOT sorted." << endl;
    }
    return 0;
}
