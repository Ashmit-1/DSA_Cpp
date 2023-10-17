#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=0;i<rows;i++){
        for(j=1;j<=rows+i;j++){
            int b = j-1;
            // cout<<"B is: "<<b<<endl;
            if(j==(rows)-i || j==(rows)+i){
                cout<<"1";
            }
            else{
                cout<<" ";
            }
            }
            cout<<endl;
        }
        
    }
    
