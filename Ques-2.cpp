#include<iostream>
using namespace std;
void reverse(int r,int n){
    if(n==0){
        cout<<r;
        return;
    }
    reverse(r*10 + n%10, n/10);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    reverse(0,n);
}
