// 1
// 121
// 12321
// 1234321
#include<stdio.h>
int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }int c=i-1;
        for(int j=1;j<i;j++) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}