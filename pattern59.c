// 11111
// 1   1
// 1   1
// 1   1
// 11111
#include<stdio.h>
int main()
{int c=1;
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=1;j--) {
            if(i==1 || j==1 || j==5 || i==5) {
                printf("1");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}