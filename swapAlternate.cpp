#include<iostream>
#include<climits>
using namespace std;
void swap(int arr[] , int n){
    for(int i =0; i<n; i = i+2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<" enter the size: "<<endl;
    cin>>n;
    int arr[1000];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    swap(arr,n);
    printArray(arr,n);
}