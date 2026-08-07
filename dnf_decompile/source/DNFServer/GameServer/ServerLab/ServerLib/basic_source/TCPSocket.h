#ifndef NSL_TCPSOCKET_H_
#define NSL_TCPSOCKET_H_

#include <netinet/in.h>

namespace nsl {

typedef int SOCKET;

class TCPSocket
{
public:
    TCPSocket();
    ~TCPSocket();

    bool open();
    void shutdown(int opt);
    void close();
    bool bind(unsigned short port, bool bNonBlock);
    bool listen(int backlog);
    int send(char* buf, int len);
    int recv(char* buf, int len);
    bool connect(const char* ip, unsigned short port);
    bool connect_nonb(const char* ip, unsigned short port, timeval tval);
    bool accept(TCPSocket& accepted);
    int pollReadEvent();
    int pollWriteEvent();
    int pollErrorEvent();
    int setOptNonBlock();
    bool setOptReuseAdrs(bool b);
    bool setOptLinger(bool b);
    bool setOptNagle(bool b);
    bool setOptResizeSendBuf(int size);
    bool setOptResizeRecvBuf(int size);
    int SetRecvBufSize(int size);
    int SetSendBufSize(int size);
    SOCKET getHandle();
    unsigned char* getPeerAdrs();
    unsigned short getPeerPort();

    SOCKET sock_;
    sockaddr_in adrs_;
    unsigned char c_adrs_[4];
    unsigned short port_;

    static int msRecvBufSize;
    static int msSendBufSize;
    static const int MAX_SEND_RETRY;
    int mSendRetryCount;
};

class UDPSocket
{
public:
    UDPSocket();
    ~UDPSocket();
    int open();
    int bind(const char* strIp, unsigned short port);
    int bind(unsigned short port, bool bNonBlock);
    int setOptNonBlock();
    int send(char* buf, const int size, unsigned short nPort, const char* szDestIp);
    int recv(char* buf, const int size);
    int getHandle();
    int close();
    int setOptResizeSendBuf(int size);
    int setOptResizeRecvBuf(int size);

    SOCKET sock_;
    sockaddr_in adrs_;
    unsigned char c_adrs_[4];
    unsigned short port_;
};

} // namespace nsl

#endif // NSL_TCPSOCKET_H_
