#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
  printf("we are in ex2.c \n");
  char *args[]={'./ex2',NULL};
  printf("PID of  ex2.c= %d \n",getpid());
  return 0;
}