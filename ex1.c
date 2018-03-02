
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p,*q;
    printf("p=");
    scanf("%d",p);
    q=p+1;
    printf("\n p=%d",p);
    printf("\n q=%d",q);
    printf("int=%d",sizeof(int));


}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *p,*q;
    p=malloc(sizeof(*p));
    printf("p=");
    scanf("%lf",p);
    q=p+1;
    printf("\n p=%d",p);
    printf("\n q=%d",q);
    printf("\n int=%d",sizeof(double));


}
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *p,*q;
    p=malloc(sizeof(*p));
    printf("p=");
    scanf("%s",p);
    q=p+1;
  
    printf(" \n\n diff=%d",sizeof(char));


}
