#include<iostream>
using namespace std;
bool search(int arr[] , int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    if(search(arr, n,key)){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }

}