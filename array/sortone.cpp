#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortOne(int arr[],int n){
    int left=0;
    int right=n-1;

    while(left<right){
        while(arr[left]==1 && left<right){
            left++;
        }
        while(arr[right]==0 && left<right){
            right--;
        }

        // when left =1 && right =0 swap
        if(left<right){
            swap(arr[right],arr[left]);
            left++;
            right--;
        }
    }
}

int main(){
    int arr[8]={1,1,0,0,1,0,1,0};
    sortOne(arr,8);
    printarr(arr,8);
    return 0;
}