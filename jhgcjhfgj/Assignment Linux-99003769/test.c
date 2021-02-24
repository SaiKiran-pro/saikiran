#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"

int main() 
{ 
    int m = 5, o = 1;

    printf("\n%d",factorial(3));
    printf("\n%d",isPalindrome(1313));
    Prime_1(5);
    min(10,20,30); 


    printf("\n%d",flip(23));
    printf("%d with %d-th bit Set: %d\n", m, o, setBit(m, o)); 
    printf("%d with %d-th bit Cleared: %d\n", m, o, resetBit(m, o));
    printf("\n string length\t%d", mystrlen("hellow")); 
    mystrcmp("hellow", "hi");
    mystrcpy("hi","hellow"); 
    printf("\n%s", mystrcat("hi","hellow")); 
    return 0; 
}