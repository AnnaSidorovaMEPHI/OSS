#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int k = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    k++;
  printf("Number of environment variables: %d\n", k); /* разыменование указателя */
}
