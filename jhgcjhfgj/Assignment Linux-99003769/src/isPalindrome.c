#include "myutils.h"
int isPalindrome(int number)
{
  int temp, remainder, reverse=0;
  temp = number;
  while( number!=0 )
  {
     remainder = number % 10;
     reverse = reverse*10 + remainder;
     number /= 10;
  }
  if ( reverse == temp ) 
  {
    return number;
  }
  else 
  {
    return 0;
  }

}