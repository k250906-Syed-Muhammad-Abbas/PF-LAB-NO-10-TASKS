#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char string_1[30], string_2[30];
	
	printf("ENTER THE VALUE OF STRING NUMBER 1:\t");
	scanf("%s", string_1);
	printf("ENTER THE VALUE OF STRING NUMBER 2:\t");
	scanf("%s", string_2);
	printf("ENTER THE INDEX YOU WANT TO COMPARE:\t");
	scanf("%d", &n);
	
	int length_1 = strlen(string_1);
	int length_2 = strlen(string_2);
	
	if((length_1 < length_2 && length_2 < n) || (length_1 < length_2 && length_2 < n))
	{
		printf("THE INDEX IS BIGGER THAN THE ID LENGTH.\n");
		return 0;
	}
	else
	{
	if(strncmp(string_1, string_2, n) == 0)
	{
		printf("\nSAME PREFIX!");
	}
	else
	{
		printf("\nDIFFERENT PREFIX!");
	}
	}

	return 0;
}
