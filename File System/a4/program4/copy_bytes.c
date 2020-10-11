/*
	Write a program which accept directory name from user and copy first 10 bytes from all
regular files into newly created file named as demo
*/

#include<sys/stat.h>
#include<sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int arg , char* args[])
{
	int ret;
	int offset;
	char buff[256];
	int fd;
	
	fd = open(args[1],O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
	
	fd=open(args[2],O_RDONLY);
	
	while(read(fd,buff,256) != 0)
	{
		printf("%s",buff);
		write(fd,buff,3);
	}
	close(fd);

return 0;
}
