#include "./function.h"

int GetYear(Time time)
{
    return time.year;
}

int GetMonth(Time time)
{
    return time.month;
}

int GetDay(Time time)
{
    return time.day;
}

int GetHour(Time time)
{
    return time.hour;
}

int GetMinute(Time time)
{
    return time.minute;
}

int GetSecond(Time time)
{
    return time.second;
}

int GetTimeZone(Time time)
{
    return time.timeZone;
}