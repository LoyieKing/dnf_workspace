// df_coserver_r — CTableBase/CAppConfig/ST_ServerInfo/CDNFException
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "CoserverTable.h"
#include "DNFFunctionLib.h"

CTableBase::CTableBase()
{
}

CTableBase::~CTableBase()
{
}

int CTableBase::Load_Txt_Table_Data(const char* path, int maxCount)
{
    FILE* f = fopen(path, "r");
    if (f == 0)
    {
        return 0;
    }
    char line[1024];
    int count = 0;
    while (fgets(line, sizeof(line), f) != 0)
    {
        line[strcspn(line, "\r\n")] = 0;
        if (Parse_Table(line, count))
        {
            count++;
        }
        if (count >= maxCount)
        {
            break;
        }
    }
    fclose(f);
    return count;
}

CAppConfig::CAppConfig()
{
    memset(m_udpPorts, 0, sizeof(m_udpPorts));
}

CAppConfig::~CAppConfig()
{
}

unsigned char CAppConfig::Get_FrameCountValue()
{
    return m_frameCount;
}

unsigned int CAppConfig::Get_ServerUdpPort(unsigned char idx)
{
    if (idx < 0x65)
    {
        return m_udpPorts[idx];
    }
    return 0;
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
    if (n == 2 && idx < 0x14)
    {
        if (idx == 0)
        {
            m_frameCount = (char)atoi(tok1);
        }
        else
        {
            int i = atoi(tok0);
            if (i < 0x65)
            {
                m_udpPorts[i] = (unsigned int)atoi(tok1);
            }
        }
        return 1;
    }
    return 0;
}

void CAppConfig::Load_Table(const std::string& filename)
{
    std::string path = "./cfg/" + filename;
    int rc = Load_Txt_Table_Data(path.c_str(), 0x14);
    if (0 < rc && rc < 0x15)
    {
        return;
    }
    CMyFileLog log("Load_Table", 0x60);
    log("./log/TableError", "App Config Table - ReturnCode = %d\n", rc);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}

void CAppConfig::Check_FileName(const std::string& filename)
{
    std::string cfg = "./cfg/" + filename;
    std::string pid = "./pid/" + filename;
    if (access(cfg.c_str(), 0) != 0)
    {
        CMyFileLog log("Check_FileName", 0x73);
        log("./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    }
    if (access(pid.c_str(), 0) == 0)
    {
        CMyFileLog log("Check_FileName", 0x78);
        log("./log/Init", "Check_FileName - %s,%s\n", cfg.c_str(), pid.c_str());
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    }
}

ST_ServerInfo::ST_ServerInfo()
{
    m_field0 = 0;
    m_field1 = 0;
    m_field2 = 0xff;
    m_ushort = 0;
}

ST_ServerInfo::~ST_ServerInfo()
{
}

CDNFException::CDNFException(const std::string& msg)
    : m_msg(msg)
{
}

CDNFException::~CDNFException()
{
}
