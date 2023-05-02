// 1
// 232
// 45654
// 78910987
#include<stdio.h>
int main()
{int c=1;int d=1;
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d",c);
            c++;
        }
        d=c-2;
        for(int j=2;j<=i;j++) {
            printf("%d",d);
            d--;
        }
        printf("\n");
    }
}