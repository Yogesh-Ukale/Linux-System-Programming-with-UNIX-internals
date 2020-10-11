/*Write a aprogram which accept directory name from user and create new directory of that
name.*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){

	int test;
	char dirname[10]="";
	printf("Enter Directory name to create:");
	scanf("%s",dirname);
	test=mkdir(dirname,0777);
	if(test==0)
	{
		printf("directory is create");
	}
return 0;
	
}

	
