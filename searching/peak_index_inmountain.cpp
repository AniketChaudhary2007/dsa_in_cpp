#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter no of element :";
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int start=0,end=n-1;
    int mid,ans;

    while(start<=end){
        mid=start+(end-start)/2;

        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        start=mid+1;

        else
        end=mid-1;
        
    }
    cout<<ans<<"index is the index of peak element ";
}