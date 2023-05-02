// Enter the number
// 5
//      1 
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
#include<stdio.h>
int main() {int n;int a;
printf("Enter the number\n");
scanf("%d",&n);int f=1;
    for(int i=1;i<=n;i++,f*=11) {a=f;
        for(int j=n;j>=i;j--) {
            printf(" ");
        }
        for(int k=1;k<=i;k++) {
            while(a!=0) {
                printf("%d ",(a%10));
                a=a/10;
            }
        }
        printf("\n");
    }
}