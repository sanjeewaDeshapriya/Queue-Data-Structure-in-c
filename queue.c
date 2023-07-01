#include <stdio.h>

struct{
    int arr[5],front,rear;
}qe;

void enqueue(int ele){
    qe.rear++;
    if(qe.rear<=sizeof(qe.arr[5])){
        qe.arr[qe.rear]=ele;
        
    }
    else{
        printf("\n queue is full");
        qe.rear==-1;
    }
}
int dequeue(){
    int out;
    if(qe.front<=qe.rear){
     out=qe.arr[qe.front];
    qe.front++;
    }
    else{
        printf("queue is emptey");
    }
    return out;
}
void disArr(){
    int a=qe.front;
    int b=qe.rear;
    
    for(a;a<5;a++){
        printf("\t %d",qe.arr[a]);
    }
}
int main() {
    qe.front=0;
    qe.rear=-1;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    
    disArr();
    printf("\n");
    dequeue();
    dequeue();
    dequeue();
    disArr();
    printf("\n");
    enqueue(60);
    enqueue(80);
    disArr();
    printf("\n");
    enqueue(70);
    disArr();
    

    return 0;
}
