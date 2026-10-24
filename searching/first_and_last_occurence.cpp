#include<iostream>
using namespace std;

int main(){

    int arr[100];
    int n;
    cout<<"enter size of srray : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }


    int start=0,end=n-1;
    int first=-1,last=-1;
    int key;
    cout<<"enter element to search :";
    cin>>key;

    int mid;

    while(start<=end){

        mid=start+(end-start)/2;

        if(arr[mid]==key){
            first=mid;
            end=mid-1;
   
        }
        else if(arr[mid]<key)
        start=mid+1;

        else
        end=mid-1;
    }


    start=0; // just initilize one again dont declare again
    end=n-1;
    
     while(start<=end)
     {
        mid=start+(end-start)/2;

        if(arr[mid]==key){
            last=mid;
            start=mid+1;
   
        }
        else if(arr[mid]<key)
        start=mid+1;

        else
        end=mid-1;
    }


    cout<<"first occurence = "<<first<<endl;
    cout<<"last occurence = "<<last<<endl;
    return 0;
}