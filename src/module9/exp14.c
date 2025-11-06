#include <stdio.h>

#define SIZE 100

float queue[SIZE];
int rear = -1;
int front = -1;

void enqueue(float val) {
    if(rear == SIZE - 1) {
        printf("Queue overflow\n");
        return;
    }
    
    if(front == -1) {
        front = 0;
    }
    
    queue[++rear] = val;
    printf("%.2f inserted to queue\n", val);
}

int main() {
    int n;
    float val;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &val);
        enqueue(val);
    }
    
    return 0;
}
