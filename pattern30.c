// 12345
// 21234
// 32123
// 43212
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
        for(int j=1+1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}
