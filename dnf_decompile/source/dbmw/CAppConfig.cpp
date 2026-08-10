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

// CTableBase / CAppInit / CAppConfig / CServerConfig
CTableBase::CTableBase() {}
CTableBase::~CTableBase() {}

int CTableBase::Load_Txt_Table_Data(const char* fileName, int idx)
{
    FILE* f = fopen(fileName, "r");
    if (!f)
        return -1;
    char buf[0x400];
    int count = 0;
    while (!feof(f) && fgets(buf, 0x400, f))
    {
        if (buf[0] == '#')
            continue;
        if (count >= idx)
            return -2;
        if (!Parse_Table(buf, count))
            return -1;
        count++;
    }
    fclose(f);
    return count;
}

CAppInit::CAppInit() {}
CAppInit::~CAppInit() {}

CAppStartInit::CAppStartInit() {}
CAppStartInit::~CAppStartInit() {}

int CAppStartInit::Save_pid(const std::string& path)
{
    std::string full = std::string("./pid/") + path + std::string(".pid");
    int fd = open(full.c_str(), 0x42, 0x1a4);
    if (fd < 0)
        return 0;
    char buf[0x400];
    memset(buf, 0, 0x400);
    sprintf(buf, "%ld\n", (long)getpid());
    int n = write(fd, buf, strlen(buf));
    if (n < 0)
    {
        close(fd);
        return 0;
    }
    return 1;
}

int CAppStartInit::Init_Daemon(int argc, char** argv)
{
    if (strcmp(argv[2], "start") == 0)
    {
        int pid = fork();
        if (pid < 0)
            return -1;
        if (pid > 0)
            exit(0);
        setsid();
        chdir("./");
        umask(0);
    }
    if (!Save_pid(std::string(argv[1])))
        return -1;
    return 0;
}

void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(std::string(argv[1]));
    app->m_serverConfig = new CServerConfig;
    app->m_killUsrConfig = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) != 0)
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
}

CAppStopInit::CAppStopInit() {}
CAppStopInit::~CAppStopInit() {}

void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, Manager had stoped this program.");
    if (app->Send_Term_Signal(std::string(argv[1])))
        throw CDNFException("By CAppStopInit::Init(), this app had stoped!");
    throw CDNFException("By CAppStopInit::Init(), this app had stoped!_1");
}

CAppConfig::CAppConfig()
{
    m_cipher.Initialize("qortmddkqortmdcksqordudwlswjdguswn", 0x21, 0, 0, 0);
    memset(m_dbConnInfo, 0, 0x17e8);
    m_tcpPort = 0;
    m_dbmwType = 0;
    m_serverGroup = 0;
}
CAppConfig::~CAppConfig() {}

STDBConnInfo::STDBConnInfo()
{
    memset(this, 0, 0x11);
    memset(m_user, 0, 0x15);
    memset(m_pass, 0, 0x15);
    memset(m_db, 0, 0x1f);
    memset(m_data, 0, 0x100);
    m_port = 0;
    m_tail = 0;
}

int CAppConfig::Load_Table(const std::string& fileName)
{
    CMyFileLog log("Load_Table", 0x35d);
    log("./log/process.log", "CAppConfig::Load_Table :  _S_MOD_CFG_LOADER_BY_NAME\n");
    std::string path = "./cfg/" + fileName + ".cfg";
    int n = Load_Txt_Table_Data(path.c_str(), 0xff);
    if (n > 0 && n <= 0xfe)
        return n;
    CMyFileLog log2("Load_Table", 0x365);
    log2("./log/TableError.log", "App Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CAppConfig::Load_Setup_Table() Exception Break!");
}

STDBConnInfo* CAppConfig::GetDBConnInfo(ENUM_DB_HANDLE_IDX idx)
{
    return (STDBConnInfo*)((char*)this + ((int)idx * 0x168 + 0x60));
}

int CAppConfig::GetServerGroup()
{
    return m_serverGroup;
}

int CAppConfig::DecryptValue(const char* value, char* dst)
{
    char buf1[0x40] = {0};
    char buf2[0x40] = {0};
    if (!DNFFLib::Hex2Binary(value, (unsigned char*)buf2, 0x18))
        return 0;
    m_cipher.Decrypt(buf2, buf1, 0x18);
    strncpy(dst, buf1, 0x14);
    return 1;
}

