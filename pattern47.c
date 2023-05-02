// 1
// 24
// 135
// 2468
// 13579
#include<stdio.h>
int main() {
for(int i=1;i<=5;i++) {int c=1;
    if((i%2)==0) {
        for(int j=1;j<=i;j++) {
            printf("%d ",(j*2));
        }
    }
    else {
        for(int j=1;j<=i;j++) {
            printf("%d ",c);
            c=c+2;
        }
    }
    printf("\n");
}
}