#include<stdio.h>
#include  "slist.h"
#include<stdlib.h>
int   main() {


Node *n ;
n =(Node*) malloc(sizeof(Node));
n->data =  (int*)malloc(sizeof(int));
	*(n->data) =  254;
printf("%p\n", n);

printf("%p\n",(n->data));


printf("%p\n", ((n->data)+1));

printf("%d\n",  *((n->data)+1));
printf("%p\n",(n->next) );
printf("%d\n", *(n->data));

printf("%5ld", sizeof(n));

	return 0; 

}
