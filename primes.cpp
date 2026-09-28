//C++ Program To Check If a Prime Number Can Be Expressed as Sum of Two Prime Numbers
#include<iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"enter a prime number";
    cin>>num;
    for(int i=2;i<(num-2)/2;i++){
        if((num-2)%i==0){
            cout<<num<<"cannot";
            count++;
            break;
            
        }

        
    }
    if( count==0)
    cout<<num<<"can";
}
