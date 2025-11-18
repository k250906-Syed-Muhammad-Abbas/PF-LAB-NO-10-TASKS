#include<stdio.h>
#include<string.h>
int main()
{
    char secret[10] = " Falcon";
    char code[1000];
   	printf("Enter The Code Word:\t\t");
	fgets(code, 999,stdin);
	code[strcspn(code, "\n")] = '\0';
	
    printf("\n");
    int len=strlen(code);
    printf("The code word [%s] has %d characters.", code, len);
    printf("\n\n");  
    strcat(code, secret);
  	printf(" %s", code);
    return 0;
}
	
