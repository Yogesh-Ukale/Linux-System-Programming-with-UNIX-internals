/*
 Write a program which accept file name from user and open that file.
*


#include<stdio.h>
#include<stdlib.h>
int main(){
	
	FILE *file;
	char fname[100]="";
	char ch;
	printf("Enter File name.");

	scanf("%s",fname);

	file = fopen(fname,"r");
	
        while ((ch = fgetc(file)) != EOF)
        {
            printf("%c", ch);
        }
    
 
	return 0;
}
