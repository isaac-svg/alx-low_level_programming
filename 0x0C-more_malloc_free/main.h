#ifndef MAIN__H
#define MAIN__H
#include <stdio.h>
#include <stdlib.h>
int _putchar(char b);
void exit_with_error();
int is_digit(char *s);
int _atoi(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int getstrlen(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
