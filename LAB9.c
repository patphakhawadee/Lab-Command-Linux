#define _POSIX_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <time.h>
//Phakhawadee Suwanna

int main(int argc, char const *argv[])
{
   int N=0,M=0;
   printf("This process ID : %d\n", getpid());
   do{
           printf("Enter Positive integer (N): ");
           scanf("%d",&N);
   }while(N<0);
   do{
           printf("Enter Positive integer (M): ");
           scanf("%d",&M);
   }while(M<0);
   printf("*Start second*\n");
   sleep(N);
   printf("*End second*\n");
   printf("*Start micro-second*\n");
   usleep(M);
   printf("*End micro-second*\n");
 return 0;
}
