#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int *p;
 p = A; 
 printf("%d",*P+2);
    printf("\n");
    printf("%d",*(P+2));
    printf("\n");
    printf ("%d",&P+1);
    printf("\n");
    printf("%d",*(&A[4]-3));
    printf("\n");
    printf("%d",*(A+3 ));
    printf("\n");
    printf("%d",&A[7]-P);
    printf("\n");
    printf("%d",P+(*P-10));
    printf("\n");
    printf("%d",*(P+*(P+8)-A[7]));


	return 0 ;
}
