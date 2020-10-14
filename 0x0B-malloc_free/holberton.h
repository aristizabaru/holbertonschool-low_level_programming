#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
int getLength(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int getCharacter(char *s, int n);
int getStrings(char *s);
char **strtow(char *str);
char **populateMemory(char **p, char *str, int st);
#endif /* HOLBERTON */
