#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    int a = 0, b = 1;
    cout<<a<<" "<<b;
    for(int i = 1; i<n-1;i++){
        int sum = a+b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
}