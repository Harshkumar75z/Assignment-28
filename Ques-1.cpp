// Calculate the sum of digits using recursion.
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n%10+sum(n/10);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<sum(n);
}
