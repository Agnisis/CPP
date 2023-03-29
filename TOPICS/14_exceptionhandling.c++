#include<iostream>
using namespace std;


//exception handling

int main(){

    int n=-1;
    try{
        cout<<"before try block"<<endl;
        if(n<0){
            throw n;
            cout<<"after throw is not executed"<<endl;
        }
    }

    catch(int n){
        cout<<"catched";
    }
    return 0;
}