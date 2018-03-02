#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int *A,n,Aide;
int *p,*p2;


do
	{
printf ("donner n\n");
scanf("%d",&n);
 }while (n<1);
A=malloc(n*sizeof(*A));

	for(p=A;p<A+n;p++)
		{
	puts("saisir un entier");
	scanf("%d",p);
             }
p=A;
*p2=*(A+n);
Aide=*p;

for(p=A;p<A+n;p++)
printf("%d\t",*p);
return 0;
}
