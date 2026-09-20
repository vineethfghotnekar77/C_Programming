// Arrays is the collection of similar datatypes stored at contigious memory location.

#include<stdio.h>

int main(){
    int aadhar[3];

    // Input
    int *ptr=&aadhar[0];
    for(int i=0;i<3;i++){
        printf("%d Index:",i);
        scanf("%d",&aadhar[i]);
    }

    // Output
    for(int i=0;i<3;i++){
        printf("%d Index = %d\n",i,aadhar[i]);
    }
    return 0;
}