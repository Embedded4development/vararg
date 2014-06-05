#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
void print(char *str,...)
 {

  printf(__VA_ARGS__);

     }
 
main()
{


 print("here we are printing %d %d %d",10,20,30);


  }
