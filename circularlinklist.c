#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node*next;
};
// Function to insert a node at a given index in a circular linked list
void insertNode(struct Node** head, int data, int index) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    // If the list is empty, make the new node as the head
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
        return;
    }

    // If the index is 0, insert the new node at the beginning
    if (index == 0) {
        newNode->next = *head;
        struct Node* last = *head;
        while (last->next != *head)
            last = last->next;
        last->next = newNode;
        *head = newNode;
    }
    else {
        // Traverse to the node at the given index
        struct Node* temp = *head;
        int count = 0;
        while (count < index - 1 && temp->next != *head) {
            temp = temp->next;
            count++;
        }

        // If the index is greater than the number of nodes, insert at the end
        if (temp->next == *head) {
            temp->next = newNode;
            newNode->next = *head;
        }
        else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void deleteNode(struct Node** head, int index) {
    if (*head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    struct Node* p = *head;
    struct Node* q = NULL;

    // Traverse to the node at the given index
    int count = 0;
    while (count < index) {
        q = p;
        p = p->next;
        count++;

        // If the index is greater than the number of nodes
        if (p == *head) {
            printf("Invalid index.\n");
            return;
        }
    }

    // If the node to be deleted is the head node
    if (p== *head && p->next == *head) {
        *head = NULL;
        free(p);
        return;
    }

    // If the node to be deleted is the head node
    if (p == *head) {
        q = *head;
        while (q->next != *head) {
            q = q->next;
        }
        *head = p->next;
        q->next = *head;
        free(p);
    }

    // If the node to be deleted is the last node
    else if (p->next == *head) {
        q->next = *head;
        free(p);
    }

    // If the node to be deleted is in between
    else {
        q->next = p->next;
        free(p);
    }
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("Circular Linked List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Inserting nodes at different indexes
    insertNode(&head, 10, 0); // Inserting at the beginning
    insertNode(&head, 20, 1); // Inserting at index 1
    insertNode(&head, 30, 2); // Inserting at index 2
    insertNode(&head, 40, 3); // Inserting at index 1 again
    insertNode(&head, 50, 4);
    insertNode(&head, 60, 0);
    insertNode(&head, 70, 1);
     // Displaying the circular linked list
    printf("Circular Linked List: ");
    displayList(head);
    int index = 2;
    deleteNode(&head, index);

    printf("Circular Linked List after deletion at index %d: ", index);
    displayList(head);


    return 0;
}
