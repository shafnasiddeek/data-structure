#include<stdio.h>
#include<math.h>
int main()
{
 int num,res=0,rem,i=0;
 while (1)
 {
   if(num==0)
   {
    break;
   }
   rem=num%2;
   num=num/2;
   res=res+rem * pow(10,i);
   i++;
 }
printf("binary equivalent of %d is %d",res);
return (0);
}

