// 555555555
// 544444445
// 543333345
// 543222345
// 543212345
// 543222345
// 543333345
// 544444445
// 555555555
#include<stdio.h>
int main() {
    for(int i=5;i>=1;i--) {
        for(int j=5;j>i;j--) {
            printf("%d",j);
        }
        for(int j=1;j<i;j++) {
            printf("%d",i);
        }
        for(int j=1;j<i;j++) {
            printf("%d",i);
        }
        int c=i;
        for(int j=5;j>=i;j--) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++) {
        for(int j=5;j>i;j--) {
            printf("%d",j);
        }
        for(int j=1;j<=i;j++) {
            printf("%d",i);
        }
        for(int j=2;j<=i;j++) {
            printf("%d",i);
        }int c=i+1;
        for(int j=5;j>i;j--) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
    }