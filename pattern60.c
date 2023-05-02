//      1
//     23
//    456
//   78910
//  1112131415
#include<stdio.h>
int main()
{int c=1;
    for(int i=5;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}