#include<stdio.h>

void printtable(int n);

int main(){
    
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printtable(n);
    //printtable(n+1);
}

void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d x %d= %d\n",n,i,n*i);

    }
}