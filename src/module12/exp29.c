#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int val) {
    struct node *p;
    
    p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = NULL;
    
    if(front == NULL) {
        front = rear = p;
    } else {
        rear->next = p;
        rear = p;
    }
    
    printf("%d inserted to queue\n", val);
}

int main() {
    int n, val;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        enqueue(val);
    }
    
    printf("Queue elements: ");
    struct node *temp = front;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
    return 0;
}
