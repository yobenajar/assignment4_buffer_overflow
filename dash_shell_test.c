// dash_shell_test.c
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){

char *argv[2];
argv[0] = "/bin/sh";
argv[1] = NULL;
printf("Before;%i\n", getuid());
setuid(0);
printf("After:%i\n", getuid());

execve("/bin/sh", argv, NULL);
return 0;
}