#include <stdio.h>
int arr[100];
int front = 0;
int rear = -1;
int size = 100;

void enQueue( int arr[],int data){
    if (rear == -1){
        printf("%s","Queue Is Empty");
        return;
    }
    if (rear < size - 1){
        rear++;
    }
    arr[rear] = data;
}
void deQueue(int arr[]){
    if (rear == -1){
        printf("%s","Queue Is Empty");
        return;
    }
    if(rear > -2){
        front++;
    }
    if (front > rear){
        front =  rear = -1;
    }

}
void display(int arr[]){
    if (rear == -1){
        printf("%s","Queue Is Empty");
        return;
    }
    int count = 1;
    for (int i = front; i <= rear; ++i) {
        printf("data in %d place is %d \n",count,arr[i]);
        count++;
    }

}
int main(){
    enQueue(arr,10);
    enQueue(arr,11);
    enQueue(arr,12);
    enQueue(arr,13);
    enQueue(arr,14);
    display(arr);
    deQueue(arr);
    display(arr);
    return  0;
}