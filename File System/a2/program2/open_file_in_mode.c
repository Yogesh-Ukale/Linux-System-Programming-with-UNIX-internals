/*
  Write a program which accept file name and mode from user and then open that file in
specified mode.
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	
	FILE *file;
	char fname[100]="";
	char ch;
	char mode[1]="";
	printf("Enter File name:");

	scanf("%s",fname);
	printf("Enter File mode:");	
	scanf("%s",mode);

	file = fopen(fname,mode);
	
        while ((ch = fgetc(file)) != EOF)
        {
            printf("%c", ch);
        }
    
 
	return 0;
}

