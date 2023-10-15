#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"Enter the number of rows: "<<endl;
    cin>>rows;
    int print = 0;
    for (i=0 ; i<rows ; i++){
        for (j=0;j<rows;j++){
            print+=1;
            cout<<" "<<print;
        }
        cout<<"\n";

    }
}