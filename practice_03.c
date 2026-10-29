#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *arr;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed !");
        return 1;
    }

    printf("Enter the %d Elements:",n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<(n/2);i++){
        int firstno=arr[i];
        int secondno=arr[n-i-1];
        arr[i]=secondno;
        arr[n-i-1]=firstno;
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}