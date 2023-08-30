#include <stdio.h>
#include <stdlib.h>
struct point{
    int x, y;
};
//Working with pointer structure variables
struct point* scale(struct point *p, int a, int b){
    p->x = a;
    p->y = b + 5;
    p->x*=5;
    p->y*=10;
    return p;
}
void display(struct point* s){
    printf(" %d %d\n", s->x, s->y);
}
int main(){
    struct point *p1, *p2;
    p1 = (struct point*)malloc(sizeof(struct point));
    p1 = (struct point*)malloc(sizeof(struct point));
    p1 = scale(p1, 5, 3);
    p2 = scale(p2, 10, 6);
    display(p1);
    display(p2);    //not display(&p2); since pointer variable stores address by default
    p1 = NULL;
    p2 = NULL;      //preventing dangling pointers.
}