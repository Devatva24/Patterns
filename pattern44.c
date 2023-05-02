// 1234567
// 12345
// 123
// 1
#include<stdio.h>
int main() {
    for(int i=7;i>=1;i=i-2) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}