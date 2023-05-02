// 1 
// 3 2
// 4 5 6
// 10 9 8 7
// 11 12 13 14 15
#include<stdio.h>
int main() {int c=1;
    for(int i=1;i<=5;i++) {
        if((i%2)!=0) {
        for(int j=1;j<=i;j++) {
            printf("%d ",c);
            c++;
        }
        }
        else {
            for(int j=1;j<=i;j++) {
                c++;
            }int d=c-1;
            for(int j=1;j<=i;j++) {
                printf("%d ",d);
                d--;
            }
        }
        printf("\n");
    }
}