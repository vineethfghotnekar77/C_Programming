#include<stdio.h>

void reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    reverse(arr,6);
    printarr(arr,6);
    return 0;
}

void reverse(int arr[],int n){
    for(int i=0;i<(n/2);i++){
        int first_value=arr[i];
        int second_value=arr[n-i-1];
        arr[i]=second_value;
        arr[n-i-1]=first_value;
    }
}

void printarr(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}