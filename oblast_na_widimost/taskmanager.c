#include<stdio.h>
#include"processes.h"
#include<string.h>

extern struct Process processes[5];

int main(){
    int option;
    do{
        printf("Please choose one of the following options:\n0 - Exit the program\n1 - Create process\n2 - Print working processes\n3 - Stop process\n");
        scanf("%d", &option);
        
        if(option == 0)break;
        else if(option == 1){
            char procname[30];
            printf("Process name: ");
            scanf("%s", procname);
            printf("\n\n");
            createnewprocess(procname);
        }
        else if(option == 2){
            printf("\n");
            for(int x = 0; x < 5; x++){
                if(processes[x].id != 0)printf("%u %s\n", processes[x].id, processes[x].processname);
            }
            printf("\n");
        }
        else if(option == 3){
            unsigned int spid;
            printf("Process ID: ");
            scanf("%u", &spid);
            printf("\n\n");
            stopprocess(spid);
        }
    }while(1);

    return 0;
}