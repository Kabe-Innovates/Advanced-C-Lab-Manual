#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

int search(int val) {
    struct node *temp = head;
    int pos = 0;
    
    while(temp != NULL) {
        if(temp->data == val) {
            return pos;
        }
        temp = temp->next;
        pos++;
    }
    
    return -1;
}

int main() {
    int n, val, search_val;
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
    
    printf("Enter element to search: ");
    scanf("%d", &search_val);
    
    int pos = search(search_val);
    
    if(pos != -1) {
        printf("Element found at position %d\n", pos);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
