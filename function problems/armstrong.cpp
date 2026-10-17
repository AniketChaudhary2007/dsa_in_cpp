#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int num)
{
    int digit=0;
    while(num!=0){
    digit++;
    num/=10;
    
     }
return digit;

}
bool armstrong(int num,int digit)
{
    int n=num,rem,ans=0;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans + pow(rem,digit);

    }
    
    if(ans==num)
    return 1;
    
    else
    return 0;



}

int main()
{
    int num ;
    cout<<"enter number : ";
    cin>>num;
    int digit= countdigit(num);
    cout<<armstrong(num,digit);
    return 0;

}