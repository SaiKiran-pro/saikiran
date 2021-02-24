#include "myutils.h"

int min(int arg_count, ...) 
{ 
    int i; 
    int min, a; 
    va_list ap; 
    va_start(ap, arg_count);

    min = va_arg(ap, int); 
    for (i = 2; i <= arg_count; i++) 
        if ((a = va_arg(ap, int)) < min) 
            min = a; 


    va_end(ap); 
  
    return min; 
} 