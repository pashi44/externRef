#include<stdio.h>
#include<string.h>

int add(int a , int b);
int sub(int a , int b);

int  add(int a , int b){
  return  (int)(a+b);
}


int  sub(int a , int b){

  if(a>b)  return  (int)(a-b) ;
  else return (int)(a-b);

}

  

  typedef int (*operatin)(int, int) ;

  
int compute( operatin op  , int a , int b){

    return  op(a,b);
}

  int main(){
// int (*compute)(int , int);
// int *k ;
// compute = add(2,3);
// k = *compute;
// 
// 
// printf("%d\n", *k);

int (*concy)(int, int);
concy=&sub;
printf("%d\n", concy(23,1));


// printf("%d\n",compute(&add, 5 ,5));
  return 0;
  }
