#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the number :";
    cin>>num;
    int start=0,end=num;
    int mid;
    int ans;

    if(num<2)
    cout<<num;

    

    while(start<=end){

        mid=start+(end-start)/2;

        if(mid==num/mid){ // mid*mid integer overflow ka error deta
            ans=mid;
            break;
        }
        else if(mid<num/mid){
            ans=mid;
            start=mid+1;

        }    
        else
        end=mid-1;

    }
    cout<<"square root is "<< ans<<endl;
}

