#include<stdio.h>
#include<string.h>

int main () {
     char a[20];
    //  gets(a);
    fgets(a,14,stdin);
    //  scanf("%s",&a);
     printf("%s",a);
     return 0;
}