
#ifndef database
#define database
#include<string.h>
#include<stdio.h>
#include <stdlib.h>
extern long MAXSIZE;
extern long num_students;
typedef struct BASIC_INFO
{
    char *password;
    char *name;
    char gender;
    float grade;
    int id;
    int age;
} student;

student *arr;

typedef struct admin
{
    char *pass;
} adminn;
#endif // database
