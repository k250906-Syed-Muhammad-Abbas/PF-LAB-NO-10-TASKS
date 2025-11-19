#include <stdio.h>
#include <string.h>

int main() {
    char username1[100], username2[50];

    printf("ENTER FIRST USERNAME:\t");
    scanf("%s", username1);

    printf("ENTER SECOND USERNAME:\t");
    scanf("%s", username2);

	printf("\n");
    strcat(username1, username2);

    printf("COMBINED USERNAME:\t%s\n", username1);

    return 0;
}

