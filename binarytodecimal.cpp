#include<iostream>
using namespace std;

int bintodec(int decnum){
    int ans=0,pow=1;
    while (decnum>0){
        int rem=decnum%2;
        decnum /= 2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){ 
    int decnum=50;
    cout<<bintodec(decnum)<<endl;
    return 0;
}