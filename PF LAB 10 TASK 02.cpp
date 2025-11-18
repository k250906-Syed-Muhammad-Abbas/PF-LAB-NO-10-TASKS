#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    char character;
    printf("Enter A Word:\t");
	scanf("%s", word);
    
	printf("Enter The Charater To Search In The Word:\t");
    scanf(" %c", &character);
    printf("\n\n");
    
	if(strchr(word,character))
    { 
		int index=strchr(word,character) - word + 1;
		printf("Character [%c] found in the string[%s] on the index[%d].\n", character, word, index);
    }
   else
    {
       printf("Character Not Found");
    }
 
	return 0;
}

