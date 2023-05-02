// 1234
// 2341
// 3421
// 4321
#include<stdio.h>
int main()
{int c=1;
    for(int i=1;i<=4;i++) {c=i;
        for(int j=4;j>=i;j--) {
            printf("%d",c);
            c++;
        }int d=i-1;
        for(int j=2;j<=i;j++) {
            printf("%d",d);
            d--;
        }
        printf("\n");
    }
}