/*
I have to implement a data structure that allows FiFo (First In First Out) stratergy.
Therefore i implemented Queue ;)
*/

#include <stdio.h> // for i/o operations
#include <malloc.h> // for memory allocation

struct Queue
{
    int data;
    struct Queue *next;
};
typedef struct Queue ds;

ds *head = NULL;
ds *last = NULL;

void insert(int n);
void delete();
void display();

// Driver code
int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    
    printf(" linked list is : \n");
    display();
    printf("\n");

    delete();
    display();
    
    delete();
    display();

    delete();
    display();

    delete();
    display();

    delete();
    display();

    delete();
    display();

    return 0;
}

void insert(int n){
    ds *newnode = (ds *)malloc(sizeof(ds));
    newnode->data = n;
    if(head == NULL){
        head = last = newnode;
        newnode->next = NULL;
    }
    else{
        last->next = newnode;
        newnode->next = NULL;
        last = newnode;

    }
}

void delete(){
    ds *ptr = head;
    head = head->next;
    printf("\n deleting : %d ",ptr->data);
    printf("\n");
    free(ptr);
}

void display(){
    if(head == NULL){
        printf("Nothing to show \n");
    }
    else{
        ds *ptr = head;
        // traversing the list till null is encountered
        while(ptr->next != NULL){
            printf("%d -> ",ptr->data);
            ptr = ptr->next;
        }
        printf(" %d",ptr->data);
    }
}

