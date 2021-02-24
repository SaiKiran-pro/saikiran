#include "myutils.h"
void Prime_1(int num)
{
    for(int i = 2; i <= num / 2; i++)
     {
       if(num % i == 0) 
       {
           printf("Number is prime");
       }
       else
       {
           printf("Number is not prime");
       }
     }
}
