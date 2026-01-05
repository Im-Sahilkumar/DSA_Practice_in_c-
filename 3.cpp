// find the sum of all even no using while loop?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input a number"<<endl;
    cin>>n;
    int sum = 0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
    cout<<"the sum of no is"<<sum<<endl;
}