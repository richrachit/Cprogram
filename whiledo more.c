#include<stdlib.h>
int main()
{
    int number,sum=0;
   do
   {
       printf("Enter a number to add,Enter 0 to finish adding:");
       scanf("%d",&number);
       sum+=number;
   }
   while(number!=0);
   printf("Sum=%d",sum);

   return 0;

}
