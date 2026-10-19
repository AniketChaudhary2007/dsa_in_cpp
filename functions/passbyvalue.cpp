#include<iostream>
using namespace std;


void increase(int n){
    n++;
    cout<<n<<endl;
}

int main(){
    int a;
    cout<<"enter a :";
    cin>>a;
    increase(a);
    cout<<a<<endl;
}