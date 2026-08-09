// df_coserver_r — MemPool/CDNFUserInOutCounter/CSourceVersionMgr/CKillUSRConfig/
//                CommonTime/CSystemTime
#include <stdio.h>
#include <utility>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

#include "CoserverMisc.h"
#include "CoserverUdp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

// ---- MemPool<CUdpRecvBuffer> ----
template<class T>
void* MemPool<T>::headOfFreeList_ = 0;

MemPool<CUdpRecvBuffer> m_RecvBufferMemPool_(10000);

template<class T>
MemPool<T>::MemPool(unsigned int count)
{
    m_classSize = 0x204;
    m_count = count;
}

template<class T>
MemPool<T>::~MemPool()
{
    if (!m_chunks.empty())
    {
        for (std::vector<void*>::iterator it = m_chunks.begin(); it != m_chunks.end(); ++it)
        {
            ::operator delete(*it);
        }
        m_chunks.clear();
    }
}

template<class T>
void* MemPool<T>::alloc()
{
    void* result;
    if (m_classSize == 0x204)
    {
        if (headOfFreeList_ == 0)
        {
            void* block = ::operator new(m_classSize * m_count);
            for (unsigned int i = 0; i < m_count - 1U; i++)
            {
                *(void**)((int)block + i * 0x204 + 0x200) = (void*)((i + 1) * 0x204 + (int)block);
            }
            *(void**)((int)block + (m_count - 1) * 0x204 + 0x200) = 0;
            headOfFreeList_ = (void*)((int)block + 0x204);
            result = block;
            m_chunks.push_back(std::move(block));
            DNF_LOG_SCOPE_LINE(0x7d, "./log/Mempool", "class size(%d) cnt(%d)", m_classSize, m_count * (int)m_chunks.size());
        }
        else
        {
            result = headOfFreeList_;
            headOfFreeList_ = *(void**)((int)headOfFreeList_ + 0x200);
        }
    }
    else
    {
        result = ::operator new(0x204);
    }
    return result;
}

template<class T>
void MemPool<T>::free(void* p)
{
    if (p != 0)
    {
        *(void**)((int)p + 0x200) = headOfFreeList_;
        headOfFreeList_ = p;
    }
}

template<class T>
void MemPool<T>::free(void* p, unsigned int size)
{
    if (p != 0)
    {
        if (m_classSize == (int)size)
        {
            *(void**)((int)p + 0x200) = headOfFreeList_;
            headOfFreeList_ = p;
        }
        else
        {
            ::operator delete(p);
        }
    }
}

void* CUdpRecvBuffer::operator new(unsigned int size)
{
    return m_RecvBufferMemPool_.alloc();
}

void CUdpRecvBuffer::operator delete(void* p)
{
    m_RecvBufferMemPool_.free(p);
}

void CUdpRecvBuffer::operator delete(void* p, unsigned int size)
{
    m_RecvBufferMemPool_.free(p, size);
}

// ---- CDNFUserInOutCounter ----
char USER_IN_OUT_WRITE_LOG_TIME = 0x3c;

CDNFUserInOutCounter::CDNFUserInOutCounter()
{
    Reset();
}

CDNFUserInOutCounter::~CDNFUserInOutCounter()
{
    Reset();
}

void CDNFUserInOutCounter::Reset()
{
    memset(this, 0, 0x1926c);
    m_tick = 0;
}

void CDNFUserInOutCounter::WriteLog()
{
    char buf[4000];
    memset(buf, 0, sizeof(buf));
    for (int g = 0; g < 10; g++)
    {
        for (int c = 0; c < 0x40; c++)
        {
            if (*(int*)(m_counters + (g * 0xff + c) * 8) != 0 ||
                *(int*)(m_counters + ((g * 0xff + c) * 2 + 1) * 4) != 0)
            {
                sprintf(buf, "%s G(%d)Ch(%d)In(%d)Out(%d) ", buf, g, c,
                        *(int*)(m_counters + (g * 0xff + c) * 8),
                        *(int*)(m_counters + ((g * 0xff + c) * 2 + 1) * 4));
            }
        }
        DNF_LOG_SCOPE_LINE(0x24, "./log/UserCounter", "%s", buf);
        memset(buf, 0, 4000);
    }
}

void CDNFUserInOutCounter::ProcessWrite()
{
    m_tick = (char)(m_tick + 1);
    if ((unsigned char)USER_IN_OUT_WRITE_LOG_TIME < (unsigned char)m_tick)
    {
        WriteLog();
        Reset();
    }
}

