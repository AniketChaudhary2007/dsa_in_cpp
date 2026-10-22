#include<iostream>



using namespace std;
int main(){

    int arr[1000];
    int n;
    cout<<"enter no. of elements :";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"enter element  "<<i+1 <<" :";
        cin>>arr[i];
    }


    

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}