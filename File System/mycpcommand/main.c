/*
  Implement dustom cp command which is used to copy contents from one file into another file

Usage:

cp file1.txt file2.txt

File1.txt contains the data
we have to create file2.txt and write all the data from file1.txt into it.

Implimetation of CP command.
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

// CP Demo.txt Hello.txt
// CP agrv[1] argv[2]
//argv[1] open the file in read mode.
// argv[2] create new file.
int main(int argc,char* argv[])
{
	int fdsrc=0,fddest=0,ret=0;
	char buffer[1024]={'\0'};
	if(argc!=3)
	{
		printf("Erro:Invalid Arguments\n");
		printf("Usage:CP Source.tst Destination.txt\n");
		return -1;		
	}

	fdsrc=open(argv[1],O_RDONLY);
	if(fdsrc== -1)
	{
 	  printf("Unable to open file:%s\n",argv[1]);
	  return -1;
	}

	//0777 0x777

	fddest= creat(argv[2],0777);

	if(fddest == -1)
	{
 	  printf("Unable to open file:%s\n",argv[2]);
	  return -1;
	}

	while(ret=read(fdsrc,buffer,sizeof(buffer))!=0)
	{
	  write(fddest,buffer,ret);
	}
		
	close(fdsrc);
	close(fddest);

	printf("Copy successfull");

return 0;
}