#define DBMW_PARSE_PWD(i, keyname) \
    else if (strcmp(key, keyname) == 0) { \
        char b1[0x40] = {0}; char b2[0x40] = {0}; \
        if (!DNFFLib::Hex2Binary(value, (unsigned char*)b2, 0x18)) return 0; \
        m_cipher.Decrypt(b2, b1, 0x18); \
        memcpy(m_dbConnInfo[i].m_pass, b1, strlen(b1)); }

int CAppConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[2];
    if (DNFFLib::ExplodeString(data, " =\t\r\n\"", fields, 2) != 2)
        return 0;
    if (size > 0xfe)
        return 0;
    char* key = fields[0];
    char* value = fields[1];
    if (strcmp(key, "tick_value") == 0)
        m_tickValue = (char)atoi(value);
    else if (strcmp(key, "udp_port") == 0)
        m_udpPort = atoi(value);
    else if (strcmp(key, "master_db_ip") == 0)
        memcpy(m_dbConnInfo[0].m_host, value, strlen(value));
    else if (strcmp(key, "master_db_port") == 0)
        m_dbConnInfo[0].m_port = atoi(value);
    else if (strcmp(key, "master_db_acc") == 0)
        memcpy(m_dbConnInfo[0].m_user, value, strlen(value));
    else if (strcmp(key, "master_db_pwd") == 0)
        DecryptValue(value, m_dbConnInfo[0].m_pass);
    else if (strcmp(key, "master_db_name") == 0)
        memcpy(m_dbConnInfo[0].m_db, value, strlen(value));
    else if (strcmp(key, "neople_db_ip") == 0)
        memcpy(m_dbConnInfo[1].m_host, value, strlen(value));
    else if (strcmp(key, "neople_db_port") == 0)
        m_dbConnInfo[1].m_port = atoi(value);
    else if (strcmp(key, "neople_db_acc") == 0)
        memcpy(m_dbConnInfo[1].m_user, value, strlen(value));
    DBMW_PARSE_PWD(1, "neople_db_pwd")
    else if (strcmp(key, "neople_db_name") == 0)
        memcpy(m_dbConnInfo[1].m_db, value, strlen(value));
    else if (strcmp(key, "game_db_ip") == 0)
        memcpy(m_dbConnInfo[2].m_host, value, strlen(value));
    else if (strcmp(key, "game_db_port") == 0)
        m_dbConnInfo[2].m_port = atoi(value);
    else if (strcmp(key, "game_db_acc") == 0)
        memcpy(m_dbConnInfo[2].m_user, value, strlen(value));
    DBMW_PARSE_PWD(2, "game_db_pwd")
    else if (strcmp(key, "game_db_name") == 0)
        memcpy(m_dbConnInfo[2].m_db, value, strlen(value));
    else if (strcmp(key, "log_db_ip") == 0)
        memcpy(m_dbConnInfo[4].m_host, value, strlen(value));
    else if (strcmp(key, "log_db_port") == 0)
        m_dbConnInfo[4].m_port = atoi(value);
    else if (strcmp(key, "log_db_acc") == 0)
        memcpy(m_dbConnInfo[4].m_user, value, strlen(value));
    DBMW_PARSE_PWD(4, "log_db_pwd")
    else if (strcmp(key, "log_db_name") == 0)
        memcpy(m_dbConnInfo[4].m_db, value, strlen(value));
    else if (strcmp(key, "sso_db_ip") == 0)
        memcpy(m_dbConnInfo[6].m_host, value, strlen(value));
    else if (strcmp(key, "sso_db_port") == 0)
        m_dbConnInfo[6].m_port = atoi(value);
    else if (strcmp(key, "sso_db_acc") == 0)
        memcpy(m_dbConnInfo[6].m_user, value, strlen(value));
    DBMW_PARSE_PWD(6, "sso_db_pwd")
    else if (strcmp(key, "sso_db_name") == 0)
        memcpy(m_dbConnInfo[6].m_db, value, strlen(value));
    else if (strcmp(key, "game_db_2nd_ip") == 0)
        memcpy(m_dbConnInfo[3].m_host, value, strlen(value));
    else if (strcmp(key, "game_db_2nd_port") == 0)
        m_dbConnInfo[3].m_port = atoi(value);
    else if (strcmp(key, "game_db_2nd_acc") == 0)
        memcpy(m_dbConnInfo[3].m_user, value, strlen(value));
    DBMW_PARSE_PWD(3, "game_db_2nd_pwd")
    else if (strcmp(key, "game_db_2nd_name") == 0)
        memcpy(m_dbConnInfo[3].m_db, value, strlen(value));
    else if (strcmp(key, "guild_db_ip") == 0)
        memcpy(m_dbConnInfo[8].m_host, value, strlen(value));
    else if (strcmp(key, "guild_db_port") == 0)
        m_dbConnInfo[8].m_port = atoi(value);
    else if (strcmp(key, "guild_db_acc") == 0)
        memcpy(m_dbConnInfo[8].m_user, value, strlen(value));
    DBMW_PARSE_PWD(8, "guild_db_pwd")
    else if (strcmp(key, "guild_db_name") == 0)
        memcpy(m_dbConnInfo[8].m_db, value, strlen(value));
    else if (strcmp(key, "web_db_ip") == 0)
        memcpy(m_dbConnInfo[5].m_host, value, strlen(value));
    else if (strcmp(key, "web_db_port") == 0)
        m_dbConnInfo[5].m_port = atoi(value);
    else if (strcmp(key, "web_db_acc") == 0)
        memcpy(m_dbConnInfo[5].m_user, value, strlen(value));
    DBMW_PARSE_PWD(5, "web_db_pwd")
    else if (strcmp(key, "web_db_name") == 0)
        memcpy(m_dbConnInfo[5].m_db, value, strlen(value));
    else if (strcmp(key, "stat_db_ip") == 0)
        memcpy(m_dbConnInfo[0xf].m_host, value, strlen(value));
    else if (strcmp(key, "stat_db_port") == 0)
        m_dbConnInfo[0xf].m_port = atoi(value);
    else if (strcmp(key, "stat_db_acc") == 0)
        memcpy(m_dbConnInfo[0xf].m_user, value, strlen(value));
    DBMW_PARSE_PWD(0xf, "stat_db_pwd")
    else if (strcmp(key, "stat_db_name") == 0)
        memcpy(m_dbConnInfo[0xf].m_db, value, strlen(value));
    else if (strcmp(key, "dbmw_type") == 0)
        m_dbmwType = (char)atoi(value);
    else if (strcmp(key, "server_group") == 0)
        m_serverGroup = atoi(value);
    else if (strcmp(key, "tcp_port") == 0)
        m_tcpPort = atoi(value);
    else if (strcmp(key, "event_db_ip") == 0)
        memcpy(m_dbConnInfo[9].m_host, value, strlen(value));
    else if (strcmp(key, "event_db_port") == 0)
        m_dbConnInfo[9].m_port = atoi(value);
    else if (strcmp(key, "event_db_acc") == 0)
        memcpy(m_dbConnInfo[9].m_user, value, strlen(value));
    DBMW_PARSE_PWD(9, "event_db_pwd")
    else if (strcmp(key, "event_db_name") == 0)
        memcpy(m_dbConnInfo[9].m_db, value, strlen(value));
    else if (strcmp(key, "se_event_db_ip") == 0)
        memcpy(m_dbConnInfo[0xd].m_host, value, strlen(value));
    else if (strcmp(key, "se_event_db_port") == 0)
        m_dbConnInfo[0xd].m_port = atoi(value);
    else if (strcmp(key, "se_event_db_acc") == 0)
        memcpy(m_dbConnInfo[0xd].m_user, value, strlen(value));
    DBMW_PARSE_PWD(0xd, "se_event_db_pwd")
    else if (strcmp(key, "se_event_db_name") == 0)
        memcpy(m_dbConnInfo[0xd].m_db, value, strlen(value));
    else
        return 0;
    return 1;
}

