// find the sum of all odd no using while loop?
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"input a no"<<endl;
    cin>>n;
    int sum =0;
    int i=1;
    while(i<+n){
        if(i%2==1){
            sum = sum + i;
        }
        i++;
    }
    cout<<"the sum of odd no is "<<sum<<endl;
}