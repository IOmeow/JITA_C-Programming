#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char first_name[20];
    char last_name[20];
    char student_id[10];
    int age;
} Student;

char *SetFirstName(Student *student, char *f);
char *SetLastName(Student *student, char *l);
char *SetStudentId(Student *student, char *s);
int SetAge(Student *student, int a);
char *GetFirstName(Student *student);
char *GetLastName(Student *student);
char *GetStudentId(Student *student);
int GetAge(Student student);

#endif