#ifndef RELAY_SCRIPT_H_
#define RELAY_SCRIPT_H_

#include <list>
#include <stdio.h>

#include "RelayToken.h"

class Script;

Script* G_Script();

// ScriptRawData：m_key[0x100]@0 / m_val@0x100 / m_err_msg@0x104 / m_valsize@0x108 /
//              m_child_list@0x10c（std::list 8B），总 0x114
class ScriptRawData
{
public:
    ScriptRawData(char* key, char* val, int val_size);
    ~ScriptRawData();
    char* get();
    char* get_data(char* key);
    char* get_data(char* parent_key, char* child_key);
    int get_val_size();
    bool push_child(ScriptRawData* sd);
    bool push_child(char* key, ScriptRawData* sd);
    ScriptRawData* find(char* key);
    ScriptRawData* find(char* parent_key, char* child_key);

private:
    char m_key[0x100];
    char* m_val;
    char* m_err_msg;
    int m_valsize;
    std::list<ScriptRawData*> m_child_list;
};

// Script：data@0 / parent_tag[0x100]@4 / fp@0x104 / Token@0x108 / depth@0x540
class Script
{
public:
    Script();
    ~Script();
    int load(char* path);
    int parse(char* line);
    int parse_channel_script();
    int get_server_section();
    int get_aradauth_section();
    int get_key_val(char* line);
    bool on_parent_tag(char* tag);
    bool on_keyval_tag(char* key, char* value);
    int remove_comment(char* line);
    void destroy_raw_script();
    int fgetln(FILE* fp, char* buf);

private:
    ScriptRawData* data;
    char parent_tag[0x100];
    FILE* fp;
    Token tok;
    int depth;
};

#endif // RELAY_SCRIPT_H_
