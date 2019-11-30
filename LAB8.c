#include <stdio.h>
#include <signal.h>
//Phakhawadee Suwanna

int main(int argc, char const *argv[])
{
   system("ps");
   printf("Parent Process ID %d\n",getppid());
   printf("Process ID %d\n",getpid());
   kill(pid,SIGKILL);
   printf("Killed Process %d\n",getpid());

 return 0;
}
