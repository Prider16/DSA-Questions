#include<iostream>
using namespace std;

void MaxNumber(int arr[],int s){
    int max;
    for(int i=0;i<s;i++){
        if(i+1 == s)
            break;
        else{
            if(arr[i+1]>arr[i])
                max = arr[i+1];
        }
    }
    cout<<max;
}

int main(){
    
    int e;
    cout<<"Enter the Number of elements you want to enter :-";
    cin>>e;
    int arr[1000];
    cout<<"Enter the Elements."<<endl;
    for(int i=0;i<e;i++){
        cout<<"Enter the "<<i+1<<" Element :- ";
        cin>>arr[i];
    }

    MaxNumber(arr,e);

}