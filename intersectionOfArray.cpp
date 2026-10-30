#include<iostream>
using namespace std;
int intersection(int arr1[], int arr2[], int m, int n){
    int i = 0; 
    int j = 0;
    while(i<m && j<n){
        if(arr1[i]== arr2[j]){
            return arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]< arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return -1;
}
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,4,8,9,10};
    cout<<"Intersection of two arrays: "<<intersection(arr1,arr2,5,5)<<endl;
}