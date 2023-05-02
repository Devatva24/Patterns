// *000*000*
// 0*00*00*0
// 00*0*0*00
// 000***000
#include<stdio.h>
int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            if(i==j) {
                printf("*");
            }
            else {
                printf("0");
            }
        }
        for(int j=4;j>=i;j--) {
                 if(i==j) {
                printf("*");
            }
            else {
                printf("0");
            }
        }
        for(int j=4;j>=i;j--) {
             if(i==j) {
                printf("*");
            }
            else {
                printf("0");
            }
        }
        for(int j=1;j<i;j++) {
            printf("0");
        }
        printf("\n");
    }
}