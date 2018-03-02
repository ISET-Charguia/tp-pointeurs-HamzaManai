#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n,m,i;
int A[30],B[30];
int *p,*p2;
do
    {
printf ("donner le taille n\n");
scanf("%d",&n);
printf ("donner le taille m \n");
scanf("%d",&m);
 }while (n<1 || m<1);

for(p=A;p<A+n;p++)
		{
    puts("saisir de tab A");
	scanf("%d",p);
   }

for(p2=B;p2<B+m;p2++)
		{
    puts("saisir de tab B");
	scanf("%d",p2);
   }
p2=B;

for(i=0;i<m;i++)
		{
*(p+i)=*p2;
p2=p2+1;
	}

n=n+m;

for(p=A;p<A+n;p++)
		{
    printf("%d\t",*p);
   }


return 0 ;
}
