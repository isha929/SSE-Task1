#include<iostream>
using namespace std;
int LS(int*x,int size,int key){
    for(int i=0;i<size;i++){
        if(x[i]==key){
            return i;
        }
        return -1;
    } 


}
int main(){
    int a[]={1,3,5,3,6,7};
    int k=4;
    int size=6;
    int res=LS(a,size,k);
    if(res==-1){
        cout<<k<<"is not found";
    }
    else{
        cout<<k<< "is found at "<<res;
    }
}
