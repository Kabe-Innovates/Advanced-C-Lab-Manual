#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void delete(int val) {
    struct node *temp, *prev;
    
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    if(head->data == val) {
        temp = head;
        head = head->next;
        free(temp);
        printf("Element deleted\n");
        return;
    }
    
    temp = head;
    while(temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Element not found\n");
        return;
    }
    
    prev->next = temp->next;
    free(temp);
    printf("Element deleted\n");
}

void display() {
    struct node *temp = head;
    
    printf("Linked list: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, val, del_val;
    struct node *temp, *newnode;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = NULL;
        
        if(head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    
    printf("Before deletion:\n");
    display();
    
    printf("Enter element to delete: ");
    scanf("%d", &del_val);
    delete(del_val);
    
    printf("After deletion:\n");
    display();
    
    return 0;
}
