#include <stdio.h>
#include <unistd.h>

int main(void){
        int i;
        int pid=fork();
        for (i=0; i<500000; i++){
                if (pid!=0){
                      pid=fork();
                }
        }
        sleep(20);
        return 0;
}

