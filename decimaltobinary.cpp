#include<iostream>
using namespace std;

int bintodec(int decnum){
    int ans=0,pow=1;
    while (decnum>0){
        int rem=decnum%10;
        ans+=(rem*pow);
        decnum /= 10;
        pow*=2;
    }
    return ans;
}
int main(){ 
    int decnum=1010;
    cout<<bintodec(decnum)<<endl;
    return 0;
}