// 12345671234567
// 123456  123456
// 12345    12345
// 1234      1234
// 123        123
// 12          12
// 1            1
#include<stdio.h>
int main() {int a=7;
    for(int i=7;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        for(int k=7;k>a;k--){
            printf(" ");
        }
        for(int l=1;l<=i;l++) {
            printf("%d",l);
        }
        a=a-2;
        printf("\n");
        }
}