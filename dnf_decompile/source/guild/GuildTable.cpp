// df_guild_r — CTableBase/CAppConfig/CServerConfig/ST_ServerInfo/CDNFException
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "GuildTable.h"
#include "GuildServer.h"
#include "PacketHeader.h"
#include "GuildPackets.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CTableBase::CTableBase()
{
}

CTableBase::~CTableBase()
{
}

int CTableBase::Load_Txt_Table_Data(const char* path, int maxCount)
{
    FILE* f = fopen(path, "rb");
    int count = 0;
    if (f == 0)
    {
        count = -1;
    }
    else
    {
        char line[1024];
        while (true)
        {
            if (!feof(f) && fgets(line, 0x400, f) != 0)
            {
                if (line[0] != '#')
                {
                    if (maxCount <= count)
                    {
                        return -2;
                    }
                    if (Parse_Table(line, count) != 0)
                    {
                        count++;
                    }
                }
            }
            else
            {
                break;
            }
        }
        fclose(f);
    }
    return count;
}

CDNFException::CDNFException(const std::string& msg)
    : m_msg(msg)
{
}

CDNFException::~CDNFException() throw()
{
}

const char* CDNFException::what() const throw()
{
    DNF_LOG_SCOPE_LINE(0x1a, "./log/Except", "%s", m_msg.c_str());
    return m_msg.c_str();
}

ST_ServerInfo::ST_ServerInfo()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0xff;
    m_ushort = 0;
}

CServerConfig::CServerConfig()
{
    for (int i = 0; i < 255; i++)
    {
        new ((void*)&m_info[i]) ST_ServerInfo;
    }
}

CServerConfig::~CServerConfig()
{
}

void CServerConfig::Load_Table(const std::string& path)
{
    int rc = Load_Txt_Table_Data(path.c_str(), 0xff);
    if (0 < rc && rc < 0xff)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0x39, "./log/TableError", "Server Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}

int CServerConfig::Parse_Table(char* line, int idx)
{
    if (*line == '#')
    {
        return 0;
    }
    char* tok[5];
    if (DNFFLib::ExplodeString(line, " \t\r\n\"", tok, 5) == 5)
    {
        if (idx <= 0xfe)
        {
            ST_ServerInfo* info = &m_info[idx];
            info->m_field0 = (char)atoi(tok[0]);
            info->m_field1 = (char)atoi(tok[1]);
            info->m_field2 = (char)atoi(tok[2]);
            info->m_string = tok[3];
            info->m_ushort = (unsigned short)atoi(tok[4]);
            return 1;
        }
    }
    return 0;
}

ST_ServerInfo* CServerConfig::GetServerInfo()
{
    return m_info;
}

CAppConfig::CAppConfig()
    : m_name("")
{
    m_dbmwTcpPort = 0;
}

CAppConfig::~CAppConfig()
{
    clearServerInfoMap();
}

void CAppConfig::Load_Table(const std::string& path)
{
    std::string full = "./cfg/" + path;
    int rc = Load_Txt_Table_Data(full.c_str(), 0x32);
    if (0 < rc && rc < 0x33)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0xb4, "./log/TableError", "App Config Table - ReturnCode = %d\n", rc);
    throw CDNFException(
        "CAppConfig::Load_Table() App Config Table File Load Failed");
}

int CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    if (idx < 6)
    {
        char* tokens[3];
        int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 2);
        if (n == 2)
        {
            switch (idx)
            {
            case 0:
                m_frameCount = (unsigned char)atoi(tokens[1]);
                break;
            case 1:
                *(short*)((char*)this + 6) = (short)atoi(tokens[1]);
                break;
            case 2:
                *(char*)((char*)this + 10) = (char)atoi(tokens[1]);
                break;
            case 3:
                *(short*)((char*)this + 8) = (short)atoi(tokens[1]);
                break;
            case 4:
                m_name = std::string(tokens[1]);
                break;
            case 5:
                *(short*)((char*)this + 0x10) = (short)atoi(tokens[1]);
                break;
            default:
                return 0;
            }
            return 1;
        }
    }
    else
    {
        char* tokens[7];
        int n = DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 6);
        if (n == 6)
        {
            stServerInfo* si = (stServerInfo*)operator new(0x16);
            si->m_field2 = (unsigned char)atoi(tokens[1]);
            si->m_group = (unsigned char)atoi(tokens[2]);
            si->m_field1 = (unsigned char)atoi(tokens[3]);
            strncpy(si->m_name, tokens[4], 0x10);
            si->m_port = (unsigned short)atoi(tokens[5]);
            m_serverInfo.insert(std::make_pair(si->m_group, si));
            return 1;
        }
    }
    return 0;
}

