#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;
    int book_1, book_2, book_3;

    
    file = fopen("library.txt", "w");
    if (file == NULL) 
	{
        printf("ERROR: COULD NOT OPEN FILE FOR WRITING.\n");
        exit(1); 
    }

    
    printf("ENTER THREE BOOK IDs (integers):\n");
    scanf("%d %d %d", &book_1, &book_2, &book_3);

    
    fprintf(file, "%d %d %d\n", book_1, book_2, book_3);
    fclose(file);

    
    file = fopen("library.txt", "r");
    if (file == NULL)
	 {
        printf("ERROR: COULD NOT OPEN FILE FOR READING.\n");
        exit(1); 
    }

    
    int id_1, id_2, id_3;
    fscanf(file, "%d %d %d", &id_1, &id_2, &id_3);

   
    printf("BOOK IDs READ FROM FILE: %d %d %d\n", id_1, id_2, id_3);

    
    fclose(file);

    return 0;
}

