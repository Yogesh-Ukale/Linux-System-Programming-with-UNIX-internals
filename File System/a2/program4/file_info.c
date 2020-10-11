/*
 Write a program which accept file name from user and print all information about that file.
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int fd = 0;
	int iret = 0;
	
	char arr[11];
	
	if(argc != 2)
	{
		printf("Error:Insufficient arguments");
		return -1;
	}
	printf("file name is:%s",argv[0]);
	
	fd = open(argv[1],O_RDONLY);
	if(fd == -1)
	{
		printf("Error : Unable to open file");
		return -1;	
	}

	printf("File gets succesfully opned with FD : %d\n",fd);
	
	iret = read(fd,arr,10);
	if(iret == -1)
	{
		printf("Error : Unable to read\n");
		close(fd);
		return -1;
	}
	
	printf("Data gets read from the file succesfully\n");
	
	printf("Data is : %s",arr);
	
	close(fd);	
	
	return 0;
}
