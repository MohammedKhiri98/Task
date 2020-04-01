#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
  printf("PID of ex1.c = %d \n",getpid());
  char *args[]={'./ex2',NULL};
  execv(args[0],args);
  printf("Back to ex1.c");
  return 0;
}