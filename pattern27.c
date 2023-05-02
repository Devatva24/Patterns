// **************
// ******  ******
// *****    *****
// ****      ****
// ***        ***
// **          **
// *            *
#include<stdio.h>
int main() {int a=7;
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
}