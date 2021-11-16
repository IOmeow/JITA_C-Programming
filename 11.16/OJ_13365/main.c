#include <stdio.h>
#include "function.h"

int main()
{
    Time time;

    // Initialize time properties
    scanf("%d", &time.year);
    scanf("%d", &time.month);
    scanf("%d", &time.day);
    scanf("%d", &time.hour);
    scanf("%d", &time.minute);
    scanf("%d", &time.second);
    scanf("%d", &time.timeZone);

    // Print student properties using "get methods"
    int year = GetYear(time);
    int month = GetMonth(time);
    int day = GetDay(time);
    int hour = GetHour(time);
    int minute = GetMinute(time);
    int second = GetSecond(time);
    int timeZone = GetTimeZone(time);

    printf("%04d-%02d-%02d", GetYear(time), GetMonth(time), GetDay(time));
    printf("T%02d:%02d:%02d", GetHour(time), GetMinute(time), GetSecond(time));
    if (timeZone == 0)
        printf("Z\n");
    else if (timeZone > 0)
        printf("+%d\n", timeZone);
    else
        printf("%d\n", timeZone);

    return 0;
}