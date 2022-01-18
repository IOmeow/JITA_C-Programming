#include <stdio.h>
#include "function.h"

void InitStudent(Student *_student, char *_firstName, char *_lastName, char *_studentID, int _age);
void PrintStudent(Student *student);

int main()
{
    char firstName[20];
    char lastName[20];
    char studentID[10];
    int age;

    scanf("%s", firstName);
    scanf("%s", lastName);
    scanf("%s", studentID);
    scanf("%d", &age);

    // 1. Init student properties using "set methods"
    // 2. Print student properties using "get methods"
    Student student;
    InitStudent(&student, firstName, lastName, studentID, age);
    PrintStudent(&student);

    return 0;
}

void InitStudent(Student *_student, char *_firstName, char *_lastName, char *_studentID, int _age)
{
    SetFirstName(_student, _firstName);
    SetLastName(_student, _lastName);
    SetStudentId(_student, _studentID);
    SetAge(_student, _age);
}

void PrintStudent(Student *_student)
{
    printf("%s, ", GetStudentId(_student));
    printf("%s %s, ", GetFirstName(_student), GetLastName(_student));
    printf("%d\n", GetAge(*_student));
}