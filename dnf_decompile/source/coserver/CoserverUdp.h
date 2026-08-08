#ifndef COSERVER_UDP_H_
#define COSERVER_UDP_H_

// CUdpHandler：sock@0 / clientSock@4
class CUdpHandler
{
public:
    CUdpHandler();
    int InitServerSocket(int port);
    int InitClientSocket();
    int RecvFromClient(char* buf, int* len, unsigned int* ip, unsigned short* port) const;
    int SendToClient(const char* buf, int len, unsigned int ip, unsigned short port) const;
    void Close();
    int m_sock;        // +0
    int m_clientSock;  // +4
};

// CUdpRecvBuffer：UDP 收包缓冲（MemPool 元素）
class CUdpRecvBuffer
{
public:
    CUdpRecvBuffer();
    char m_data[4096];
    unsigned int m_ip;
    unsigned short m_port;
    int m_len;
};

#endif // COSERVER_UDP_H_
