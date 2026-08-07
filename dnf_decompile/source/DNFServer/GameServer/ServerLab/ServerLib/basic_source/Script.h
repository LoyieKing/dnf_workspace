#ifndef NSL_SCRIPT_H_
#define NSL_SCRIPT_H_

#include <stdio.h>
#include <string>
#include <vector>

#include "ThreadLock.h"
#include "Token.h"
#include "GlobalInstance.h"

namespace nsl {

class Script
{
public:
    Script();
    ~Script();
    bool load(char* filename);
    bool get_sections();
    inline char* findCharValue(int parentIndex, int childIndex)
    {
        TScopedLock<TThreadLock<ThreadLock_linux> > slock(mLoadScriptLock);
        return (char*)mChildValues[parentIndex][childIndex].c_str();
    }
    inline int findIntValue(int parentIndex, int childIndex)
    {
        TScopedLock<TThreadLock<ThreadLock_linux> > slock(mLoadScriptLock);
        return atoi(mChildValues[parentIndex][childIndex].c_str());
    }

    bool fgetln(FILE* fp, char* buf);
    bool parse(char* line);
    bool remove_comment(char* line);
    bool get_key_val(char* line);
    void Clear();

private:
    FILE* fp;
    Token tok;
    int depth;
    ThreadLock mLoadScriptLock;
    std::vector<std::string> mParentNames;
    std::vector<std::vector<std::string> > mChildNames;
    std::vector<std::vector<std::string> > mChildValues;
};

inline Script* G_Script()
{
    return GlobalInstance<Script>::inst_ptr();
}

} // namespace nsl

#endif // NSL_SCRIPT_H_
