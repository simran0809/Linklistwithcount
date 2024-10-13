#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to print the data of the linked list and count nodes
void print_list(struct node *head) {
    if (head == NULL) {
        printf("Linked list is empty\n");
        return;
    }

   int count = 0; // Initialize the count variable inside the function
    struct node *temp = head; // temp is a traversing pointer

    // Traverse the linked list
    while (temp != NULL) {
        printf("%d\n", temp->data); 
        // Print the data of the current node
        temp = temp->link;           // Move to the next node
        count++;                     // Increment the count
    }
    
 printf("Total number of nodes: %d\n", count); // Print the total count of nodes
}

int main() {
    struct node *head = NULL;
    
    // First node
    head = (struct node*)malloc(sizeof(struct node)); 
    head->data = 45;
    head->link = NULL;

    // Second node
    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    // Link the first node to the second node
    head->link = current;
    
    struct node * thirdnode = NULL;
    thirdnode = (struct node*)malloc(sizeof(struct node ));
    thirdnode->data = 100;
    thirdnode->link = NULL;
    
    head ->link->link = thirdnode;
    
    struct node * Fourthnode = NULL ;
    Fourthnode = (struct node*)malloc(sizeof(struct node));
    Fourthnode->data = 102;
    Fourthnode->link = NULL ;
    
    head->link->link->link = Fourthnode;
    print_list(head);

    return 0;
    
}

