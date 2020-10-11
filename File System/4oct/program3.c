
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
	
	if(fork()==0)
	{
		execl("./Demoexe","",NULL);
	}
	else
	{
		printf("Parent process is running");
	}
	
	exit(0);
}

