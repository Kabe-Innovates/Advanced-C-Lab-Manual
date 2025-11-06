#include <stdio.h>

#define MAX 100

int queue[MAX];
int rear = -1;
int front = -1;

void dequeue() {
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Deleted element: %d\n", queue[front]);
    front++;
    
    if(front > rear) {
        front = rear = -1;
    }
}

int main() {
    int n, val;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        
        if(front == -1) {
            front = 0;
        }
        queue[++rear] = val;
    }
    
    printf("Queue before deletion:\n");
    for(int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
    
    dequeue();
    
    printf("Queue after deletion:\n");
    if(front != -1) {
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    } else {
        printf("Queue is empty\n");
    }
    
    return 0;
}
