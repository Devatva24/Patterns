// 12345
// 2345
// 345
// 45
// 5
#include<stdio.h>
int main()
{int c;
    for(int i=5;i>=1;i--) {c=(5-i)+1;
        for(int j=1;j<=i;j++) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}