#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b){
    unordered_set<int> s(a.begin(),a.end()); 

    for(auto i:b){
        if(s.find(i)==s.end()){
            return false;
        }
    }
    return true;

}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,0};
    vector<int> b = {5,6,8,7};
    cout<<isSubset(a,b);
}