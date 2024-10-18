#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node ;

struct Node {
    int data;
    Node *next;
};

Node *createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return (newNode);
}

void nHead(Node **head, int data){
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head){
    Node *temp = head;
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main(void) {
    int i = 1;
    Node *head = NULL;
    while (i <= 5){
        nHead(&head, i);
        i++;
    }
    //nHead(&head, 5);
    //nHead(&head, 4);

    printList(head);
    //printf("%d\n", head->data);
}