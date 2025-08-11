#include<iostream>
using namespace std;

int sum(int arr[],int size)
{
    int totalSum=0;
    for(int i=0;i<size;i++){
        totalSum=totalSum+arr[i];
    }
    return totalSum;
}

int main(){
int size;
cin>>size; 
    int arr[10];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   cout<< sum(arr,size)<<endl;
   return 0;


}