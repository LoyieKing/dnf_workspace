//
// Created by Loyie King on 2024/3/6.
//

#include "ConfigFileReader.h"

#include <cstdio>
#include <cstring>

void CConfigFileReader::add_tag(const char *tag) {
    this->tags.push_back(std::string(tag));
}

int CConfigFileReader::CheckCommand(char *cmd) {
    static char COMMENT_TOKEN[] = "//";

    if (cmd[0] == '\0') {
        return 1;
    } else if (cmd[0] == '[' || cmd[0] == '\r' || cmd[0] == '\n') {
        return 1;
    } else {
        for (int i = 0; i < 0x3fe; ++i) {
            int comment_match = 0;
            for (int j = 0; j < (sizeof COMMENT_TOKEN - 1); ++j) {
                if (cmd[i + j] == COMMENT_TOKEN[j]) {
                    comment_match += 1;
                }
            }
            if (comment_match == (sizeof COMMENT_TOKEN - 1)) {
                return 1;
            }
        }
        return 0;
    }

    return 0;
}

const char *CConfigFileReader::get_value(const char *_key) {
    std::string key(_key);
    std::map<std::string, std::string>::iterator result = this->configs.find(key);
    if (result != this->configs.end()) {
        return result->second.c_str();
    }
    return NULL;
}

int CConfigFileReader::GetLine(FILE *file, char *output) {
    memset(output, 0, 0x400);
    int pos = 0;
    while (true) {
        if (0x3ff < pos) {
            return 1;
        }
        int c = fgetc(file);
        int eof = feof(file);
        if (eof) break;
        output[pos] = (char)c;
        if (output[pos] == '\n') {
            output[pos] = '\0';
            if (pos > 0 && output[pos - 1] == '\r') {
                output[pos - 1] = '\0';
                return 1;
            }
            return 1;
        }
        pos = pos + 1;
    }
    output[pos] = '\0';
    return 0;
}

int CConfigFileReader::Parse(char *data) {
    char *key, *value;

    // Using strtok to get the key and value
    key = strtok(data, "=");
    value = strtok(NULL, "=");

    Trim(key);
    Trim(value);

    for (std::vector<std::string>::iterator config = tags.begin(); config != tags.end(); ++config) {
        // If the key is found in the map, we update it and return
        if (*config == key) {
            configs.insert(std::make_pair(std::string(key), std::string(value)));
            return 1;
        }
    }

    // 来自反编译/DWARF 的推断：找不到匹配 tag 时，只打印警告，不插入 configs
    printf("cfg file warning! cannot find tag (%s)!\n", key);
    return 1;
}

int CConfigFileReader::ReadConfigFile(char const *configFilePath) {
    char buffer[1024];

    FILE *file = fopen(configFilePath, "rb");
    if (file != NULL) {
        bool state;
        do {
            state = GetLine(file, buffer);
            if (state != 1) {
                fclose(file);
                return 1;
            }
            state = CheckCommand(buffer);
            if (state != 1) {
                state = Parse(buffer);
            }
        } while (state == 1);
    }
    return 0;
}

char *CConfigFileReader::Trim(char *str) {
    size_t len = strlen(str);
    size_t start = 0;
    size_t end;

    // 从字符串开始处往后找，直到找到不小于'!'的字符
    // 如果整个字符串都小于'!', 则返回空字符串
    for (size_t i = 0; i < len && str[i] < '!'; ++i) {
        start = i + 1;
    }

    end = len;
    // 从字符串结束处往前找，直到找到不小于'!'的字符
    // 如果整个字符串都小于'!', 则返回空字符串
    for (size_t i = len - 1; start < end && str[i] < '!'; --i) {
        end = i;
    }

    // 创建结果字符串
    char tmp_buffer[1024];
    tmp_buffer[end - start] = '\0';                // 设置结束字符
    memcpy(tmp_buffer, str + start, end - start);  // 拷贝子串到结果字符串
    strcpy(str, tmp_buffer);                       // 克隆结果字符串到输入字符串

    return str;  // 返回结果字符串
}
