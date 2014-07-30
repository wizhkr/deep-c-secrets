#include <stdio.h>
#include <stdlib.h>


#define N 10

typedef struct st {     int data ;
			struct st * next; }Node;

Node * append(Node * last, int x) {

Node * newlast =(Node *) malloc(sizeof (Node));
newlast->data = x;
newlast->next = NULL;

last->next = newlast;

return newlast;

}
int compar(Node * a, Node * b) {
if((a->data) > (b->data))
return 1;

if((a->data) ==(b->data))
return 0;
return -10;

}

void main () {
int i ;
int a[] = {1,3,1,2,7,5,65,4,44,3};
Node * start = malloc(sizeof(Node));
Node * end = start;
for (i = 0; i < N; ++i)
{
end = append(end, a[i]);
if (end != start)
printf ("unequal\n");
}

qsort(start,10, sizeof(Node),&compar);
for (i = 0; i < N; ++i)
printf ("%d,",(start[i]).data);


}



