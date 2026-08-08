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

// 其他池实例（原版有这些 MemPool<T> 实例化）
class CBlackUser;
class CCashObject;
class CPacketBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x1804];
};
class CTcpRecvBuffer;
class CTcpSendBuffer;
class STPowerWarGuildInfo;
class STPowerWarCharacInfo;
class CPeer;
class CUser;
class CGuild;

extern MemPool<CBlackUser> m_BlackUserMemPool_;
extern MemPool<CCashObject> m_CashObjectMemPool_;
extern MemPool<CPacketBuffer> m_PacketBufferMemPool_;
extern MemPool<CTcpRecvBuffer> m_TcpRecvBufferMemPool_;
extern MemPool<CTcpSendBuffer> m_TcpSendBufferMemPool_;
extern MemPool<STPowerWarGuildInfo> m_PowerWarGuildInfoMemPool_;
extern MemPool<STPowerWarCharacInfo> m_PowerWarCharacInfoMemPool_;
extern MemPool<CPeer> m_PeerMemPool_;
extern MemPool<CUser> m_UserMemPool_;
extern MemPool<CGuild> m_GuildMemPool_;

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