int CAppConfig::Check_FileName(const std::string& fileName)
{
    std::string cfg = std::string("./cfg/") + fileName + std::string(".cfg");
    if (access(cfg.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is no cfg file Exception Break! Check ./cfg/*.cfg files");
    std::string pid = std::string("./pid/") + fileName + std::string(".pid");
    if (access(pid.c_str(), 0) != 0)
        throw CDNFException(
            "CAppConfig::Set_FileName() There is already pid file! Exception Break! Check ./pid/*.pid files");
    return 1;
}

CServerConfig::CServerConfig() {}
CServerConfig::~CServerConfig() {}

int CServerConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0xff);
    if (n >= 0 && n <= 0xfe)
        return n;
    CMyFileLog log("Load_Table", 0x39);
    log("./log/TableError.log", "Server Config Table - ReturnCode = %d\n", n);
    throw CDNFException("CServerConfig::Load_Setup_Table() Exception Break!");
}

int CServerConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[5];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 5) == 5)
    {
        if (size <= 0xfe)
        {
            ST_ServerInfo* info = &m_servers[size];
            info->m_type = (char)atoi(fields[0]);
            info->m_flag = (char)atoi(fields[1]);
            info->m_idx = (char)atoi(fields[2]);
            info->m_name = fields[3];
            info->m_port = (unsigned short)atoi(fields[4]);
            return 1;
        }
    }
    return 0;
}

CKillUSRConfig::CKillUSRConfig() {}
CKillUSRConfig::~CKillUSRConfig()
{
    Clear_Table();
}

int CKillUSRConfig::Load_Table(const std::string& fileName)
{
    int n = Load_Txt_Table_Data(fileName.c_str(), 0x64);
    if (n > 0 && n <= 0x64)
        return n;
    CMyFileLog log("Load_Table", 0x5b);
    log("./log/TableError", "Kill USR Config Table - ReturnCode = %d\n", n);
    throw CDNFException(
        std::string("CKillUSRConfig::Load_Setup_Table() Exception break!"));
}

int CKillUSRConfig::Parse_Table(char* data, int size)
{
    if (data[0] == '#')
        return 0;
    char* fields[4];
    if (DNFFLib::ExplodeString(data, " \t\r\n\"", fields, 4) == 4)
    {
        ST_KillUSRConfig* kc = new (std::nothrow) ST_KillUSRConfig;
        if (!kc)
            return 0;
        kc->m_type = atoi(fields[0]);
        kc->m_field4 = atoi(fields[1]);
        kc->m_field8 = atoi(fields[2]);
        kc->m_fieldC = atoi(fields[3]);
        m_list.push_back(kc);
        return 1;
    }
    return 0;
}

void CKillUSRConfig::Clear_Table()
{
    if (m_list.empty())
        return;
    for (std::vector<ST_KillUSRConfig*>::iterator it = m_list.begin();
         it != m_list.end(); ++it)
    {
        ST_KillUSRConfig* p = *it;
        delete p;
        p = 0;
    }
    m_list.clear();
}

// ST_ServerInfo / CVersionMgr / CSourceVersionMgr
ST_ServerInfo::ST_ServerInfo()
{
    m_type = 0;
    m_flag = 0;
    m_idx = 0xff;
    m_port = 0;
}

ST_ServerInfo::~ST_ServerInfo() {}

CVersionMgr::CVersionMgr(int a, int b, int c, int d)
{
    m_versions[0] = a;
    m_versions[1] = b;
    m_versions[2] = c;
    m_versions[3] = d;
}

CSourceVersionMgr::SourceVersion::SourceVersion(const SourceVersion& other)
    : m_name(other.m_name), m_version(other.m_version)
{
}

CSourceVersionMgr::SourceVersion& CSourceVersionMgr::SourceVersion::operator=(const SourceVersion& other)
{
    m_name = other.m_name;
    m_version = other.m_version;
    return *this;
}

CSourceVersionMgr::SourceVersion::~SourceVersion() {}

CSourceVersionMgr::CSourceVersionMgr()
{
    InsertSourceVersion(".svn/all-wcprops", 0x19daa);
    InsertSourceVersion("../ServerCommon/.svn/all-wcprops", 0x19daa);
}
CSourceVersionMgr::~CSourceVersionMgr() {}

int CAppConfig::Get_ServerUdpPort() { return m_udpPort; }
int CAppConfig::Get_ServerTcpPort() { return m_tcpPort; }
unsigned short CAppConfig::Get_FrameCountValue() { return (unsigned char)m_tickValue; }
unsigned char CAppConfig::Get_DbmwType() { return m_dbmwType; }
void* CServerConfig::GetServerInfo() { return &m_servers; }
void* CKillUSRConfig::GetInfo() const { return (void*)&m_list; }
