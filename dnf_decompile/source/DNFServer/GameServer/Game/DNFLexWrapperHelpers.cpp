#include "DNFLexWrapper.h"

#include <cstring>

#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace
{
std::vector<std::string> g_tokens;
std::size_t g_nextToken = 0;

bool nextToken(std::string& token)
{
    if (g_nextToken >= g_tokens.size())
        return false;
    token = g_tokens[g_nextToken++];
    return true;
}

bool parseIntToken(int& value)
{
    std::string token;
    if (!nextToken(token)) return false;
    char* end = 0;
    long parsed = std::strtol(token.c_str(), &end, 0);
    if (end == token.c_str() || *end != '\0') return false;
    value = static_cast<int>(parsed);
    return true;
}

bool parseFloatToken(float& value)
{
    std::string token;
    if (!nextToken(token)) return false;
    char* end = 0;
    float parsed = static_cast<float>(std::strtod(token.c_str(), &end));
    if (end == token.c_str() || *end != '\0') return false;
    value = parsed;
    return true;
}
}

bool loadRDARScriptFile(const char* directory, const char* path)
{
    g_tokens.clear();
    g_nextToken = 0;
    if (!path) return false;
    std::string fileName = (directory && *directory)
        ? std::string(directory) + "/" + path : path;
    std::ifstream input(fileName.c_str());
    if (!input) return false;
    std::string line;
    while (std::getline(input, line))
    {
        std::istringstream words(line);
        std::string token;
        while (words >> token) g_tokens.push_back(token);
    }
    return true;
}

void unloadRDARScriptFile()
{
    g_tokens.clear();
    g_nextToken = 0;
}

bool ScanType(std::string& token, bool consume)
{
    if (g_nextToken >= g_tokens.size()) return false;
    token = g_tokens[g_nextToken];
    if (consume) ++g_nextToken;
    return true;
}

bool ScanInt(int* value)
{
    return value && parseIntToken(*value);
}

int ScanInt(bool* ok)
{
    int value = 0;
    bool success = parseIntToken(value);
    if (ok) *ok = success;
    return value;
}

float ScanFloat(float* value)
{
    if (!value) return 0.0f;
    return parseFloatToken(*value) ? *value : 0.0f;
}

float ScanFloat(bool* ok)
{
    float value = 0.0f;
    bool success = parseFloatToken(value);
    if (ok) *ok = success;
    return value;
}

bool ScanStr(std::string* value)
{
    return value && nextToken(*value);
}

void GetEscapeString(MySQL* db, const char* src, char* dst)
{
    (void)db;
    if (dst) std::strcpy(dst, src ? src : "");
}
