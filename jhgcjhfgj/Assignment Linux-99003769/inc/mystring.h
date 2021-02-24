#ifndef __MYSTRING_H
#define __MYSTRING_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *mystrcpy(char*string1, char*string);
int mystrlen(char *str);
int mystrcmp(const char* str1, const char* str2);
char *mystrcat(char *destination, const char *source);


#endif