// 1     1
//  2   2
//   3 3
//    4
//   3 3
//  2   2
// 1     1
#include<stdio.h>
int main() {int c=1;int d=1;int f;
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=7;j++) {
            if(i==j) { 
                if(i>=4) {
                    printf("%d",c);
                    c--;
                }
                else {
                 printf("%d",c);
                c++;
            }
        }
        else if((i+j)==8) {
            if(i<=4) {
                    printf("%d",d);
                    d++;
                    f=d-1;
                }
                else {
                 printf("%d",f);
                f--;
        }
        }
        else {
                printf(" ");
            }
        }
        printf("\n");
    }
}