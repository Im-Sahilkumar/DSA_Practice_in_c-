// find the even numbers from 1 to n using while loop?
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"input a number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }
    cout<<"the even numbers are:"<<i<<endl;
}