#include <stdio.h>
#include <string.h>
int main() 
{
    char password1[50], password2[50];

    printf("ENTER PASSWORD:   \t\t");
    scanf("%s", password1);

    printf("RE-ENTER PASSWORD:\t\t");
    scanf("%s", password2);

	printf("\n");
    if (strcmp(password1, password2) == 0) 
	{
        printf("PASSWORD MATCHED!\n");
    } 
	else
	{
        printf("PASSWORDS DO NOT MATCH!");
    }

    return 0;
}

