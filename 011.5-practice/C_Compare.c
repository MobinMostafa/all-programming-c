#include<stdio.h>
#include<string.h>

int main () {
     char x[21],y[21]; 
     scanf("%s %s",x,y);
     int v=strcmp(x,y);
     if(v<0){
       printf("%s",x);
     }
     else if (v>0)
     {
        printf("%s",y);
     }else{
      printf("%s",x);
     }
     

     return 0;
}