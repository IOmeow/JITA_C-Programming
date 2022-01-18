#include "./function.h"

char *SetFirstName(Student *student, char *f)
{
    for(int i=0;i<strlen(f);i++){
        student->first_name[i] = f[i];
    }
    student->first_name[strlen(f)]='\0';
}

char *SetLastName(Student *student, char *l)
{
    for(int i=0;i<strlen(l);i++){
        student->last_name[i] = l[i];
    }
    student->last_name[strlen(l)]='\0';
}

char *SetStudentId(Student *student, char *s)
{
    for(int i=0;i<strlen(s);i++){
        student->student_id[i] = s[i];
    }
    student->student_id[strlen(s)]='\0';
}

int SetAge(Student *student, int a)
{
    student->age = a;
}

char *GetFirstName(Student *student)
{
    return student->first_name;
}

char *GetLastName(Student *student)
{
    return student->last_name;
}

char *GetStudentId(Student *student)
{
    return student->student_id;
}

int GetAge(Student student)
{
    return student.age;
}