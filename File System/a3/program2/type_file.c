/*
  Write a program which accept directory name from user and print all file names and its
types from that directory.
*/
#include<stdio.h>
#include<dirent.h>

int main(void)
{
    DIR *d;
    struct dirent *dir;
    char str[50]="";
    printf("Enter directory:-");
    scanf("%s",str);

    d = opendir(str);
    if (d)
    {
        while ((dir = scandir(d)) != NULL)
        {
            printf("%s\n", dir->d_type);
        }
        closedir(d);
    }

	
    return(0);
}
