//      5
//     54
//    543
//   5432
//  54321
#include<stdio.h>
int main() {
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=i;j--) {
            printf(" ");
        }int c=5;
        for(int j=1;j<=i;j++) {
            printf("%d",c);
            c--;
        }
        printf("\n");
    }
}