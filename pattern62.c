//                1  
//             4  9  16
//          25  36  49  64  81
//       100  121  144  169  196  225  256
//    289  324  361  400  441  484  529  576  625 
#include<stdio.h>
int main()
{int c=1;
    for(int i=9;i>=1;i=i-2) {
        for(int j=1;j<=i;j=j+2) {
            printf("   ");
        }
        for(int j=9;j>=i;j--) {
            printf("%d  ",(c*c));
            c++;
        }
        printf("\n");
    }
}