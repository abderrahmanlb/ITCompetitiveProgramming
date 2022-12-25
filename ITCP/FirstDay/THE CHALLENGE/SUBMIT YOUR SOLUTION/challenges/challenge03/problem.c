#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node {
    int data;
    struct Node* next;
} Node;
 
Node* newNode(int data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
 
void removeDuplicates(Node* start)
{
    Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data) {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else 
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}
 
int main()
{

    struct Node* start = newNode(1);
    start->next = newNode(1);
    start->next->next = newNode(2);
    start->next->next->next = newNode(3);
    start->next->next->next->next = newNode(3);
    start->next->next->next->next->next = newNode(3);
    start->next->next->next->next->next->next = newNode(4);
 
    printf("Linked list before removing duplicates ");
    printf ("\n");

    printList(start);
 
    removeDuplicates(start);
    printf("\nLinked list after removing duplicates \n");
    printList(start);
    printf ("\n");
 
    return 0;
}