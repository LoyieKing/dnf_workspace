//
// Created by Loyie King on 2024/3/10.
//

#include "DateTime.h"

#include <iostream>

#include "DNFFunctionLib.h"
#include "CommonConstants.h"

#include <cstring>
#include <ctime>




// 反编译：恒返回 0（占位实现）。原始 timeGetTime 位于独立 TU（DateTime.cpp），
// 生成 _GLOBAL__I__Z11timeGetTimev 初始化桩。
unsigned int timeGetTime() {
    return 0;
}

// 原始：位于 DateTime.cpp TU（timeGetTime 之后、SDC_Rand 之前），staticSeed 初值 0x05397fb1。
unsigned int Rand_r(unsigned int* seed) {
    static unsigned int staticSeed = 0x05397fb1;
    if (seed == NULL) {
        staticSeed += timeGetTime();
        return Rand_r(&staticSeed);
    }
    unsigned int x = *seed;
    x = x * 0x41c64e6d + 0x3039;
    unsigned int result = ((x >> 16) & 0x7ff) << 10;
    x = x * 0x41c64e6d + 0x3039;
    result = (result ^ (x >> 16 & 0x3ff)) << 10;
    x = x * 0x41c64e6d + 0x3039;
    result ^= (x >> 16 & 0x3ff);
    *seed = x;
    return result;
}

DateTime::DateTime() {
    tm *pt;
    tm time;
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
