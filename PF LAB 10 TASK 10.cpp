#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][21], search[21];
    FILE *file;

    for (int i = 0; i < 5; i++)
    {
        printf("ENTER NAME %d:\t", i + 1);
        scanf("%s", names[i]);
    }

    file = fopen("names.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "%s\n", names[i]);
    }
    fclose(file);

    file = fopen("names.txt", "r");
    if (file == NULL)
    {
        printf("ERROR OPENING FILE\n");
        return 1;
    }

    printf("ENTER NAME TO SEARCH: ");
    scanf("%s", search);

    char temp[21];
    int found = 0;
    while (fscanf(file, "%s", temp) != EOF)
    {
        if (strcmp(temp, search) == 0)
        {
            found = 1;
            break;
        }
    }
    fclose(file);

    if (found)
    {
        printf("NAME FOUND IN DIRECTORY\n");
    }
    else
    {
        printf("NAME NOT FOUND\n");
    }

    return 0;
}

