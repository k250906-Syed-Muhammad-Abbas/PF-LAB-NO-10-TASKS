#include <stdio.h>
#include <string.h>

int main() 
{
    char message[100];
    char backup[100];

    printf("ENTER A SHORT MESSAGE:\t");
    
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
	printf("\n");
    strcpy(backup, message);

    printf("ORIGINAL MESSAGE:\t%s\n", message);
    printf("BACKUP MESSAGE:  \t%s", backup);

    return 0;
}

