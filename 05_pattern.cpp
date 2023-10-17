#include<iostream>
using namespace std;
int main(){
    int i,j,rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}