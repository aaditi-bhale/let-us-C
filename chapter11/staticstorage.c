//program to illustrate the static storage class in action

#include <stdio.h>
void increment();
int main () {
    increment();
    increment(); //i is initialised to 1 every time
    increment();//j is initialised only during the first call, then its previous value is retained
    return 0;
}
void increment() {
    auto int i = 1;
    static int j = 1;
    i += 1;
    j += 1;
    printf("%d %d\n", i, j);
}