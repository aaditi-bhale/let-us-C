//shows the use of the #pragma directive, which allows certain features to be turned on or off
//the textbook version is outdated.

#include <stdio.h>
void func1(void)__attribute__((constructor));
void func2(void)__attribute__((destructor));
#pragma startup func1 //function is called upon startup (doesn't work with gcc)
#pragma exit func2 //function is called before termination (doesn't work with gcc)
int main () {
        printf("Inside main\n");
        return 0;
}
void func1() 
{
    printf("Inside func1\n");
}
void func2() 
{
    printf("Inside func2\n");
}