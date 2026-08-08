#ifndef COSERVER_TABLE_H_
#define COSERVER_TABLE_H_

#include <string>

class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    int Load_Txt_Table_Data(const char* path, int maxCount);
    virtual int Parse_Table(char* line, int idx) = 0;
};

// CAppConfig：CTableBase@0 / frameCount@4 / udpPorts[101]@8
class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual int Parse_Table(char* line, int idx);
    unsigned char Get_FrameCountValue();
    unsigned int Get_ServerUdpPort(unsigned char idx);
    void Load_Table(const std::string& filename);
    void Check_FileName(const std::string& filename);

    char m_frameCount;             // +4
    unsigned int m_udpPorts[101];  // +8
};

// ST_ServerInfo：字段@0/1/2 + std::string@4 + ushort@8
struct ST_ServerInfo
{
    ST_ServerInfo();
    ~ST_ServerInfo();
    int m_field0;
    int m_field1;
    int m_field2;
    std::string m_string;
    unsigned short m_ushort;
};

// CDNFException：std::string 消息
class CDNFException
{
public:
    CDNFException(const std::string& msg);
    ~CDNFException();
    const std::string& get_msg() const
    {
        return m_msg;
    }
    std::string m_msg;
};

#endif // COSERVER_TABLE_H_
