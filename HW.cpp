#include<iostream>
using namespace std;

int prime(int n)
{
    int i=2;
    while(i<=n-1){
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    for(int i=2;i<=100;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}