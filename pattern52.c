// 1
// 123
// 12345
// 1234567
#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i=i+2) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}