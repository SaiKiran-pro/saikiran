#include "bitmask.h"

int resetBit(int m, int o) 
{
return (m & (~(1 << (o - 1)))); 
}