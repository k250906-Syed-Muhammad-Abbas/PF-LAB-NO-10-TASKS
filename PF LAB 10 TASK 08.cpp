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
	
	printf("\nPRINTING NAMES:\n");
	for (int i=0; i<3; i++)
	{
		printf("%d) %s\n", i+1, name[i]);
	}
	
	return 0;
}
