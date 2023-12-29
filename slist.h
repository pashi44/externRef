#include<stdio.h>
#include<string.h>
#include<sys/types.h>

//file guards
#ifndef SLIST_H
#define SLIST_H
#endif 


// typedef int (*makethingshappen)(agr1,  agr2);
  typedef   void(*DISPLAY)(void*);
    typedef int(*COMPARE)(void*, void*);

extern int age;

  struct _node {
int *data;
struct _node *next;

};
typedef struct  _node Node;  
//making of nodes with struct   node
 struct _linkedList {
 Node *head;
 Node *tail;
 Node *current;
};

 typedef struct  _linkedList LinkedList; 
extern void initializeList(LinkedList*); 
extern void addHead(LinkedList*, void*); //Adds data to the linked list’s head
extern void addTail(LinkedList*, void*);  
extern void delete(LinkedList*, Node*)  ; //Removes a node from the linked list
extern Node *getNode(LinkedList*, COMPARE, void*); // Returns a pointer to the node containing a specific data item
extern void displayLinkedList(LinkedList*, DISPLAY); 
	   
