// df_statics_r — MemPool/CSourceVersionMgr/CKillUSRConfig/CommonTime
#include <stdio.h>
#include <utility>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

#include "GuildMisc.h"
#include "GuildDomain.h"
#include "GuildUdp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

// ---- MemPool<CUdpRecvBuffer> ----
template<class T>
void* MemPool<T>::headOfFreeList_ = 0;

MemPool<CUdpRecvBuffer> m_RecvBufferMemPool_(10000);
MemPool<CBlackUser> m_BlackUserMemPool_(100000);
MemPool<CCashObject> m_CashObjectMemPool_(5000);
MemPool<CPacketBuffer> m_PacketBufferMemPool_(1000);
MemPool<CTcpRecvBuffer> m_TcpRecvBufferMemPool_(1000);
MemPool<CTcpSendBuffer> m_TcpSendBufferMemPool_(1000);
MemPool<STPowerWarGuildInfo> m_PowerWarGuildInfoMemPool_(1000);
MemPool<STPowerWarCharacInfo> m_PowerWarCharacInfoMemPool_(1000);
MemPool<CPeer> m_PeerMemPool_(1000);
MemPool<CUser> m_UserMemPool_(28000);
MemPool<CGuild> m_GuildMemPool_(10000);

template<class T>
MemPool<T>::MemPool(unsigned int count)
{
    m_classSize = (int)sizeof(T);
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
    if (m_classSize == (int)sizeof(T))
    {
        if (headOfFreeList_ == 0)
        {
            void* block = ::operator new(m_classSize * m_count);
            for (unsigned int i = 0; i < m_count - 1U; i++)
            {
                *(void**)((char*)block + i * m_classSize + (m_classSize - 4)) =
                    (void*)((i + 1) * m_classSize + (int)block);
            }
            *(void**)((char*)block + (m_count - 1) * m_classSize + (m_classSize - 4)) = 0;
            headOfFreeList_ = (void*)((char*)block + m_classSize);
            result = block;
            m_chunks.push_back(std::move(block));
            CMyFileLog log("alloc", 0x7d);
            log("./log/Mempool", "class size(%d) cnt(%d)", m_classSize,
                m_count * (int)m_chunks.size());
        }
        else
        {
            result = headOfFreeList_;
            headOfFreeList_ = *(void**)((char*)headOfFreeList_ + (m_classSize - 4));
        }
    }
    else
    {
        result = ::operator new(m_classSize);
    }
    return result;
}

template<class T>
void MemPool<T>::free(void* p)
{
    if (p != 0)
    {
        *(void**)((char*)p + (m_classSize - 4)) = headOfFreeList_;
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
            *(void**)((char*)p + (m_classSize - 4)) = headOfFreeList_;
            headOfFreeList_ = p;
        }
        else
        {
            ::operator delete(p);
        }
    }
}

// ---- 各类型 operator new/delete（MemPool 池）----
void* CBlackUser::operator new(unsigned int size) { return m_BlackUserMemPool_.alloc(); }
void CBlackUser::operator delete(void* p) { m_BlackUserMemPool_.free(p); }
void CBlackUser::operator delete(void* p, unsigned int size) { m_BlackUserMemPool_.free(p, size); }

void* CCashObject::operator new(unsigned int size) { return m_CashObjectMemPool_.alloc(); }
void CCashObject::operator delete(void* p) { m_CashObjectMemPool_.free(p); }
void CCashObject::operator delete(void* p, unsigned int size) { m_CashObjectMemPool_.free(p, size); }

void* CPacketBuffer::operator new(unsigned int size) { return m_PacketBufferMemPool_.alloc(); }
void CPacketBuffer::operator delete(void* p) { m_PacketBufferMemPool_.free(p); }
void CPacketBuffer::operator delete(void* p, unsigned int size) { m_PacketBufferMemPool_.free(p, size); }

void* CTcpRecvBuffer::operator new(unsigned int size) { return m_TcpRecvBufferMemPool_.alloc(); }
void CTcpRecvBuffer::operator delete(void* p) { m_TcpRecvBufferMemPool_.free(p); }
void CTcpRecvBuffer::operator delete(void* p, unsigned int size) { m_TcpRecvBufferMemPool_.free(p, size); }

void* CTcpSendBuffer::operator new(unsigned int size) { return m_TcpSendBufferMemPool_.alloc(); }
void CTcpSendBuffer::operator delete(void* p) { m_TcpSendBufferMemPool_.free(p); }
void CTcpSendBuffer::operator delete(void* p, unsigned int size) { m_TcpSendBufferMemPool_.free(p, size); }

void* STPowerWarGuildInfo::operator new(unsigned int size) { return m_PowerWarGuildInfoMemPool_.alloc(); }
void STPowerWarGuildInfo::operator delete(void* p) { m_PowerWarGuildInfoMemPool_.free(p); }
void STPowerWarGuildInfo::operator delete(void* p, unsigned int size) { m_PowerWarGuildInfoMemPool_.free(p, size); }

