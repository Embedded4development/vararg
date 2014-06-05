#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void average(char *format,...)
{

 // printf("No of argu= %d\n",num);
  va_list args;
  //double sum=0.0;
  int i;

  char string[80];
  va_start(args,format);

 
   //for(i=0;i<num;i++)
   // while(num=va_arg(args,int))  
    {

       vsprintf(string,format,args);     

        }


    printf("%s",string);

 // va_end(args);

 // return sum/num;
// return 0;
   }

main()
{

   average("first : %d second : %s\n",5,"nishant");

   }
