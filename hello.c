#include <stdio.h>
#include <unistd.h>
pid_t pid1, pid2, pid3;
int main()
{
    pid1 = fork();
    pid2 = fork();
    pid3 = fork();
    printf("Hello pid1 %d pid2 %d pid3 %d getpid %d\n", pid1, pid2, pid3, getpid());
    return 0;
}