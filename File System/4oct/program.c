
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	

	int ret=0;
	//ret=fork();
	if((ret=fork()) ==0)
	{
		printf("Child process is running with PID:%d\n",getpid());
		printf("Parent of child process is:%d\n",getpid());
		printf("Child says:Value of ret is::%d\n",ret);
	}
	else
	{
		printf("Parent process is running with PID:%d\n",getpid());
		printf("Parent of parent process is(Terminal :%d\n",getpid());
		printf("Parent says:Value of ret is::%d\n",ret);

	}

	exit(0);
}

