#include "myutils.h"
int factorial(unsigned int n) 
{ 
    int fact = 1, i; 
    for (i =2; i <= n; i++) 
        fact *= i; 
    return fact; 
}