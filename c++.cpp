#include <stdio.h>

#define nline printf("\n")
#define dline nline; nline

int main () {
const int size = 10; 
char one[5] = "four";
char two[size] = "five"; 
char three[15] = "one\0invisible";

nline;
printf ("%s,%s,%s",one, two, three);
dline;
printf ("size of 'a' :%d", sizeof 'a');
nline;
//main ();
return 0;
}

