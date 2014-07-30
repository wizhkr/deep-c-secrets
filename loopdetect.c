#include "khdr.h"

typedef struct loop{
 struct loop * next;
}Loop;

Loop * makeloop (int n, int begin) {
int i;
Loop * head = NULL;
Loop * prev = NULL;
Loop * loopHead = NULL;

for (i = 0; i < n; ++i) {

Loop * tmp = malloc (sizeof (Loop));
tmp->next = NULL;

if (i == begin)
loopHead = tmp;

if (prev == NULL)  {// first element of the list 
head = tmp;
prev = head;
continue;
}

prev->next = tmp;
prev = tmp;
}
if (prev)
prev->next = loopHead;

return head;
}



void looper (Loop * head) {

Loop* slowptr =  NULL;
Loop * fastptr = NULL;

if (!head) {
printf ("Empty list.\n");
return;
}

if (!(head->next)) {
printf ("No loop\n");
return;
}

slowptr  = head;
fastptr = head->next;

while(slowptr && fastptr && slowptr != fastptr) {

slowptr = slowptr->next;

if(fastptr=fastptr->next)
fastptr = fastptr->next;
}

if (slowptr == NULL || fastptr == NULL)
printf ("No loop\n");

else printf ("Loop exists.\n");

}








void main (int argc, char **argv) {

Loop * head;

if ( argc == 1) {
printf ("Usage %s <length of list> <position of loop head> \n Give <position of loophead> larger than <length of list> to make a list without loop\n",argv[0]);
exit(1);
}

head = makeloop(atoi(argv[1]),atoi(argv[2]));
looper(head);

return;
}
