#include "./function.h"

void SetFirstName(Student *student, char *f)
{
    // TODO
    f = student->first_name;
}

void SetLastName(Student *student, char *l)
{
    // TODO
    l = student->last_name;
}

void SetStudentId(Student *student, char *s)
{
    // TODO
    s = student->student_id;
}

void SetAge(Student *student, int a)
{
    // TODO
    a = student->age;
}

char *GetFirstName(Student *student)
{
    // TODO
    return student->first_name;
}

char *GetLastName(Student *student)
{
    // TODO
    return student->last_name;
}

char *GetStudentId(Student *student)
{
    // TODO
    return student->student_id;
}

int GetAge(Student student)
{
    // TODO
    return student.age;
}

void InitStudent(Student *student)
{
    scanf("%s", &student->first_name);

    scanf("%s", &student->last_name);

    scanf("%s", &student->student_id);

    scanf("%d", &student->age);
}

void PrintStudent(Student student)
{
    printf("%s, %s %s, %d\n", student.student_id, student.first_name, student.last_name, student.age);
}