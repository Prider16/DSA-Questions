#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthSmallest(vector<int> &arr, int k){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    return arr.at(k-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 3;
    cout<<kthSmallest(arr, k);
}
