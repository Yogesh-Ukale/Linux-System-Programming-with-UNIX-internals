/*
  Write a program which accept file name from user and read whole file.

*/



#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	int iret = 0;
	
	char fname[100] = "";
	
	printf("Enter file name:");
	scanf("%s",fname);	

	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Error : Unable to open file");
		return -1;	
	}

	printf("File gets succesfully opned with : %d\n",fd);
	

	close(fd);	
	
	return 0;
}
