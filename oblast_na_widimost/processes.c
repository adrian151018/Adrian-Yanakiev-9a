#include<stdio.h>
#include<limits.h>
#include<string.h>
#include"processes.h"

struct Process processes[5];
int processcount = 0;

static unsigned int nextprocessid(){
    static unsigned int i = 0;
    if(i < UINT_MAX){i++;return i;}
    else return 0;
}

unsigned int createnewprocess(char * name){
    if(processcount == 5){printf("5 processes working!Stop one to create a new one!\n\n"); return 0;}
    else {
    struct Process process;
    process.id = nextprocessid();
    if(process.id == 0)printf("End of range reached!\n\n");
    else strcpy(process.processname, name);
    processcount++;
    processes[processcount - 1] = process;
    return process.id;
    }
}

int stopprocess(unsigned int nomer){
    for(int i = 0; i < 5; i++){
        if(processes[i].id == nomer)for(int j = i; j < 5; j++){
            if(j == 4)processes[j].id = 0;
            else{
            processes[j] = processes[j + 1];
            processes[j + 1].id = 0;
            }
        }
    }
    if(processes[4].id == 0)processcount--;

    return 0;
}