#include <stdio.h>
#include <unistd.h>

int main(void){
        int parent=getpid();
        int i;
        for (i=0; i<10; i++){
                if (getpid()==parent){
                        fork();
                }
                else sleep(15);
}
}  
