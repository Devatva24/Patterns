// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15
#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++) {int c=4;int d=i;
        for(int j=1;j<=i;j++) {
            printf("%d\t",d);
            d=d+c;
            c--;
        }
        printf("\n");
    }
}