// 12345
// 4321
// 123
// 21
// 1
#include<stdio.h>
int main() {
    for(int  i=5;i>=1;i--) {
        if((i%2)!=0) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        }
        else {int c=i;
            for(int j=1;j<=i;j++) {
                printf("%d",c);
                c--;
            }
        }
        printf("\n");
    }
}