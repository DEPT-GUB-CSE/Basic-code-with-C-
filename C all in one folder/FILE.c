#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("file.txt","w");

    if(file == NULL)
    {
        printf("File is not open.");
    }
    else
    {
        printf("File is open.");
        fclose(file);
    }
}
