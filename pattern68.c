//error
// 1 
// 1 1
// 0 2 1
// 1 3 3 1
// 0 4 6 4 1
#include<stdio.h>
#include<math.h>
int main() {
    int n=1;int d;int c=n;
    for(int i=1;i<=5;i++){
    while(c>0) {
        d=c%10;
        printf("%d ",d);
        c=c/10;
    }
    c=pow(11,i);
    printf("\n");
    }
}