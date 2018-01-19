//execlp1.c
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{

printf("Running ps with execlp1\n");
execlp("ps","ps","ax",NULL);
printf("Done.\n");
exit(0);

}
