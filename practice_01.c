#include<stdio.h>

void sort(int *arr,int n);

int main(){
    int arr[]={2,5,3,8,9};
    int n=5;

    sort(&arr,n);

    printf("The sorted array is :\n");

    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}

void sort(int *arr,int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}