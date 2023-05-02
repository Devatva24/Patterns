// 0
// 909
// 89098
// 7890987
// 678909876
// 56789098765
// 4567890987654
// 345678909876543
// 23456789098765432
// 1234567890987654321
#include<stdio.h>
int main() {int c,d;int f;
    for(int i=1;i<=10;i++) {int d=11-i;c=d;f=9;
        for(int j=1;j<=i;j++) {
            if(i==j) {
                printf("0");
            }
            else {
                printf("%d",c);
                c++;
            }
        }
        for(int j=1;j<i;j++) {
            printf("%d",f);
            f--;
        }
        printf("\n");
    }
}