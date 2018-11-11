// Header files 
#include <stdio.h>      // for i/o operations 
#include <malloc.h>    //  for allocating memory dynamically
#include <stdbool.h>   // for returnning bool values

// the linked list structure
struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

// List Pointers
Node *head = NULL;
Node *tail = NULL;

/************************************************************************

  Function Reference :  

  1:- isEmpty()  : 
            Function : To check weather the list is empty or not;
            return type : bool 
  
  2:- makeEmpty()  : 
            Function : To empty the linked list
            return type : void 
  
  3:- add()  :
            Function : To add a new data at front
            return type : void 
  
  4:- addLast()  : 
            Function : To add a new data at last 
            return type : void 
  
  5:- addAfter()  : 
            Function : To add a new data after a specific data
            return type : void 
  
  6:- remove()  :
            Function : To  remove first occurence of a given entry
            return type: void
  
  7:- removeAll()  :
            Function : To remove all the occurences of a given entry
            return type: void
  
  8:- printList()  :
            Function : To display the whole list
            return type : void
  
  9:- printListRev()  :
            Function : Print reverse of a list
            return type : void
  
  Helper Function :
      
      search()  :
            Function : Search a specific element
            return type : bool
      

*********************************************************************************/

bool isEmpty(){
    
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

void makeEmpty(Node *head){
    if(head == NULL){
        printf("The List is Empty");
        return;
    }
    else{
        
        Node *ptr;
        while(head != NULL){
            ptr = head;
            head = head->next;
            free(ptr);
        }
    }
}

bool search(Node *head, int key){
    Node *ptr = head;

    while(ptr != NULL){
        if(ptr->data = key){
            return true;
        }
        ptr = ptr->data;

    }
    return false;
}

void add(Node *head, int value){
    
    Node *newnode = (Node *)malloc(sizeof(struct node));
    newnode->data = value;

    if(head == NULL){
        newnode = head = tail;
        newnode->next = NULL;
    }

    else{
        newnode->next = head;
        newnode = head;
    }
}

void addLast(Node *head, int value){

    Node *newnode = (Node *)malloc(sizeof(struct node));
    newnode->data = value;

    if(head == NULL){
        newnode = head = tail;
        newnode->next = NULL;
    }

    else{
        tail->next = newnode;
        newnode->next = NULL;
        newnode = tail;
    }
}

void addAfter(Node *head, int value, int key){
    
    if(search(head, key)){
        
        Node *newnode = (Node *)malloc(sizeof(struct node));
        newnode->data = value;
        
        Node *ptr, *pptr, *nptr;
        pptr = ptr = head;
        nptr = ptr->next;

        while(ptr->data != key){
            ptr = ptr->next;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    } else {
        printf("The given key in not present in the list \n");
    } 
}

void remove(Node *head, int key){
    
    if(search(head, key)){
        
        Node *ptr, *pptr, *nptr;
        pptr = ptr = head;
        nptr = ptr->next;

        while(ptr->data != key){
            nptr = nptr->next;
            pptr = ptr;
            ptr = ptr->next;
        }
        pptr->next = nptr;
        free(ptr);

    } else {
        printf("The given Key is not present in the list\n");
    }
}

void removeAll(Node *head, int key){

    if(search(head, key)){
        
        Node *ptr, *pptr, *nptr;
        pptr = ptr = head;
        nptr = ptr->next;

        while(ptr->data != key){
            nptr = nptr->next;
            pptr = ptr;
            ptr = ptr->next;
        }
        pptr->next = nptr;
        free(ptr);
        removeAll(head, key);

    } else {
        printf(" All Gone ! ");
    }
}

void printList(Node *head){
    
    if(head == NULL){
        printf("Nothing to show !! \n");
    }
    else{
        Node *ptr = head;
        while(ptr != NULL){
            printf("%d -> ", ptr->data);
            ptr=ptr->next;
        }
    }
}

void printListRev(Node *head){
    Node *ptr,*cpt,*pptr;
    pptr = cpt = ptr = head;

    while(ptr->next != NULL){
        if(count == 1){
            cpt = cpt->next;
            pptr->next=NULL;
            ptr = cpt;
        }
        else{
            cpt=cpt->next;
            ptr->next=pptr;
            pptr=ptr;
            ptr=cpt;
        }
        count = count + 1;
    }
    ptr->next=pptr;
    head = ptr;
    printList(head);

}