#include<iostream>
using namespace std;
int main(){
    int rows,i,j,a;
    a=65;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=0;j<rows;j++){
            cout<<char(a)<<" ";
        }
        a+=1;
        cout<<endl;
    }
}