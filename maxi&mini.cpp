#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int getmin(int arr[], int n){
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
int main(){
    int n;
    cout<<"size of an array "<<endl;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum element is : "<<getmax(arr,n)<<endl;
    cout<<"Minimum element is: "<<getmin(arr,n)<<endl;
}