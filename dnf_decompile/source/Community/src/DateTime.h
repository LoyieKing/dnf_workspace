//
// Created by Loyie King on 2024/3/10.
//
#pragma once

#include "ReverseEngineerLib.h"

class DateTime {
public:
    short year;
    char month;
    char day;
    char hour;
    char min;
    char sec;

    DateTime();

    bool DiffDay(DateTime &another);
};

TEST_CLASS_SIZE(DateTime, 8);