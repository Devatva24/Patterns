// 5
// 45
// 345
// 2345
// 12345
#include<stdio.h>
int main() {int c;
    for(int i=5;i>=1;i--) {c=i;
        for(int j=5;j>=i;j--) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}