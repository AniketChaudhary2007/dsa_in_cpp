// let n=5 sooo 5! =120 so 1 trailing zero if n!=120000 so 4 trailing zero//


#include<iostream>
using namespace std;
int trailingzeroes(int num){

    int count=0;
    while(num>=5){
        count+=num/5;
        num/=5;
    }
    return count;
}


int main () 
{
    int num;
    cout<<"enter number";
    cin>>num;
    cout<<trailingzeroes(num);
}

