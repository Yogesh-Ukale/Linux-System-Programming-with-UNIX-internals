/*
Application which is used to combine all regular files from the directory into one regular file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>

//myexe DirectoryFilename
//my Argv[1] Argv[2]
int main(int argc,char* argv[])
{
 	DIR *dp=NULL;
	struct dirent *dip=NULL;
	struct stat sobj;
	char name[256]={""}
	int ret;
	if(argc != 3)
	{
		printf("Insuent arguments/n");
	 
	printf("Usave :DirectnFile_name\n");
	printf("Directory_Name:Name of directory %S\n",argv[1]);
	return -1;
	}
	
	dp=opendir(argv[1]);
	if(dp==NULL)
	{
	printf("Unable to open");
	return -1;
	}
	
	printf("name the file are\n");
	while((dip=readdir(dp))!=NULL)
	{
	
	printf("%s\n",dip->d_name);
	sprintf(name,"%s%s",argv[1],dip->d_name);
	ret=stat(dip->d_name,&sobj);
	if(S_ISREG(sobj.st_mode))
	{
	  printf("%s:%lld\n",dip->d_name,sobj.st_size);
	}
	
	printf("%d",sobj.st_size);
	}
	closedir(dp);


return 0;
}
