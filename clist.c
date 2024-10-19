#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node ; //create alias

struct Node { //create structure
    int data; //variable containing the data
    Node *next; //pointer to the next node
};

Node *createNode(int data) { //function to create new node 
    Node *newNode = malloc(sizeof(Node)); //allocate memory
    //you need to convert the 'void *' that malloc returns to type 'Node *'
    newNode->data = data;//assigns the data entered as parameter
    newNode->next = NULL; //assigns next node to NULL (useful if its the last one)
    return (newNode);
}

void nHead(Node **head, int data){ //function to create new nodes one before the other
    Node *newNode = createNode(data);//use function to create new node and put it as head
    newNode->next = *head;//old head assigned to the next node 
    *head = newNode;//old head updated to new node 
}

void printList(Node *head){//function to print the list
    Node *temp = head;//create temporary variable to hold the head
    while (temp != NULL){
        printf("%d\n", temp->data);//print the data
        temp = temp->next;//assign temp to next node in order to move in the list
    }
}

int main(void) {
    int i = 1;
    Node *head = NULL;
    while (i <= 5){//loop to create new nodes
        nHead(&head, i);
        i++;
    }
    printList(head);
}