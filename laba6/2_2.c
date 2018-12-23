#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = fork();
     if (pid == 0) {
        int p1=getpid();
        int p2=getppid();
	sleep(30);
        printf("Pid этого процесса %d\n ppid процесса %d\n",p1,p);
                 } else if (pid > 0) {
	                 sleep(30);
			 printf("Это сообщение из родительского процесса.\n");
                                            }

                                            return 0;
                                           }

