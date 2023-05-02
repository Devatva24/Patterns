// 11
// 12 13
// 13 14 15
// 14 15 16 17
#include<stdio.h>
int main() {int d=10;
    for(int i=0;i<5;i++) {int c=d;
        for(int j=0;j<i;j++) {
            printf("%d\t",(c+j));
        }
        d++;
        printf("\n");
    }
}