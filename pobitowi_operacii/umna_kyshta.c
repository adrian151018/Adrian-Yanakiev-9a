#include<stdio.h>

int main(void)
{
    int option;
    int roomnum;
    unsigned char rooms = 0;
    do{
        printf("Please choose one of the following options:\n0 - Exit the program\n1 - Switch lights\n2 - Print state\n");
        scanf("%d", &option);
        
        if(option == 0)break;
        else if(option == 1){
            do{
                printf("Room:");
                scanf("%d", &roomnum);
            }while(roomnum > 8 || roomnum < 1);
            roomnum = 1 << (roomnum - 1);
            rooms = rooms ^ roomnum;
            printf("\n\n");
        }
        else if(option == 2){
            printf("The lights are turned on in rooms: ");
            unsigned char check = 1;
            for(int i = 1;i < 9; i++){
                if((rooms & check) == check)printf("%d ", i);
                check = check << 1;
            }
            printf("\n\n");
        }
    }while(1);

    return 0;
}