void* STPowerWarCharacInfo::operator new(unsigned int size) { return m_PowerWarCharacInfoMemPool_.alloc(); }
void STPowerWarCharacInfo::operator delete(void* p) { m_PowerWarCharacInfoMemPool_.free(p); }
void STPowerWarCharacInfo::operator delete(void* p, unsigned int size) { m_PowerWarCharacInfoMemPool_.free(p, size); }

// ---- CCashObject ----
CCashObject::CCashObject()
{
    m_lifeTime = 5;
    m_charNo = 0;
}

CCashObject::~CCashObject()
{
}

bool CCashObject::IsLifeTimeOut()
{
    m_lifeTime -= 1;
    return m_lifeTime == 0;
}

void CCashObject::SetBlackUsersObject(std::map<unsigned int, CBlackUser*>& blackUsers)
{
    m_blackUsers = blackUsers;
}

void CCashObject::ClearBlackUsers()
{
    m_blackUsers.clear();
}

std::map<unsigned int, CBlackUser*>* CCashObject::GetBlackUsersObject()
{
    return &m_blackUsers;
}

void CCashObject::SetCharacNo(unsigned int charNo)
{
    m_charNo = (int)charNo;
}

// ---- 显式实例化（触发 alloc/free 符号）----
template class MemPool<CUdpRecvBuffer>;
template class MemPool<CBlackUser>;
template class MemPool<CCashObject>;
template class MemPool<CPacketBuffer>;
template class MemPool<CTcpRecvBuffer>;
template class MemPool<CTcpSendBuffer>;
template class MemPool<STPowerWarGuildInfo>;
template class MemPool<STPowerWarCharacInfo>;
template class MemPool<CPeer>;
template class MemPool<CUser>;
template class MemPool<CGuild>;

// ---- allocator 显式实例化（原版独立符号）----
template std::allocator<STGuildCargoLog>::allocator();
template std::allocator<STGuildCargoLog>::~allocator();
template std::allocator<STPowerWarScheduleTime>::allocator();
template std::allocator<STPowerWarScheduleTime>::~allocator();
template std::allocator<CTcpRecvBuffer*>::allocator();
template std::allocator<CTcpRecvBuffer*>::~allocator();
template std::allocator<CUdpRecvBuffer*>::allocator();
template std::allocator<CUdpRecvBuffer*>::~allocator();
template std::allocator<STGuildCargoLog*>::~allocator();
template std::allocator<STPowerWarGuildInfo*>::allocator();
template std::allocator<STPowerWarGuildInfo*>::~allocator();
template std::allocator<STPowerWarCharacInfo*>::allocator();
template std::allocator<STPowerWarCharacInfo*>::~allocator();
template std::allocator<STDBSavePowerWarPoint*>::allocator();
template std::allocator<STDBSavePowerWarPoint*>::~allocator();
template std::allocator<CTcpRecvBuffer**>::~allocator();
template std::allocator<std::_List_node<STUserPoint> >::allocator();
template std::allocator<std::_List_node<STUserPoint> >::~allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STGuildBoardDBInfo> > >::allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STGuildBoardDBInfo> > >::~allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STPowerWarGuildInfo*> > >::allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STPowerWarGuildInfo*> > >::~allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STPowerWarCharacInfo*> > >::allocator();
template std::allocator<std::_Rb_tree_node<std::pair<unsigned int const, STPowerWarCharacInfo*> > >::~allocator();
template std::allocator<std::pair<unsigned int, STGuildWarInfo*> >::allocator();
template std::allocator<std::pair<unsigned int, STGuildWarInfo*> >::~allocator();

namespace
{
template<class T>
void allocator_copy_inst()
{
    std::allocator<T> a;
    std::allocator<T> b(a);
    (void)b;
}
}

template void allocator_copy_inst<STPowerWarScheduleTime>();
template void allocator_copy_inst<CTcpRecvBuffer*>();
template void allocator_copy_inst<CUdpRecvBuffer*>();
template void allocator_copy_inst<unsigned int>();

namespace
{
template<class T1, class T2>
void allocator_convert_inst()
{
    std::allocator<T1> a;
    std::allocator<T2> b(a);
    (void)b;
}
}

template void allocator_convert_inst<STGuildCargoLog, STGuildCargoLog*>();
template void allocator_convert_inst<CTcpRecvBuffer*, CTcpRecvBuffer**>();

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
    InsertSourceVersion(".", 0x19daa);
    InsertSourceVersion("../ServerCommon", 0x19daa);
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
    CMyFileLog log("Load_Table", 0x5b);
    log("./log/TableError", "Kill USR Config Table - ReturnCode = %d\n", rc);
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
