#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void average(char *format,...)
{

 char *temp=format;


  while(*temp!='{')
     temp++;
  temp++;
/*
while(*temp!='{')
    temp++;
  temp++;
  */
int nooftharg=0;
 nooftharg = toint(temp,1);
 
printf("nooftharg=  %d\n",nooftharg);


//  printf("%s\n",temp);

 // printf("No of argu= %d\n",num);
  va_list args;
  //double sum=0.0;
  int i;

  char string[80];
  va_start(args,format);

 char *got="%d";
   //for(i=0;i<num;i++)
   // while(num=va_arg(args,int))  
    {

       vfprintf(stdout,got,&(args[1]));     
      // printf("%d\n",(int)args[0]);      


        }
  //  printf("%d",string);

   va_end(args);

 printf("exit\n");
 // return sum/num;
// return 0;
   }



  int toint(char *Input,int MaxSize)
   {
	char* tmp = Input;
	long digit;
	int IsNegativ = 0;

	if (MaxSize > 0 && *tmp == '-')
	{
		MaxSize--;
		tmp++;
		IsNegativ = 1;
	}
	// return value, must init to 0
	long ret = 0;
	while (MaxSize-- > 0 && *tmp)
	{
		digit = *tmp - ('0');

		if (digit < 0 || digit > 9)
		{
			return 0;
		}
		ret = (ret * 10) + digit;
		tmp++;
	}
	if (IsNegativ)
	{
		return (ret * -1);
	}
    printf("ret value= %ld\n",ret);
	return ret;

     }
    
main()
{

   average("first:{0} second:{1}",150,10);

   }
