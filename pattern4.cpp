#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"Enter number of rows: ";
cin>>rows;
int i,j,n;
for(i=1;i<=rows;i++){
    n=i;
    for(j=0;j<i;j++){
        cout<<n<<" ";
        n+=1;
    }
    cout<<"\n";
}
}