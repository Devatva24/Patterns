//      1
//     123
//    12345
//   1234567
//  123456789
//   1234567
//    12345
//     123
//      1
#include<stdio.h>
int main() {
    for(int i=1;i<=9;i=i+2) {
        for(int j=9;j>=i;j=j-2) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=7;i>=1;i=i-2) {
        printf(" ");
        for(int j=7;j>=i;j=j-2) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
}