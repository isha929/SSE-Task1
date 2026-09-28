#include<iostream>
using namespace std;
int main(){
    int num,sum=0,sqr;
    cout<<"enter a number";
    cin>>num;
    sqr=num*num;
    while(sqr>0){
        sum=sum+sqr%10;
        sqr/=10;
    }
    if(sum==num){
        cout<<num<<" is neon number";

    }
    else{
        cout<<num<<"not a neon number";
    }


}