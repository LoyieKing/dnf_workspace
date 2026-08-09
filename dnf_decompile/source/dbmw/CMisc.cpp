#include "ManagerTypes.h"
#include "ServerXmlDbmw.h"
#include "ManagerApp.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <unistd.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <sys/resource.h>
#include <signal.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/times.h>

#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

int getErrno();

// ---- packet 构造（出库化）----
int get_day_interval(struct tm* a, struct tm* b);

Packet_Monitor_UDP_HeartBeat::Packet_Monitor_UDP_HeartBeat()
    : PacketHeader(0x3ec, 0xb)
{
    m_fieldA = 0xff;
}

Packet_Notice_Guild_Mail_Arrived::Packet_Notice_Guild_Mail_Arrived()
    : PacketHeader(0x415, 0x33)
{
    memset((char*)this + 0xb, 0, 0x28);
}

int get_awardItem_using_interval()
{
    time_t t = time(0);
    struct tm* now = localtime(&t);
    struct tm base;
    memset(&base, 0, 0x2c);
    base.tm_year = 106;
    base.tm_mon = 6;
    base.tm_mday = 1;
    now->tm_mon += 1;
    if (now->tm_mon > 0xb)
    {
        now->tm_mon = 0;
        now->tm_year += 1;
    }
    now->tm_hour = 0;
    now->tm_min = 0;
    now->tm_sec = 0;
    return get_day_interval(&base, now);
}

int get_day_interval(struct tm* a, struct tm* b)
{
    time_t ta = mktime(a);
    time_t tb = mktime(b);
    return (int)((tb - ta) / 86400);
}

char isDayTimeOver(unsigned int timestamp, unsigned int days)
{
    struct tm t;
    time_t now;
    time(&now);
    struct tm* p = localtime(&now);
    t = *p;
    t.tm_mday -= days;
    time_t limit = mktime(&t);
    return (int)timestamp < (int)limit;
}

// ---- nothrow new/delete（原版来自 libstdc++ 弱符号）----
void* operator new(std::size_t size, const std::nothrow_t&) throw()
{
    void* p = 0;
    try
    {
        p = ::operator new(size);
    }
    catch (...)
    {
    }
    return p;
}

void operator delete(void* ptr, const std::nothrow_t&) throw()
{
    if (ptr)
        free(ptr);
}

// ---- packet 构造（出库化）----
Packet_InnerPakcet_Login::Packet_InnerPakcet_Login() : PacketHeader(0xfa0, 0xa) {}
Packet_InnerPakcet_Logout::Packet_InnerPakcet_Logout() : PacketHeader(0xfa1, 0xa) {}
Packet_Monitor_Event_Start::Packet_Monitor_Event_Start() : PacketHeader(0x44f, 0x12) {}
Packet_Monitor_Event_End::Packet_Monitor_Event_End() : PacketHeader(0x450, 0xe) {}
Packet_Monitor_Manager_Connect_OK::Packet_Monitor_Manager_Connect_OK() : PacketHeader(0x578, 0xa) {}
Packet_Web_Notice_Single::Packet_Web_Notice_Single() : PacketHeader(0x9e0, 0x10a) {}
Packet_Web_Notice_InGame_Advertisement::Packet_Web_Notice_InGame_Advertisement() : PacketHeader(0x27e2, 0xa) {}
Packet_Web_Prohibit_User_Connect::Packet_Web_Prohibit_User_Connect() : PacketHeader(0x4c8, 0x13)
{
    *(int*)((char*)this + 0xa) = 0;
    *(unsigned short*)((char*)this + 0xf) = 0;
    *(char*)((char*)this + 0x11) = 0;
    *(char*)((char*)this + 0x12) = 0;
}

ST_KillUSRConfig::ST_KillUSRConfig()
{
    *(int*)((char*)this + 0) = 0;
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0xc) = 0;
}

void CSourceVersionMgr::InsertSourceVersion(char* name, int version)
{
    m_versions.push_back(SourceVersion(name, version));
}

CSourceVersionMgr::SourceVersion::SourceVersion(char* name, int version)
{
    m_name = name;
    m_version = version;
}

int getErrno()
{
    return *__errno_location();
}

int parse_string(std::vector<std::string>& v, std::string& s, char c)
{
    int len = s.size();
    int pos = 0;
    std::string tok;
    while (pos < len)
    {
        int found = s.find(c, pos);
        if (found == (int)std::string::npos)
        {
            tok = s.substr(pos, len - pos);
            if (!tok.empty())
                v.push_back(tok);
            break;
        }
        tok = s.substr(pos, found - pos);
        if (!tok.empty())
            v.push_back(tok);
        pos = found + 1;
    }
    return 1;
}

CDNFException::CDNFException(const std::string& msg) : m_msg(msg) {}
CDNFException::~CDNFException() throw() {}

const char* CDNFException::what() const throw()
{
    CMyFileLog log("what", 0x1a);
    log("./log/Except", "%s", m_msg.c_str());
    return m_msg.c_str();
}

unsigned long long TIME_to_ulonglong_date(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[0] * 10000 + p[1] * 100 + p[2]);
}

unsigned long long TIME_to_ulonglong_time(void* t)
{
    unsigned int* p = (unsigned int*)t;
    return (unsigned long long)(p[3] * 10000 + p[4] * 100 + p[5]);
}

unsigned long long TIME_to_ulonglong(void* t)
{
    return 0;
}

unsigned long long TIME_to_ulonglong_datetime(void* t)
{
    return 0;
}

template class std::allocator<std::string>;
template class std::allocator<ST_KillUSRConfig*>;
