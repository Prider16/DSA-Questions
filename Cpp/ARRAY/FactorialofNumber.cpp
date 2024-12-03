#include<iostream>
#include<vector>
using namespace std;

void multi(vector<int>&arr,int&size,int m){
    int c=0;
    for(int i=0;i<size;i++){
        int r=m*arr[i];
        r=r+c;
        arr[i]=r%10;
        c=r/10;
    }
    while(c>0){
        arr[size]=c%10;
        size++;
        c=c/10;
    }
}
vector<int> factorial(int n) {
    vector<int>arr(10000,0);
    arr[0]=1;
    int size=1;
    for(int m=2;m<=n;m++){
        multi(arr,size,m);
    }
    vector<int>res;
    for(int i=size-1;i>=0;i--){
        res.push_back(arr[i]);
    }
    return res;
}

int main(){
    vector<int>value = factorial(5);
    for(int i=0;i<value.size();i++){
        cout<<value[i]<<" ";
    }
}