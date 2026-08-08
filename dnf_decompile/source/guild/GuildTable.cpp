// df_guild_r — CTableBase/CAppConfig/CServerConfig/ST_ServerInfo/CDNFException
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "GuildTable.h"
#include "GuildServer.h"
#include "PacketHeader.h"
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
    return m_msg.c_str();
}

ST_ServerInfo::ST_ServerInfo()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0xff;
    m_string = std::string();
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
    CMyFileLog log("Load_Table", 0x39);
    log("./log/TableError", "Server Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}

int CServerConfig::Parse_Table(char* line, int idx)
{
    return 0;
}

ST_ServerInfo* CServerConfig::GetServerInfo()
{
    return m_info;
}

CAppConfig::CAppConfig()
{
    m_frameCount = 0;
    m_field5 = 0;
    m_group = 0;
    m_udpPort = 0;
    m_tcpPort = 0;
    m_name = std::string();
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
    CMyFileLog log("Load_Table", 0xb4);
    log("./log/TableError", "App Config Table - ReturnCode = %d\n", rc);
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
        CMyFileLog log("Check_FileName", 0x6a);
        log("./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    }
    if (access(pid.c_str(), 0) == 0)
    {
        CMyFileLog log("Check_FileName", 0x74);
        log("./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
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
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0;
}

void CAppLoadChecker::AddLoad(int n)
{
    m_field1 = (char)n;
}

void CAppLoadChecker::AddLoadTotal(int n)
{
    m_field2 = (char)n;
}

CAppLoadChecker* CAppLoadCheckerInstance()
{
    static CAppLoadChecker instance;
    return &instance;
}

int CAppLoadChecker::IsLoadComplete()
{
    return m_field0 != 0;
}

void CAppLoadChecker::setUdpRecvQueue(int n)
{
    *(int*)((char*)this + 4) = n;
}

void CAppLoadChecker::setTcpRecvQueue(int n)
{
    *(int*)((char*)this + 8) = n;
}

void CAppLoadChecker::setTcpSendQueue(int n)
{
    *(int*)((char*)this + 0xc) = n;
}

int CAppLoadChecker::checkUdpRecvLoad(int n)
{
    if ((char)m_field1 < 1 && 0x32 < n - *(int*)((char*)this + 4))
    {
        m_field1 = 1;
        return 1;
    }
    if ((char)m_field1 < 2 && 100 < n - *(int*)((char*)this + 4))
    {
        m_field1 = 2;
        return 1;
    }
    if ((char)m_field1 < 3 && 200 < n - *(int*)((char*)this + 4))
    {
        m_field1 = 3;
        return 1;
    }
    if ((char)m_field1 < 4 && 500 < n - *(int*)((char*)this + 4))
    {
        m_field1 = 4;
        return 1;
    }
    if ((char)m_field1 < 5 && 1000 < n - *(int*)((char*)this + 4))
    {
        m_field1 = 5;
        return 1;
    }
    return 0;
}

int CAppLoadChecker::checkTcpRecvLoad(int n)
{
    if ((char)m_field2 < 1 && 0x32 < n - *(int*)((char*)this + 8))
    {
        m_field2 = 1;
        return 1;
    }
    if ((char)m_field2 < 2 && 100 < n - *(int*)((char*)this + 8))
    {
        m_field2 = 2;
        return 1;
    }
    if ((char)m_field2 < 3 && 200 < n - *(int*)((char*)this + 8))
    {
        m_field2 = 3;
        return 1;
    }
    if ((char)m_field2 < 4 && 500 < n - *(int*)((char*)this + 8))
    {
        m_field2 = 4;
        return 1;
    }
    if ((char)m_field2 < 5 && 1000 < n - *(int*)((char*)this + 8))
    {
        m_field2 = 5;
        return 1;
    }
    return 0;
}

int CAppLoadChecker::checkTcpSendLoad(int n)
{
    if ((char)m_field2 < 1 && 0x32 < n - *(int*)((char*)this + 0xc))
    {
        m_field2 = 1;
        return 1;
    }
    if ((char)m_field2 < 2 && 100 < n - *(int*)((char*)this + 0xc))
    {
        m_field2 = 2;
        return 1;
    }
    if ((char)m_field2 < 3 && 200 < n - *(int*)((char*)this + 0xc))
    {
        m_field2 = 3;
        return 1;
    }
    if ((char)m_field2 < 4 && 500 < n - *(int*)((char*)this + 0xc))
    {
        m_field2 = 4;
        return 1;
    }
    if ((char)m_field2 < 5 && 1000 < n - *(int*)((char*)this + 0xc))
    {
        m_field2 = 5;
        return 1;
    }
    return 0;
}

int CAppLoadChecker::CheckUdpRecvQ(int n)
{
    int r = checkUdpRecvLoad(n);
    if (r != 0)
    {
        setUdpRecvQueue(n);
    }
    return r != 0;
}

int CAppLoadChecker::CheckTcpRecvQ(int n)
{
    int r = checkTcpRecvLoad(n);
    if (r != 0)
    {
        setTcpRecvQueue(n);
    }
    return r != 0;
}

int CAppLoadChecker::CheckTcpSendQ(int n)
{
    int r = checkTcpSendLoad(n);
    if (r != 0)
    {
        setTcpSendQueue(n);
    }
    return r != 0;
}

void CAppLoadChecker::RequestDB(CServerHandler* handler, int a, int b)
{
    if (handler != 0)
    {
        char buf[0x1a];
        memset(buf, 0, sizeof(buf));
        *(unsigned short*)(buf + 0) = 0x1f6e;
        buf[0xa] = (char)0xcb;
        buf[0xb] = (char)a;
        *(unsigned short*)(buf + 0xc) = (unsigned short)b;
        handler->SendToDB((PacketHeader*)buf);
    }
}
