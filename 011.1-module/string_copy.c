// make copy 
// #include<stdio.h>
// #include<string.h>

// int main () {
//      char a[100], b[100];
//      scanf("%s %s",a,b);
//      printf("%s %s\n",a,b);

//      for (int i=0; i<strlen(b); ++i){
//         a[i] = b[i];
//      }

//      printf("%s %s",a,b);
//      return 0;
// }

// build in copy

#include<stdio.h>
#include<string.h>

int main () {
     char a[100],b[100];
     scanf("%s %s",a,b);
     printf("%s %s\n",a,b);
     strcpy(a,b);
     printf("%s %s",a,b);
     return 0;
}
