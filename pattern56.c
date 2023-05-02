// 1
// 212
// 32123
// 4321234
#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++) {int c=0;
        for(int j=1;j<=i;j++) {
            c++;
        }
        for(int j=1;j<=i;j++) {
            printf("%d",c--);
        }
        for(int j=2;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}