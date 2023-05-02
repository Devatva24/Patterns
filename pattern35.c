// 5
// 54
// 543
// 5432
// 54321
#include<stdio.h>
int main() {int c=5;
    for(int i=1;i<=5;i++,c=5) {
        for(int j=1;j<=i;j++) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}