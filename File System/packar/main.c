/*
Application which is used to combine all regular files from the directory into one regular file.
*/

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
	
	if(argc != 3)
	{
		printf("Insuent arguments/n");
	 
	printf("Usave :DirectnFile_name\n");
	printf("Directory_Name:Name of directory %s\n",argv[1]);
	return -1;
	}
	
	dp=opendir(argv[1]);
	if(dp==NULL)
	{
	printf("Unable to open");
	return -1;
	}

	fddest=creat(argv[2],0777);
	if(fddest == -1)
	{
	printf("Unable to create new file");
	closedir(dp);
	return -1;	
	}
	printf("name the file are\n");
	while((dip=readdir(dp))!=NULL)
	{
	
	printf("%s\n",dip->d_name);
	sprintf(name,"%s%s",argv[1],dip->d_name);
	ret =stat(name,&sobj);
	if(S_ISREG(sobj.st_mode))
	{

	  strcpy(fobj.Fname,dip->d_name);
	   fobj.Fsize=sobj.st_size;
	  //write() the fileinfo structure into the file
	  write(fddest,&fobj,sizeof(fobj));
	  memeset(&fobj,0,sizeof(fobj));//airoout the memory
	fdsrc=open(name, O_RDONLY);
	//copy the contents of all files form directory into the Hello.txt
	while(ret==read(fdsrc,&Buffer,sizeof(Buffer)!=0)))
	{
	 write(fddest,Buffer,ret);
	}
	memset(Buffer,0,sizeof(Buffer));
	close(fdsrc);
	 
	  //printf("%s:%d\n",dip->d_name,sobj.st_size);
	}
	
	printf("%d",sobj.st_size);
	}
	closedir(dp);


return 0;
}
