//problem 01

// #include <stdio.h>
// int main()
// {
//     int k;
//     for (k = -3; k < -5; k++)
//         printf("Hello ");
//     return 0;
// }


//problem 01 ans : there will be no output there

//problem 02  What will be the output in the following C program?


// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
//    printf("%d",i);
//    return 0;
// }

// problem 02 ans : 3


//problem 03 What will be the output of the following C code?

#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        a++;
        continue;
    }
    printf("%d %d\n",i,a);
    return 0;
}

// problem 03 ans : 5 5


// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (i = 0) {
//         printf("Hello\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main()
{
    int a = 0, i;
    for (i = 0;i < 5; i++)
    {
        continue;
        a++;
    }
    printf("%d %d",i,a);
    return 0;
}