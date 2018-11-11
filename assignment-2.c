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
            return type : int

*********************************************************************************/

bool isEmpty(){
    
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

void makeEmpty(){
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

void add(int value){
    
    Node *newnode = (Node *)malloc(sizeof(struct node));
    newnode->data = value;

    if(head == NULL){
        newnode = head;
        newnode->next = NULL;
    }

    else{
        newnode->next = head;
        newnode = head;
    }
}

