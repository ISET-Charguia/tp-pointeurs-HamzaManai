#include   <stdio.h>
#include   <stdlib.h>
#include <string.h>
int main(void)  {
    char ch[100];
	char *p;
	int i=0;

    printf("Saisir une chaine  :");
    scanf("%s", ch);
    
    p=ch;
    while (*p!='\0'){
       i++;
        p++;}
    printf("longueur est %d\n",i);
return 0;
    }
