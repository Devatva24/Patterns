// 1
// 23
// 345
// 4567
// 56789
#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++) {
        for(int j=0;j<i;j++) {
            printf("%d",(j+i));
        }
        printf("\n");
    }
}