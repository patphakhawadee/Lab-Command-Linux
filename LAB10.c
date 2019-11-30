#include <stdio.h>
#include <unistd.h>
//Phakhawadee Suwanna 593021273-3
int input_choice() {
    int choice;
    printf("Select 1 (Wait) or 2(Not wait): ");
    scanf("%d", &choice);
    while(choice != 1 && choice != 2) {
        printf("Wrong input.\n");
        printf("Select 1 (Wait) or 2(Not wait): ");
        scanf("%d", &choice);
    }
    return choice;
}

int main()
{
    int choice, process_check;
    choice = input_choice();
    system("ps -a ");
    printf("\nThis process pid : %d\n", getpid());
    process_check = fork();
    if(choice == 2) {
        if(process_check == 0) {
            printf("\nChild process pid : %d\n", getpid());
            system("ls -a /home");
        }
        else {
            sleep(2);
            printf("\n*The End*\n");
        }
    }
  else if(choice == 1) {
        if(process_check == 0) {
            printf("\nChild process pid : %d\n", getpid());
            system("ls -a /home");
            //sleep(1);
        }
        else {
            printf("\n*The End*\n");
        }
    }
    return 0;
}


