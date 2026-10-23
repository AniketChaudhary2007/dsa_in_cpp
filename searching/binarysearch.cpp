#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){

    int start=0;
    int end=n-1;


    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;
        
        else if (arr[mid]<key)
        start=mid+1;
        
        else
        end=mid-1;

    }
    return -1;

}

int main()
{
    int arr[100];
    int n;
    cout<<"enter no. of elements :";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<" :" ;
        cin>>arr[i];

    }

    int key;
    cout<<"enter element to search :";
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;

    return 0;
}