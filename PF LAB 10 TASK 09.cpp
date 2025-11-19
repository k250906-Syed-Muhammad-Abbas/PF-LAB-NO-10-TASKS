#include<stdio.h>
#include<string.h>
int main()
{
	char name[3][20];
	
	printf("ENTER ANY THREE NAMES:\n");
	for (int i=0; i<3; i++)
	{
		fgets(name[i], 20, stdin);
		name[i][strcspn(name[i], "\n")] = 0;
	}
	
	for (int i=0; i<3; i++)
	{
		printf("Characters in Name %d:\n", i+1);
;		for (int j=0; j<strlen(name[i]); j++)
		{
			printf("%c ", name[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
