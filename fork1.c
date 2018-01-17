//fork1.c
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
  pid_t pid;
  char *message;
  int n;
  printf("fork1 program starting\n");
  pid = fork();
  switch(pid)
  {
    case ­1:
    perror("fork1 failed\n");
    exit(1);
    case 0:
    message = "This is the child";
    n = 5;
    break;
    default:
    message = "This is the parent";
    n = 3;
    break;
  }
}
for(; n>0; n­­)
{
  puts(message);
  printf(" PID = %d\n", getpid());
  sleep(1);
}
exit(0);
