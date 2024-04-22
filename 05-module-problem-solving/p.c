// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     if (x < 1)
//     {
//         printf("hello");
//     }
//     if (x == 5)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x == 0)
//         {
//             printf("inside if if\n");
//         }
//         else
//         {
//             printf("inside if else\n");
//         }
//     }
//     else
//     {
//         printf("inside else\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x >= 0)
//         {
//             printf("true\n");
//         }
//         else
//         {
//             printf("false\n");
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// int main () {
//      for (int i = 10; i >= 0; i -= 2) {
//             printf("%d ", i);
//         }
//      return 0;
// }






#include<stdio.h>

int main () {
     int x;
     scanf("%d", &x);
     int digit=x/1000;
     if(digit%2==0)
     {
      printf("EVEN\n");
     }else
     {
      printf("ODD\n");
     }
     return 0;
}