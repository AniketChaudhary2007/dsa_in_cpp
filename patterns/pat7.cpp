#include<iostream>
using namespace std;

int main(){
    int col,row;

    for(row=1;row<=5;row++){
        int count=5;
        
        for(col=1;col<=row;col++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}