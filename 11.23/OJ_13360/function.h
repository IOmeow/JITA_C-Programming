#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdio.h>

typedef struct Student
{
    char first_name[20];
    char last_name[20];
    char student_id[10];
    int age;
} Student;

void SetFirstName(Student *student, char *f);
void SetLastName(Student *student, char *l);
void SetStudentId(Student *student, char *s);
void SetAge(Student *student, int a);
char *GetFirstName(Student *student);
char *GetLastName(Student *student);
char *GetStudentId(Student *student);
int GetAge(Student student);
void InitStudent(Student *student);
void PrintStudent(Student student);

#endif