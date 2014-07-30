#include <stdio.h>

#define nline printf("\n")
#define dline nline; nline

void main () {

char one[4] = "four";
char two[4] = "five"; //warns only
char three[3] = "one\0";

typedef char * cptr; //typedef is a declaration prefixed with typedef keyword


nline;
printf ("%s,%s,%s",one, two, three);
nline;
printf("sizeof 'a' : %d", sizeof 'a');
dline;
//main ();
}

