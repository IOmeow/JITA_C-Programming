#include <stdio.h>

int main() {
	int grade_1, grade_2, grade_3, grade_4, grade_5, grade_6, grade_7;
    scanf("%d %d %d %d %d %d %d", &grade_1, &grade_2, &grade_3, &grade_4, &grade_5, &grade_6, &grade_7);
    float grade = (grade_1+ grade_2+ grade_3+ grade_4+ grade_5+ grade_6+ grade_7)/7.0;
	char Gr;
    if(grade>=90)Gr='A';
    else if(grade>=80)Gr='B';
    else if(grade>=70)Gr='C';
    else if(grade>=60)Gr='D';
    else Gr='E';

    printf("%c: %.2f\n",Gr,grade);

	return 0;
}