#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    char op;
    cout<<"enter a operator  "<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<a+b<<endl;
                    break;
        case '-': cout<<a-b<<endl;
                    break;
        case '*': cout<<a*b<<endl;
                    break;
        case '/': if(a>b){
                    cout<<a/b<<endl;
                    }
                    else{
                        cout<<"not defined"<<endl;
                    }
                    break;
        default : cout<<"invalid input"<<endl;
    }
    
}