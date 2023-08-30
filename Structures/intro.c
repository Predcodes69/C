#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[20];
    int age;
    int roll;
    float marks;
};
int main(){
    //Taking input by having the structure variable as a pointer, using arrow operator
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    // printf("Enter the name of the student: ");
    scanf(" %s", ptr->name);
    // printf("Enter the age of the student: ");
    scanf(" %d", &ptr->age);    //remember to use the & operator as ptr->age is a normal variable
    // printf("Enter the roll number of the student: ");
    scanf(" %d", &ptr->roll);
    // printf("Enter the marks of the student: ");
    scanf(" %f", &ptr->marks);
    printf("The name of the student is: %s\n", (*ptr).name);    //alternative way to print pointer variables with dot operator(dot operator has higher precedence than ampersand operator)
    printf("The age of the student is: %d\n", ptr->age);
    printf("The roll number of the student is: %d\n", ptr->roll);
    printf("The marks of the student is: %0.2f\n", ptr->marks);
    free(ptr);
    ptr = NULL; //avoiding dangling pointer
    //Normal variable input method:
    struct student s;
    // printf("Enter the name of the student: ");
    scanf(" %s", s.name);
    // printf("Enter the age of the student: ");
    scanf(" %d", &s.age);
    // printf("Enter the roll number of the student: ");
    scanf(" %d", &s.roll);
    // printf("Enter the marks of the student: ");
    scanf(" %f", &s.marks);
    printf("Normal input method without a pointer: \n");
    printf("The name of the student is: %s\n", s.name);
    printf("The age of the student is: %d\n", s.age);
    printf("The roll number of the student is: %d\n", s.roll);
    printf("The marks of the student is: %0.2f\n", s.marks);
    return 0;
}