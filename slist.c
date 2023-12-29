#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<stdlib.h>
#include "slist.h"
//function defination  for void initalize

void initalize( LinkedList  *list){
list->head=  NULL;
list->tail= NULL;
list->current =  NULL;
}
// Next, we check to see whether the linked list is empty. If so, we assign the tail pointer to
// the node and assign NULL to the node’s next field. If not, the node’s next pointer is
// assigned to the list’s head. Regardless, the list’s head is assigned to the node:
void addHead(LinkedList *list, void* data) {
 Node *node = (Node*) malloc(sizeof(Node));
 node->data = data;
 if (list->head == NULL) {
 list->tail = node;
 node->next = NULL;
 } else {
 node->next = list->head;
 }
 list->head = node;
}
