#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<=n;i++){
        if(n%i==0)
        return 0;

    }
    return 1;
}

int fact(int n=3){  // default parameter ----- if no value is passed so it will take n=3 and give output accordingly
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;

    }
    return ans;

}

int main()
{
    int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;


    cout<<prime(a)<<endl;
    cout<<fact(b)<<endl;
    cout<<prime(b)<<endl;
    cout<<fact(a)<<endl;
    cout<<fact();

}