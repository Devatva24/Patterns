// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++) {
      for(int j=1;j<=i;j++) {
        printf("%d",j);
      }
      for(int j=5;j>i;j--) {
        printf(" ");
      }
      for(int j=5;j>i;j--) {
        printf(" ");
      }
      int c=i;
      for(int j=1;j<=i;j++) {
        printf("%d",c);
        c--;
      }
      printf("\n");
    }
}