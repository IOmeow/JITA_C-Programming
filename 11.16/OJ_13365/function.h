#ifndef _FUNCTION_H_
#define _FUNCTION_H_

typedef struct Time //struct定義結構 typedef取別名
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int timeZone;
} Time; //別名

int GetYear(Time time);
int GetMonth(Time time);
int GetDay(Time time);
int GetHour(Time time);
int GetMinute(Time time);
int GetSecond(Time time);
int GetTimeZone(Time time);

#endif