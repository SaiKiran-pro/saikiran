#include "bitmask.h"

int setBit(int m, int o) 
{ 
    return (m | (1 << (o - 1))); 
}