void CAppConfig::Check_FileName(const std::string& filename)
{
    std::string cfg = "./cfg/" + filename + ".cfg";
    std::string pid = "./pid/" + filename + ".pid";
    if (access(cfg.c_str(), 0) != 0)
    {
        DNF_LOG_SCOPE_LINE(0x6a, "./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    }
    if (access(pid.c_str(), 0) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x74, "./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    }
}

unsigned char CAppConfig::Get_ServerGroup()
{
    return *(unsigned char*)((char*)this + 10);
}

unsigned char CAppConfig::Get_FrameCountValue()
{
    return *(unsigned char*)((char*)this + 4);
}

unsigned short CAppConfig::Get_ServerUdpPort()
{
    return *(unsigned short*)((char*)this + 6);
}

const char* CAppConfig::Get_DBMWTcpIP()
{
    return m_name.c_str();
}

unsigned short CAppConfig::Get_DBMWTcpPort()
{
    return *(unsigned short*)((char*)this + 0x10);
}

unsigned short CAppConfig::Get_ServerTcpPort()
{
    return *(unsigned short*)((char*)this + 8);
}

std::multimap<unsigned int, stServerInfo*>* CAppConfig::GetServerInfoMap()
{
    return &m_serverInfo;
}

void CAppConfig::clearServerInfoMap()
{
    for (std::multimap<unsigned int, stServerInfo*>::iterator it = m_serverInfo.begin();
         it != m_serverInfo.end(); ++it)
    {
        delete it->second;
    }
    m_serverInfo.clear();
}

CAppLoadChecker::CAppLoadChecker()
{
    m_tcpRecvLast = 0;
    m_udpRecvLast = 0;
    m_tcpSendLast = 0;
    m_tcpRecvLevel = 0;
    m_udpRecvLevel = 0;
    m_tcpSendLevel = 0;
}

void CAppLoadChecker::AddLoad(int n)
{
    m_udpRecvLevel = (char)n;
}

void CAppLoadChecker::AddLoadTotal(int n)
{
    m_tcpSendLevel = (char)n;
}

CAppLoadChecker* CAppLoadCheckerInstance()
{
    static CAppLoadChecker instance;
    return &instance;
}

int CAppLoadChecker::IsLoadComplete()
{
    return m_tcpRecvLast != 0;
}

void CAppLoadChecker::setUdpRecvQueue(int n)
{
    m_udpRecvLast = n;
}

void CAppLoadChecker::setTcpRecvQueue(int n)
{
    m_tcpRecvLast = n;
}

void CAppLoadChecker::setTcpSendQueue(int n)
{
    m_tcpSendLast = n;
}

bool CAppLoadChecker::checkUdpRecvLoad(int n)
{
    if ((char)m_udpRecvLevel < 1 && 0x32 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 1;
        return 1;
    }
    if ((char)m_udpRecvLevel < 2 && 100 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 2;
        return 1;
    }
    if ((char)m_udpRecvLevel < 3 && 200 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 3;
        return 1;
    }
    if ((char)m_udpRecvLevel < 4 && 500 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 4;
        return 1;
    }
    if ((char)m_udpRecvLevel < 5 && 1000 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 5;
        return 1;
    }
    if ((char)m_udpRecvLevel <= 5 && 5000 < n - m_udpRecvLast)
    {
        m_udpRecvLevel = 6;
        return 1;
    }
    if ((char)m_udpRecvLevel == 6 && 5000 < n - m_udpRecvLast)
    {
        return 1;
    }
    if ((char)m_udpRecvLevel >= 0 && 0x32 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xff;
        return 1;
    }
    if ((char)m_udpRecvLevel >= (char)0xff && 100 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xfe;
        return 1;
    }
    if ((char)m_udpRecvLevel >= (char)0xfe && 200 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xfd;
        return 1;
    }
    if ((char)m_udpRecvLevel >= (char)0xfd && 500 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xfc;
        return 1;
    }
    if ((char)m_udpRecvLevel >= (char)0xfc && 1000 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xfb;
        return 1;
    }
    if ((char)m_udpRecvLevel >= (char)0xfb && 5000 < m_udpRecvLast - n)
    {
        m_udpRecvLevel = (char)0xfa;
        return 1;
    }
    if ((char)m_udpRecvLevel == (char)0xfa && 5000 < m_udpRecvLast - n)
    {
        return 1;
    }
    return 0;
}

bool CAppLoadChecker::checkTcpRecvLoad(int n)
{
    if ((char)m_tcpRecvLevel < 1 && 0x32 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 1;
        return 1;
    }
    if ((char)m_tcpRecvLevel < 2 && 100 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 2;
        return 1;
    }
    if ((char)m_tcpRecvLevel < 3 && 200 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 3;
        return 1;
    }
    if ((char)m_tcpRecvLevel < 4 && 500 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 4;
        return 1;
    }
    if ((char)m_tcpRecvLevel < 5 && 1000 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 5;
        return 1;
    }
    if ((char)m_tcpRecvLevel <= 5 && 5000 < n - m_tcpRecvLast)
    {
        m_tcpRecvLevel = 6;
        return 1;
    }
    if ((char)m_tcpRecvLevel == 6 && 5000 < n - m_tcpRecvLast)
    {
        return 1;
    }
    if ((char)m_tcpRecvLevel >= 0 && 0x32 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xff;
        return 1;
    }
    if ((char)m_tcpRecvLevel >= (char)0xff && 100 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xfe;
        return 1;
    }
    if ((char)m_tcpRecvLevel >= (char)0xfe && 200 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xfd;
        return 1;
    }
    if ((char)m_tcpRecvLevel >= (char)0xfd && 500 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xfc;
        return 1;
    }
    if ((char)m_tcpRecvLevel >= (char)0xfc && 1000 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xfb;
        return 1;
    }
    if ((char)m_tcpRecvLevel >= (char)0xfb && 5000 < m_tcpRecvLast - n)
    {
        m_tcpRecvLevel = (char)0xfa;
        return 1;
    }
    if ((char)m_tcpRecvLevel == (char)0xfa && 5000 < m_tcpRecvLast - n)
    {
        return 1;
    }
    return 0;
}

bool CAppLoadChecker::checkTcpSendLoad(int n)
{
    if ((char)m_tcpSendLevel < 1 && 0x32 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 1;
        return 1;
    }
    if ((char)m_tcpSendLevel < 2 && 100 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 2;
        return 1;
    }
    if ((char)m_tcpSendLevel < 3 && 200 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 3;
        return 1;
    }
    if ((char)m_tcpSendLevel < 4 && 500 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 4;
        return 1;
    }
    if ((char)m_tcpSendLevel < 5 && 1000 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 5;
        return 1;
    }
    if ((char)m_tcpSendLevel <= 5 && 5000 < n - m_tcpSendLast)
    {
        m_tcpSendLevel = 6;
        return 1;
    }
    if ((char)m_tcpSendLevel == 6 && 5000 < n - m_tcpSendLast)
    {
        return 1;
    }
    if ((char)m_tcpSendLevel >= 0 && 0x32 < m_tcpSendLast - n)
    {
        m_udpRecvLevel = (char)0xff;  // ORIG 此处写 +0xd（原版固有）
        return 1;
    }
    if ((char)m_tcpSendLevel >= (char)0xff && 100 < m_tcpSendLast - n)
    {
        m_tcpSendLevel = (char)0xfe;
        return 1;
    }
    if ((char)m_tcpSendLevel >= (char)0xfe && 200 < m_tcpSendLast - n)
    {
        m_tcpSendLevel = (char)0xfd;
        return 1;
    }
    if ((char)m_tcpSendLevel >= (char)0xfd && 500 < m_tcpSendLast - n)
    {
        m_tcpSendLevel = (char)0xfc;
        return 1;
    }
    if ((char)m_tcpSendLevel >= (char)0xfc && 1000 < m_tcpSendLast - n)
    {
        m_tcpSendLevel = (char)0xfb;
        return 1;
    }
    if ((char)m_tcpSendLevel >= (char)0xfb && 5000 < m_tcpSendLast - n)
    {
        m_tcpSendLevel = (char)0xfa;
        return 1;
    }
    if ((char)m_tcpSendLevel == (char)0xfa && 5000 < m_tcpSendLast - n)
    {
        return 1;
    }
    return 0;
}

int CAppLoadChecker::CheckUdpRecvQ(int n)
{
    if (checkUdpRecvLoad(n))
    {
        setUdpRecvQueue(n);
        return 1;
    }
    return 0;
}

int CAppLoadChecker::CheckTcpRecvQ(int n)
{
    if (checkTcpRecvLoad(n))
    {
        setTcpRecvQueue(n);
        return 1;
    }
    return 0;
}

int CAppLoadChecker::CheckTcpSendQ(int n)
{
    if (checkTcpSendLoad(n))
    {
        setTcpSendQueue(n);
        return 1;
    }
    return 0;
}

void CAppLoadChecker::RequestDB(CServerHandler* handler, int a, int b)
{
    Packet_Server_Queue_Load_Statistic pkt;
    pkt.m_flag = (char)0xcb;
    pkt.m_param = (char)a;
    pkt.m_value = (unsigned short)b;
    handler->SendToDB((PacketHeader*)&pkt);
}
