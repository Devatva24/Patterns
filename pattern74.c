// Enter the row and column of a 2d array
// 3
// 3
// Enter the array elements(0 and 1 only)
// 1
// 0
// 1
// 0
// 1
// 0
// 1
// 0
// 1
// Entered matrix
// 1       0       1
// 0       1       0
// 1       0       1
// Ones    Zeroes
// 2       1
// 1       2
// 2       1
#include<stdio.h>
int main() {int a,b;
    printf("Enter the row and column of a 2d array\n");
    scanf("%d%d",&a,&b);
    int arr[a][b];
    printf("Enter the array elements(0 and 1 only)\n");
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix\n");
        for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            printf("%d\t",arr[i][j]);
        } 
        printf("\n");
    }
    printf("Ones\tZeroes\n");
    for(int i=0;i<a;i++) {int c=0;int d=0;
        for(int j=0;j<b;j++) {
            if(arr[i][j]==1) {
                c++;
            }
            else {
                d++;
            }
        }
        printf("%d\t%d\n",c,d);
    }
}