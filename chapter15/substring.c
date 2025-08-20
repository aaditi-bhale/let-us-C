//extract a substring from a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () {
    char str[20], news[20];
    char *s, *t;
    int pos, n, i;
    printf("\nEnter a string: ");
    scanf("%s", &str);
    printf("Enter position and number of characters to extract: ");
    scanf("%d %d", &pos, &n);
    s = str; //point to the beginning of the string
    t = news; //point to the beginning of the new empty string
    if (pos < 0 || pos > strlen(str))
   { 
        printf("Improper position value");
        exit (1);
   } 

   if (n<0)
   n = 0;
   if(pos +n  >strlen(str))
   n = strlen(str) - pos;

   s = s + pos;
   for (i=0; i<n; i++)
   {
    *t = *s;
    s++;
    t++;
   }
   *t = '\0';
   printf("The substring is: %s\n", news);
   return 0;
}