//incomplete
// 13579
// 3579
// 579
// 79
// 9
#include<stdio.h>
int main() {int c;
    for(int i=9;i>=1;i=i-2) {c=1;
        for(int j=1;j<=i;j=j+2) {
            printf("%d",c);
            c=c+2;
        }
        printf("\n");
    }
}