#include<iostream>
using namespace std;

void FindNumber(int arr[],int s){
    bool f = false;
    for(int i=0;i<10;i++){
        if(arr[i] == s){
            cout<<"Find at index :- "<<i;
            f = true;
            break;
        }
        else
            continue;
    }
    if (f == false)
        cout<<"-1";
}

int main(){
    
    int e;
    cout<<"Enter the Number you want to Find :-";
    cin>>e;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};

    FindNumber(arr,e);

}