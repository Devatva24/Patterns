// 1
// 21
// 321
// 4321
// 54321
#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--) {int c=0;
        for(int j=5;j>=i;j--) {
            c++;
        }
        for(int j=5;j>=i;j--) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}