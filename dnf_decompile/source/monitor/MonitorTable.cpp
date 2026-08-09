#include "MonitorTable.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "MonitorApp.h"
#include "DNFFileLog.h"
#include "DNFFunctionLib.h"

CTableBase::CTableBase()
{
}

CTableBase::~CTableBase()
{
}

void CTableBase::Load_Table(const std::string& path)
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
                        fclose(f);
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

CAppConfig::CAppConfig() : m_str1(""), m_str2(""), m_ushort28(0), m_ushort30(0)
{
}

CAppConfig::~CAppConfig()
{
    clearServerInfoMap();
}

void CAppConfig::clearServerInfoMap()
{
    for (std::multimap<unsigned int, stServerInfo*>::iterator it = m_serverInfo.begin();
         it != m_serverInfo.end(); it++)
    {
        if (it->second != 0)
        {
            ::operator delete(it->second);
        }
        it->second = 0;
    }
    m_serverInfo.clear();
}

void CAppConfig::Load_Table(const std::string& path)
{
    std::string cfg = "./cfg/" + path + ".cfg";
    int rc = Load_Txt_Table_Data(cfg.c_str(), 0x32);
    if (0 < rc && rc < 0x33)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0xc4, "./log/TableError", "App Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}

int CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    if (idx < 8)
    {
        char* tokens[2];
        if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 2) == 2)
        {
            switch (idx)
            {
            case 0:
                m_frameCountValue = (unsigned char)atoi(tokens[1]);
                break;
            case 1:
                m_serverUdpPort = (unsigned short)atoi(tokens[1]);
                break;
            case 2:
                m_serverGroup = (unsigned char)atoi(tokens[1]);
                break;
            case 3:
                m_serverTcpPort = (unsigned short)atoi(tokens[1]);
                break;
            case 4:
                m_str1 = std::string(tokens[1]);
                break;
            case 5:
                m_ushort28 = (unsigned short)atoi(tokens[1]);
                break;
            case 6:
                m_str2 = std::string(tokens[1]);
                break;
            case 7:
                m_ushort30 = (unsigned short)atoi(tokens[1]);
                break;
            default:
                return 0;
            }
            return 1;
        }
    }
    else
    {
        char* tokens[6];
        if (DNFFLib::ExplodeString(line, " \t\r\n\"", tokens, 6) == 6)
        {
            stServerInfo* si = (stServerInfo*)operator new(0x16);
            si->m_field2 = (unsigned char)atoi(tokens[1]);
            si->m_field0 = (unsigned char)atoi(tokens[2]);
            si->m_field1 = (unsigned char)atoi(tokens[3]);
            strncpy(si->m_name, tokens[4], 0x10);
            si->m_port = (unsigned short)atoi(tokens[5]);
            m_serverInfo.insert(std::pair<const unsigned int, stServerInfo*>(si->m_field2, si));
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
        DNF_LOG_SCOPE_LINE(0xdb, "./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    }
    if (access(pid.c_str(), 0) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xe5, "./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    }
}

std::multimap<unsigned int, stServerInfo*>* CAppConfig::GetServerInfoMap()
{
    return &m_serverInfo;
}

unsigned char CAppConfig::Get_ServerGroup()
{
    return m_serverGroup;
}

unsigned char CAppConfig::Get_FrameCountValue()
{
    return m_frameCountValue;
}

unsigned short CAppConfig::Get_ServerUdpPort()
{
    return m_serverUdpPort;
}

const char* CAppConfig::Get_DBMWTcpIP()
{
    return m_str1.c_str();
}

unsigned short CAppConfig::Get_DBMWTcpPort()
{
    return m_ushort28;
}

const char* CAppConfig::Get_ManagerTcpIP()
{
    return m_str2.c_str();
}

unsigned short CAppConfig::Get_ManagerTcpPort()
{
    return m_ushort30;
}

unsigned short CAppConfig::Get_ServerTcpPort()
{
    return m_serverTcpPort;
}

CServerConfig::CServerConfig() {}
CServerConfig::~CServerConfig() {}
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
    return 0;
}
