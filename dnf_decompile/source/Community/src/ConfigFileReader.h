//
// Created by Loyie King on 2024/3/6.
//
#pragma once
#include "ReverseEngineerLib.h"
#include "map"
#include "string"
#include "vector"

class CConfigFileReader {
private:
    std::map<std::string, std::string> configs;
    std::vector<std::string> tags;

public:
    void add_tag(const char *tag);

    int CheckCommand(char *cmd);

    const char *get_value(const char *key);

    int GetLine(FILE *file, char *output);

    int Parse(char *data);

    int ReadConfigFile(char const *configFilePath);

    char *Trim(char *str);
};

TEST_CLASS_SIZE(CConfigFileReader, 36)