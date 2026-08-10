#ifndef COSERVER_TABLE_H_
#define COSERVER_TABLE_H_

#include <exception>
#include <string>

class CTableBase
{
public:
    CTableBase();
    virtual ~CTableBase();
    int Load_Txt_Table_Data(const char* path, int maxCount);
    virtual void Load_Table(const std::string& path) = 0;
    virtual bool Parse_Table(char* line, int idx) = 0;
};

// CAppConfig：CTableBase@0 / frameCount@4 / udpPorts[101]@8
class CAppConfig : public CTableBase
{
public:
    CAppConfig();
    virtual ~CAppConfig();
    virtual void Load_Table(const std::string& filename);
    virtual bool Parse_Table(char* line, int idx);
    unsigned short Get_FrameCountValue();
    unsigned int Get_ServerUdpPort(unsigned char idx);
    void Check_FileName(const std::string& filename);

    unsigned char m_frameCount;    // +4
    unsigned int m_udpPorts[101];  // +8
};

// ST_ServerInfo：0x0 有效标志 / 0x1 服务器组 / 0x2 服务器索引(0xff 无效)
//               + std::string@4 + ushort@8（总 0xc）
struct ST_ServerInfo
{
    ST_ServerInfo();
    ~ST_ServerInfo();
    char m_field0;           // +0（1=有效）
    char m_field1;           // +1（服务器组）
    char m_field2;           // +2（服务器索引）
    std::string m_string;    // +4
    unsigned short m_ushort; // +8
};

// CDNFException：std::exception + std::string 消息@4
class CDNFException : public std::exception
{
public:
    CDNFException(const std::string& msg);
    virtual ~CDNFException() throw();
    virtual const char* what() const throw();
    std::string m_msg;
};

#endif // COSERVER_TABLE_H_
