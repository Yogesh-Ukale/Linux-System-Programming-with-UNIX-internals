/*
 Write a program which accept file name from user and write string in that file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	int iret = 0;
	
	char arr[11] = "Jai Ganesh";
	char str[100]="";
	
	printf("Enter file name:");
	scanf("%s",str);
	

	fd = open(str,O_RDWR);
	if(fd == -1)
	{
		printf("Error : Unable to open file");
		return -1;	
	}

	printf("File gets succesfully opned with FD : %d\n",fd);
	
	iret = write(fd,arr,10);
	if(iret == -1)
	{
		printf("Error : Unable to write\n");
		close(fd);
		return -1;
	}
	
	printf("Data gets written in the file succesfully\n");
	
	close(fd);	
	
	return 0;
}
