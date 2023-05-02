// 12344321
// 123**321
// 12****21
// 1******1
#include<stdio.h>
int main() {
    for(int i=4;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        for(int j=4;j>i;j--) {
            printf("*");
        }
        for(int j=4;j>i;j--) {
            printf("*");
        }int c=i;
        for(int j=1;j<=i;j++) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}