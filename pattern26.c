// **************
// ******  ******
// *****    *****
// ****      ****
// ***        ***
// **          **
// *            *
// **          **
// ***        ***
// ****      ****
// *****    *****
// ******  ******
// **************
#include<stdio.h>
int main() {int a=7;int b=11;
    for(int i=1;i<=7;i++) {
        for(int j=7;j>=i;j--) {
            printf("*");
        }
        for(int k=7;k>a;k--){
            printf(" ");
        }
        for(int l=7;l>=i;l--) {
            printf("*");
        }
        a=a-2;
        printf("\n");
        }
        for(int i=2;i<=7;i++) {
            for(int j=1;j<=i;j++) {
                printf("*");
            }
            for(int k=1;k<b;k++) {
            printf(" ");
            }
            for(int l=0;l<i;l++) {
                printf("*");
            }
            b=b-2;
            printf("\n");
        }
    }