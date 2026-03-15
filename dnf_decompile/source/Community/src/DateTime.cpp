//
// Created by Loyie King on 2024/3/10.
//

#include "DateTime.h"

#include <cstring>
#include <ctime>

DateTime::DateTime() {
    tm *pt;
    tm time;
    memset(&time, 0, sizeof(time));
    time_t time_size[4];
    time_size[0] = ::time(NULL);
    pt = localtime_r(time_size, &time);
    this->year = (short)(pt->tm_year + 1900);
    this->month = pt->tm_mon + 1;
    this->day = pt->tm_mday;
    this->hour = pt->tm_hour;
    this->min = pt->tm_min;
    this->sec = pt->tm_sec;
}

bool DateTime::DiffDay(DateTime &another) {
    return this->day != another.day;
}
