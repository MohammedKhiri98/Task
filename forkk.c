#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


int main(int argc , char *argv[])
{
   pid_t pid;
   pid=fork();
   
   if(pid<0)//process error
     printf("proccess error\n");

   if(pid>0)//parent
     {
	printf("iam  parent with pid %d\n",(int)getpid());
	
     } 
   if(pid==0)//chiled 
     {
        
	printf("iam chiled with pid %d\n",(int)getpid());	
     }
     
   return 0;
}
