#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void enqueue();
void dequeue();
void display();

int main(){

    return 0;
}

void enqueue(){
    int value;

    if(rear==MAX-1){
        printf("Queue Overflow!");
    }else{
        printf("Enter the value to insert :");
        scanf("%d",&value);

        if(front==-1){
            front=0;
        }
        rear++;
        printf("%d element is inserted ",value);
    }
}

void dequeue(){
    if(front==-1){
        printf("Queue underflow!");
    }else{
        printf("deleted element:%d",queue[front]);
        front++;

        if(front>rear){
            front=rear=-1;
        }
        
    }
}

void display(){
    if(front==-1){
        printf("Queue is Empty:");
    }else{
        printf("Queue Elements are:");

        for(int i=front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
