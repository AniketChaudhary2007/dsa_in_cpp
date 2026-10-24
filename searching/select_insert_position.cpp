#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"enter size of array :";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>arr[i];
    }

    int key;
    cout<<"enter key";
    cin>>key;

    int start=0,end=n-1;
    int index=n;
    int mid;

    while(start<=end)
    {

        mid=start+(end-start)/2;

        if(arr[mid]==key)
        {
            index=mid;
            break;
        }   

        else if(arr[mid]<key)
        start=mid+1;

        else{
            index=mid;
            end=mid-1;
        }

    
    
    }
    cout<<index;
    
}