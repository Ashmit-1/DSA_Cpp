#include<iostream>
using namespace std;
void fibonacci(int x){
    int num1 = 0;
    int num2 = 1;
    cout<<num1<<", "<<num2;
    int i;
    for (i=2;i<x;i++){
        cout<<", "<<num1+num2;
        int tempo = num2;
        num2=num1+num2;
        num1=tempo;
    }
    cout<<endl;
}
int main(){
    // int firstNum = 0;
    // int nextNum = 1;
    // int range;
    // cout<<"Enter the number of values you want to see: ";
    // cin>>range;
    // cout<<firstNum<<", "<<nextNum;
    // int i;
    // for(i=2;i<range;i++){
    //     cout<<", "<<firstNum+nextNum;
    //     int temp = nextNum;
    //     nextNum = firstNum+nextNum;
    //     firstNum = temp;
    // }
    int range;
    cout<<"Enter the number of terms: ";
    cin>>range;
    fibonacci(range);
    return 0;
}