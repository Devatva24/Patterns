// 13579
// 3579
// 579
// 79
// 9
#include<stdio.h>
int main() {
    for(int i=1;i<=9;i=i+2) {int c=i;
        for(int j=9;j>=i;j=j-2) {
            printf("%d",c);
            c=c+2;
        }
        printf("\n");
    }
}
