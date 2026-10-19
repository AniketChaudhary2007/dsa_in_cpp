#include<iostream>
using namespace std;


void increase(int &n){    // n is also pointing towards a cz we have passed address of a 
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