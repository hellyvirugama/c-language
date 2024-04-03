#include <stdio.h>
void main()
{
    char filename[100] = "data1.txt";
    FILE *ptr = fopen(filename, "r");
    char container[100];
    if (ptr == NULL)
    {
        printf("The file not exists....\n");
    }
    else
    {
        printf("current file content :\n");
        printf("---------------------\n");
        while (fgets(container, 5, ptr) != NULL)
        {
            printf("%s", container);
        }
        fclose(ptr);

        ptr = fopen(filename, "a");

        printf("\n\nEnter Your Data : \n");
        gets(container);

        fputs("\n", ptr);
        fputs(container, ptr);

        printf("Data inserted successfully...\n");

        fclose(ptr);
    }

}