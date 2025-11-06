#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

static struct node* create_node(int val) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (!newnode) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newnode->data = val;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void insert_end(int val) {
    struct node *newnode = create_node(val);
    if(head == NULL) {
        head = newnode;
        return;
    }
    struct node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void insert_begin(int val) {
    struct node *newnode = create_node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_pos(int val, int pos) {
    if (pos <= 1 || head == NULL) {
        insert_begin(val);
        return;
    }
    struct node *temp = head;
    int idx = 1;
    while (temp->next != NULL && idx < pos - 1) {
        temp = temp->next;
        idx++;
    }
    if (temp->next == NULL) {
        // position beyond length -> append at end
        insert_end(val);
        return;
    }
    struct node *newnode = create_node(val);
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

void display() {
    struct node *temp = head;
    
    printf("Doubly linked list: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, val;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        insert_end(val);
    }
    
    printf("Before insertion:\n");
    display();

    int choice, pos;
    printf("Choose insertion type (1-begin, 2-end, 3-position): ");
    scanf("%d", &choice);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    if (choice == 1) {
        insert_begin(val);
    } else if (choice == 2) {
        insert_end(val);
    } else if (choice == 3) {
        printf("Enter position (1-based): ");
        scanf("%d", &pos);
        insert_at_pos(val, pos);
    } else {
        printf("Invalid choice, inserting at end by default.\n");
        insert_end(val);
    }

    printf("After insertion:\n");
    display();
    
    return 0;
}
