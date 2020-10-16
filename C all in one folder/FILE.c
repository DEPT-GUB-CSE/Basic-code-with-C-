#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("file.txt","w");
    char myName[] = "Md.Sayed Anawer Shawon.\n Nazmul Hossain Shohag.";
    int len= strlen(myName);

    if(file == NULL)
    {
        printf("File is not open.");
    }
    else
    {   printf("File is open");

        for (int i=0; i <len; i++)
        {
            fputc(myName[i],file);
        }
        fclose(file);
    }
}
