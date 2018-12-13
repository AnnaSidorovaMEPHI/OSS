#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int k=0;
  for (p = environ; *p != NULL; p++){ /* перебор всех элементов массива */	
    k++;
    if (k<11)
	printf("%s\n", *p); /* разыменование указателя */
    }
}
