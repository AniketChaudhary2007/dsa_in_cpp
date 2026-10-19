#include<iostream>
using namespace std;

void swap(int &a ,int &b){

    int c;
    c=a;
    a=b;
    b=c;
}


int main(){
    int a,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;

    cout<<"before swapping"<<"a="<<a<<" "<<"b="<<b<<endl;
    swap(a,b);
    cout<<"after swapping"<<"a="<<a<<" "<<"b="<<b<<endl;

}