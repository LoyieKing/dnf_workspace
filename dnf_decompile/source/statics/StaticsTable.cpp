// df_statics_r — CTableBase/CAppConfig/ST_ServerInfo/CDNFException
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "StaticsTable.h"
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

CAppConfig::CAppConfig()
{
}

CAppConfig::~CAppConfig()
{
}

unsigned char CAppConfig::Get_FrameCountValue()
{
    return m_frameCount;
}

unsigned int CAppConfig::Get_ServerUdpPort()
{
    return m_udpPort;
}

unsigned char CAppConfig::Get_ServerGroup()
{
    return m_serverGroup;
}

int CAppConfig::Parse_Table(char* line, int idx)
{
    if (line[0] == '#')
    {
        return 0;
    }
    char* tok0 = 0;
    char* tok1 = 0;
    int n = DNFFLib::ExplodeString(line, " \t\r\n\"", &tok0, 2);
    if (n == 2 && idx < 10)
    {
        if (idx == 1)
        {
            m_udpPort = (unsigned int)atoi(tok1);
        }
        else if (idx == 2)
        {
            m_serverGroup = (char)atoi(tok1);
        }
        else if (idx == 0)
        {
            m_frameCount = (char)atoi(tok1);
        }
        else
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void CAppConfig::Load_Table(const std::string& filename)
{
    std::string path = "./cfg/" + filename;
    int rc = Load_Txt_Table_Data(path.c_str(), 10);
    if (0 < rc && rc < 0xb)
    {
        return;
    }
    DNF_LOG_SCOPE_LINE(0x53, "./log/TableError", "App Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}

void CAppConfig::Check_FileName(const std::string& filename)
{
    std::string cfg = "./cfg/" + filename;
    std::string pid = "./pid/" + filename;
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

ST_ServerInfo::ST_ServerInfo()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0xff;
    m_string = std::string();
    m_ushort = 0;
}

ST_ServerInfo::~ST_ServerInfo()
{
}

CDNFException::CDNFException(const std::string& msg)
    : std::exception(), m_msg(msg)
{
}

CDNFException::~CDNFException() throw()
{
}

const char* CDNFException::what() const throw()
{
    const char* msg = m_msg.c_str();
    DNF_LOG_SCOPE_LINE(0x1a, "./log/Except", "%s", msg);
    return m_msg.c_str();
}
