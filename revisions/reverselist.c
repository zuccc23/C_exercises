#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node *next;
};

Node *createNode(int data) {
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

void delnode(Node **head, int i){
    Node *temp = *head;
    Node *temp2 = *head;
    while (temp2->data != i){
        temp2 = temp2->next;
    }
    while (temp->data != i-1){
        temp = temp->next;
    }
    temp->next = temp2->next;
    //temp = temp->next;
}

void printlist(Node *head){
    Node *temp = head;
    while (temp)
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void reverselist(Node **head){
    Node *temp = *head;
    Node *temp2 = *head;
    Node *temp3 = *head;
    int i = 0;

    temp3 = temp3->next;
    temp2 = temp2->next;
    temp3 = temp3->next;
    temp->next = NULL;
    while (i < 9) {
        temp2->next = temp;
        temp = temp2;
        temp2 = temp3;
        if (temp3->next != NULL)
            temp3 = temp3->next;
        i++;
    }
    *head = temp2;
}

int main(void){
    Node *head = NULL;
    int i = 1;
    while (i < 11){
        endlist(&head, i);
        i++;
    }
    printf("first list : \n");
    printlist(head);
    reverselist(&head);
    printf("second list : \n");
    printlist(head);
    Node *temp;
    while (head != NULL){
        temp = head;
        head= head->next;
        free(temp);
    }
}