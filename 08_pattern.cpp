#include<iostream>
using namespace std;
int main(){
    int rows,i,j;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    for(i=0;i<rows;i++){
        for(j=1;j<=rows+i;j++){
            if(j>=rows-i && j<=rows+i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
            cout<<endl;
        }
        
    }
    
