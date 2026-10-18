#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
int main()
{
    int arr[5]={1,3,5,6,9};
    int ans=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        ans=arr[i];

    }
    int second=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=ans)
        second=max(second,arr[i]);
    }
    cout<<second;
}