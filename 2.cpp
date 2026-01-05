//find the odd numbers from 1 to n using while loop?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input a number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==1){
            cout<<i<<endl;
        } 
        i++;
    }
}