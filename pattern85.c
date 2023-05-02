#include<stdio.h>
int main() {int c=1;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            if(i==j) {
                c=i;
                continue;
            }
            else {
            printf("%d",c);
            c++;
            continue;
        }
        }
        printf("\n");
    }
}