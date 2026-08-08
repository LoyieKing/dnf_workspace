#ifndef COSERVER_MISC_H_
#define COSERVER_MISC_H_

#include <string>
#include <vector>

#include "GuildTable.h"
// ---- 池（MemPool<CUdpRecvBuffer>：classSize@0 / count@4 / chunks vector@8）----
class CUdpRecvBuffer;

template<class T>
class MemPool
{
public:
    MemPool(unsigned int count);
    ~MemPool();
    void* alloc();
    void free(void* p);
    void free(void* p, unsigned int size);
    static void* headOfFreeList_;
    int m_classSize;            // +0
    unsigned int m_count;       // +4
    std::vector<void*> m_chunks; // +8
};

// CUdpRecvBuffer 池静态成员（容量 10000）
extern MemPool<CUdpRecvBuffer> m_RecvBufferMemPool_;

// ---- CVersionMgr / CSourceVersionMgr（复用 auction 布局，常量不同）----
class SourceVersion;

class CVersionMgr
{
public:
    CVersionMgr(int _Major, int _Minor, int _Release, int _Build);
    int Major;
    int Minor;
    int Release;
    int Build;
};

class CSourceVersionMgr
{
public:
    CSourceVersionMgr();
    ~CSourceVersionMgr() {}
    void InsertSourceVersion(char* source_file_name, int version);
    class SourceVersion
    {
    public:
        SourceVersion(char* source_file_name, int version);
        SourceVersion(const SourceVersion& other);
        ~SourceVersion();
        SourceVersion& operator=(const SourceVersion& other);
        std::string source_file_name_;
        int version_;
    };
    std::vector<SourceVersion> source_version_list_;
};

// ---- CommonTime：6 字节（y-100/m/d/h/m/w）----
class CommonTime
{
public:
    void SetCurTime();
    char m_time[6];
};

#endif // GUILD_MISC_H_
