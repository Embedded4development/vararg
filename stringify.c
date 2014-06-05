#include <stdio.h>
#include <string.h>
#include<stdarg.h>
#define print(x, ... ) \



    char a[100];\
    strcpy(a,#__VA_ARGS__);\
    printf("%s %s",#x,a);




  int main(void) 
   {
    // magic...
    print(Arpit, "Jain Enjoy The World","Hello World")
    return 0;

    }


