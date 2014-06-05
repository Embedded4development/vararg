#include<stdio.h>
#include<stdarg.h>
int FINDMAX(int n, ...)
{

   int largest,val,i;
   va_list vl; 
   va_start(vl,n);
   printf("%d\n",n);
   largest=va_arg(vl,int);

   for(i=1;i<n;i++)
    {

      val=va_arg(vl,int);
      largest=(largest>val)?(largest):(val);

        }
   va_end(vl);
   return largest;
  }


int main()
{

  int max;
  max=FINDMAX(7,0,0,0,5,12,10,15);
  printf("max is :%d\n",max);
 }
