/*Write a program which accept directory name and file name from user and check whether
that file is present in that directory or not.*/
#include<stdio.h>
#include<unistd.h>

int manin()
{
char str[100]="";
printf("Enter file name:");
scanf("%s",str);

if(access(str, F_OK) != -1){
 printf("File is exist");
}else
{
printf("File is not exist");
}
return 0;
}
