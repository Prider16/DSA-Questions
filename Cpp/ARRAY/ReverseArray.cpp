#include<iostream>
using namespace std;

void ReverseArray(int arr[],int s){
    int temp = 0;
    int i = 0;
    int j = s-1;
    while(i!=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printarray(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

    printarray(arr,e);
    ReverseArray(arr,e);
    printarray(arr,e);

}