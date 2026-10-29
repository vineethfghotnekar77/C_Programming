#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,sum=0;
    int *arr;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed !");
        return 1;
    }

    printf("Enter %d Elements:",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    printf("sum=%d",sum);

    free(arr);

    return 0;
}