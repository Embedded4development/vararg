#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>


#define print(...) printf (__VA_ARGS__)


 COMMON_Print(char *fmt,...)

  {    
    print (fmt,__VA_ARGS__);

     }



 main()
  {

  COMMON_Print("hello {0}  {1} \n",5,10);

       }


