#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int age;
    int roll;
    float marks;
};
struct charset{
    char c;
    int i;
};
void display(char name[], int age, int roll, float marks){
    printf("The name of the student is: %s\n", name);
    printf("The age of the student is: %d\n", age);
    printf("The roll number of the student is: %d\n", roll);
    printf("The marks of the student is: %0.2f\n", marks);
}
void CallByValue(struct student s){
    printf("The name of the student is: %s\n", s.name);
    printf("The age of the student is: %d\n", s.age);
    printf("The roll number of the student is: %d\n", s.roll);
    printf("The marks of the student is: %0.2f\n", s.marks);
}
void CallByAddress(struct student* s){
    printf("The name of the student is: %s\n", s->name);
    printf("The age of the student is: %d\n", s->age);
    printf("The roll number of the student is: %d\n", s->roll);
    printf("The marks of the student is: %0.2f\n", s->marks);
}
void input(char* c,  int* i){
    scanf(" %c %d", c, i);
}
int main(){
    struct student s;
    struct charset chr;
    scanf(" %s", s.name);
    scanf(" %d", &s.age);
    scanf(" %d", &s.roll);
    scanf(" %f", &s.marks);
    display(s.name, s.age, s.roll, s.marks);
    printf("Call by Value: \n");
    CallByValue(s);
    printf("Call by Address: \n");
    CallByAddress(&s);  //Better in case of large data, since copying large data can be inefficient.
    input(&chr.c, &chr.i);
    printf(" %c %d", chr.c, chr.i);
}