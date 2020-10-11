
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>


//myexe DirectoryFilename
//my Argv[1] Argv[2]

struct info
{
  char Fname[266];
  int Fsize;

};
int main(int argc,char* argv[])
{
 	DIR *dp=NULL;
	struct dirent *dip=NULL;
	struct stat sobj;
	char name[300]={""};
	int ret=0;
	int fddest;
	int fdsrc=0;

	struct FileInfo fobj;
	char Buffer[1024];

	fdsrc=open(argv[1],O_RDONLY);
	if(fdsrc == -1)
	{
	printf("Unable to open");
	return -1;
	}
	while(ret = read(fdsrc,&fobj,sizeof(fobj))) !=0)
	{
	printf("File N:%s Size :%d\n",fobj.Fname,fobj.Fsize);
	create(fobj,Fname,0777);
	if(fddest ==-1)
	{
	  printf("unable to open file\n");
	 return -1;
	}
	
	
	Buffer = (char*)malloc(fobj.Fsize);
	read(fdsrc,Buffer,fobj.Fsize);
	
	write(fddest,Buffer,fobj.Fsize);

	free(Buffer);
	
	close(fddest);

	}

close(fdsrc);
return 0;
}
