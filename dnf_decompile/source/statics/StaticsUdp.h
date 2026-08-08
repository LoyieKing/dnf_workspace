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
    int SendToClient(char* buf, int len, unsigned short port, char const* ip,
                     unsigned int ipaddr) const;
    int RecvFromServer(char* buf, int* len, unsigned int* ip, unsigned short* port) const;
    int SendToServer(char* buf, int len, unsigned short port, char const* ip) const;
    void InetAddr(char const* ip) const;
    int m_sock;        // +0
    int m_clientSock;  // +4
};

// CUdpRecvBuffer：UDP 收包缓冲（MemPool 元素，0x1804 原始字节，无自定义构造/析构）
class CUdpRecvBuffer
{
public:
    static void* operator new(unsigned int size);
    static void operator delete(void* p);
    static void operator delete(void* p, unsigned int size);
    char m_data[0x1804];
};

template<class T> class MemPool;
extern MemPool<CUdpRecvBuffer> m_RecvBufferMemPool_;

#endif // COSERVER_UDP_H_
