// 54321
// 4321
// 321
// 21
// 1
#include<stdio.h>
int main()
{int c,f;
    for(int i=0;i<5;i++) {c=5-i;
        for(int j=5;j>i;j--) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}