void CDNFUserInOutCounter::IncUserIn(int group, int index)
{
    if (group < 0x65 && index < 0xff)
    {
        *(int*)(m_counters + (group * 0xff + index) * 8) =
            *(int*)(m_counters + (group * 0xff + index) * 8) + 1;
    }
}

void CDNFUserInOutCounter::IncUserOut(int group, int index)
{
    if (group < 0x65 && index < 0xff)
    {
        *(int*)(m_counters + ((group * 0xff + index) * 2 + 1) * 4) =
            *(int*)(m_counters + ((group * 0xff + index) * 2 + 1) * 4) + 1;
    }
}

// ---- CVersionMgr / CSourceVersionMgr ----
CVersionMgr::CVersionMgr(int _Major, int _Minor, int _Release, int _Build)
{
    Major = _Major;
    Minor = _Minor;
    Release = _Release;
    Build = _Build;
}

CSourceVersionMgr::CSourceVersionMgr()
    : source_version_list_()
{
    InsertSourceVersion(".svn/all-wcprops", 0x2c00);
    InsertSourceVersion("DNFServerCommon/.svn/all-wcprops", 0x2c01);
}

void CSourceVersionMgr::InsertSourceVersion(char* source_file_name, int version)
{
    source_version_list_.push_back(SourceVersion(source_file_name, version));
}

CSourceVersionMgr::SourceVersion::SourceVersion(char* source_file_name, int version)
    : source_file_name_()
{
    source_file_name_ = source_file_name;
    version_ = version;
}

CSourceVersionMgr::SourceVersion::SourceVersion(const SourceVersion& other)
    : source_file_name_(other.source_file_name_)
{
    version_ = other.version_;
}

CSourceVersionMgr::SourceVersion::~SourceVersion()
{
}

CSourceVersionMgr::SourceVersion& CSourceVersionMgr::SourceVersion::operator=(
    const SourceVersion& other)
{
    source_file_name_ = other.source_file_name_;
    version_ = other.version_;
    return *this;
}

// ---- ST_KillUSRConfig ----
ST_KillUSRConfig::ST_KillUSRConfig()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0;
    m_field3 = 0;
}

// ---- CKillUSRConfig ----
CKillUSRConfig::CKillUSRConfig()
{
}

CKillUSRConfig::~CKillUSRConfig()
{
    Clear_Table();
}

void CKillUSRConfig::Clear_Table()
{
    if (!m_infos.empty())
    {
        for (std::vector<ST_KillUSRConfig*>::iterator it = m_infos.begin(); it != m_infos.end();
             ++it)
        {
            ::operator delete(*it);
        }
        m_infos.clear();
    }
}

int CKillUSRConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tok0 = 0;
    char* tok1 = 0;
    char* tok2 = 0;
    char* tok3 = 0;
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 4);
    if (n == 4)
    {
        ST_KillUSRConfig* p = new (std::nothrow) ST_KillUSRConfig;
        if (p != 0)
        {
            p->m_field0 = atoi(tok0);
            p->m_field1 = atoi(tok1);
            p->m_field2 = atoi(tok2);
            p->m_field3 = atoi(tok3);
            m_infos.push_back(p);
            return 1;
        }
    }
    return 0;
}

void CKillUSRConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 100);
    if (0 < rc && rc < 0x65)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0x5b, "./log/TableError", "Kill USR Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CKillUSRConfig::Load_Setup_Table() Exception break!");
}

std::vector<ST_KillUSRConfig*>* CKillUSRConfig::GetInfo() const
{
    return const_cast<std::vector<ST_KillUSRConfig*>*>(&m_infos);
}

// ---- CommonTime ----
void CommonTime::SetCurTime()
{
    time_t t = time(0);
    tm* pt = localtime(&t);
    m_time[0] = (char)((char)pt->tm_year - 100);
    m_time[1] = (char)((char)pt->tm_mon + 1);
    m_time[2] = (char)pt->tm_mday;
    m_time[3] = (char)pt->tm_hour;
    m_time[4] = (char)pt->tm_min;
    m_time[5] = (char)pt->tm_wday;
}

// ---- CSystemTime / CSystemTimeHandler ----
CSystemTime::CSystemTime()
{
    gettimeofday((struct timeval*)((char*)this + 8), 0);
    *(unsigned int*)((char*)this + 0x10) = *(unsigned int*)((char*)this + 8);
    *(int*)((char*)this + 4) = *(int*)((char*)this + 0xc) / 1000;
}

CSystemTime::~CSystemTime()
{
}

CSystemTimeHandler::CSystemTimeHandler()
{
}

CSystemTimeHandler::~CSystemTimeHandler()
{
}

CSystemTimeHandler* CSystemTimeHandlerInstance()
{
    static CSystemTimeHandler instance;
    return &instance;
}
