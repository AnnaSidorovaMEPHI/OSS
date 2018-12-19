#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
     if (pid == 0) {
	int p1=getpid();
	int p2=getppid();
	printf("Pid этого процесса %d\n ppid процесса %d\n",p1,p2);
  		 } else if (pid > 0) {
                         printf("Это сообщение из родительского процесса.\n");
                                            }
 
                                            return 0;
                                           } 
