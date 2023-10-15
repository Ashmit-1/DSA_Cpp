#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"Enter number of rows or columns: " << endl;
    cin>>rows;
    // rows=5;
    for(i=0;i<rows;i++){
        for(j=1;j<=rows;j++){
            cout<<" "<<j;
        }
        cout<<"\n";
    }
    return 0;
}