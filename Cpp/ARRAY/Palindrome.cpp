#include<iostream>
using namespace std;

void Palindrome(int arr[],int s){
    bool f = true;
    for(int i=0;i<s/2;i++){
        if(arr[i] != arr[s-1-i]){
            f = false;
            break;
        }
    }

    if(f)
        cout<<"Array is Palindrome.";
    else
        cout<<"Array is not an Palindrome.";
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
    Palindrome(arr,e);

}