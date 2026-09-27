#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter a number";
    cin>>num;
    for(int i=2;i<num/2;i++){
        if(num%i==0){
            cout<<num<<"is not a prime number";
            count++;
            break;
          


        }
       

    }
    if(count==0){
        cout<<num<<" a prime number";
    }
    
    
}