// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
#include<stdio.h>
int main() {
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            if(i==j) {
                printf("%d",i);
            }
            else {
                printf("%d*",i);
            }
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            if(i==j) {
                printf("%d",i);
            }
            else {
                printf("%d*",i);
            }
        }
        printf("\n");
    }
}