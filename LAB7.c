#include <stdio.h>
#include <time.h>
//Phakhawadee Suwanna
int main(int argc, char const *argv[])
{
 char name[50];
 int age;
 time_t rawtime;
 time (&rawtime);

 printf("Hello C\n");
 printf("What is your name ?.\n");
 printf("Enter your name : ");
 scanf("%[^\t\n]s",&name);
 printf("How old are you ?.\n");
 printf("Enter your age : ");
 scanf("%d", &age);
 while(age < 1){
        printf("Wrong age...");
        printf("Input age : ");
        scanf("%d", &age);
 }
 printf("Hello %s\n", name);
 printf("You are %d years old .\n",age);
 printf("Current date & time : %s",ctime(&rawtime));
 system("ls -la /home");
 return 0;
}
