#ifndef GUILD_UDP_H_
#define GUILD_UDP_H_

#include <sys/socket.h>

// ---- CUdpHandler ----
class CUdpHandler
{
public:
    CUdpHandler();
    ~CUdpHandler();
    int InitServerSocket(int port);
    int InitClientSocket();
    int RecvFromClient(char* buf, int* len, unsigned int* ip, unsigned short* port) const;
    int RecvFromServer(char* buf, int* len, unsigned int* ip, unsigned short* port) const;
    int SendToClient(char* buf, int len, unsigned short port, char const* ip,
                     unsigned int ipaddr) const;
    int SendToServer(char* buf, int len, unsigned short port, char const* ip) const;
    void InetAddr(char const* ip) const;
    int m_sock;         // +0
    int m_clientSock;   // +4
};

// ---- CUdpRecvBuffer：0x1804 ----
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x1804];
};

#endif  // GUILD_UDP_H_
