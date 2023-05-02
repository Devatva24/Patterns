//      1 
//    2 3 4
//  5 6 7 8 9
#include<stdio.h>
int main() {int c=1;
    for(int i=1;i<=5;i=i+2) {
        for(int j=5;j>=i;j--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
}