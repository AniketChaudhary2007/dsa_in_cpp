#include<iostream>
using namespace std;
int main ()
{
    int arr[5]={1,2,3,4,5};
    int index=-1,key;
    cout<<"enter the element to search : ";
    cin>>key;

    for(int i=0;i<=5;i++){

        if(arr[i]==key){
            index=i;
            cout<<"element found at "<<  index<<" index"<<endl;
            break;
        }
    }
    if(index==-1)
    cout<<"element not found";

}