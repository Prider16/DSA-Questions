#include<iostream>
using namespace std;

void NegativeNumber(int arr[],int s){
    int count = 0;
    for(int i=0;i<s;i++){
        if(arr[i]<0)
            count += 1;
    }
    cout<<count;
}

int main(){
    int arr[6] = {1,0,-1,-5,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    NegativeNumber(arr,size);

}