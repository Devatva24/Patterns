// 55555
// 45555
// 34555
// 23455
// 12345
#include<stdio.h>
int main() {
    for(int i=0;i<=4;i++) {int c=(5-i);
        for(int j=0;j<=i;j++) {
            printf("%d",c);
            c++;
        }
        for(int j=3;j>=i;j--) {
            printf("5");
        }
        printf("\n");
    }
}