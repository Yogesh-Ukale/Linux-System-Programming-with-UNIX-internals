
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	int fd=0;
	fd=open("Demo.txt",O_WRONLY);
	printf("Hello\n");
	if(fork()==0)
	{
		write(fd,"Child",5);
	}
	else
	{
		write(fd,"Parent",6);
	}
	
	exit(0);
}

