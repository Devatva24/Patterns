//Input : KIIT UNIVERSITY
//OUTPUT : KIIT YTISREVINU
#include<stdio.h>
#include<string.h>
int main() {char str[50];
    printf("Enter the string\n");
    gets(str);int i=0;
    int l=strlen(str);
    while(str[i]!='\0') {
        if(str[i]==' ') {
            break;
        }
        else {
            printf("%c",str[i]);
            i++;
        }
    }
    printf(" ");
    for(int j=l-1;j>i;j--) {
        printf("%c",str[j]);
    }
}