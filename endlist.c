#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node *next;
};

Node *createNode(int data){
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
        return (NULL);
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}

void endlist(Node **head, int data){
    Node *newNode = createNode(data);
    Node *temp = *head;
    if (*head == NULL){
        *head = newNode;
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(Node *head){
    Node *temp = head;
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(void){
    Node *head = NULL;
    endlist(&head, 1);
    endlist(&head, 2);
    endlist(&head, 3);
    printList(head);
    free(head);
}