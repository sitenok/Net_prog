#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void timeout(int sig){
    if(sig == SIGALRM)
        puts("Time out!");
    alarm(2);    
}

void keycontrol(int sig){
    if(sig == SIGINT)
        puts("CTRL + S pressed");
}

int main( int argc, char *argv[]){
    int i; 
    signal(SIGALRM, timeout);
    signal(SIGINT, keycontrol);
    alarm(2);
    for(i=0; i<3; i++){
        puts("wait...");
        sleep(10);
    }

    return 0;
}
