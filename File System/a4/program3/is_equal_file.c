/* Write a program which accept two file names from user and check whether contents of
that two files are equal are not.
*/

#include<string.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int args,char *argv[])
{
		
	int fd1,fd2;
	int diff;
	unsigned long word;
	ssize_t nr;
	printf("first file:%s",argv[1]);
	printf("second file:%s",argv[2]);
	
	fd1=open(argv[1],O_RDONLY);
	fd2= open(argv[2],O_RDONLY);
	printf("fd 1:%d",fd1);
	printf("fd 2:%d",fd2);
	
	
	printf(" files are:%d",cmp(argv[1],argv[2]));

	
	

 
return 0;
}


