//shows the working of the automatic storage class
// #include <stdio.h>
// int main () {
//     auto int i,j;
//     printf("%d %d\n", i,j); : output was 0,298018
//     return 0;
// }

//scope and life of an automatic variable
#include <stdio.h>
int main () {
    auto int i = 1;
    {
        auto int i =2;
        {
            auto int i =3;
            printf("%d\n", i);
        }
        printf("%d\n", i);
    }
    printf("%d\n", i); //the compiler treats the three i's as different variables, since they
    //are defined in different blocks.
    return 0;
}