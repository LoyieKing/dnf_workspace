#ifndef NSL_TCPSOCKET_H_
#define NSL_TCPSOCKET_H_

#include <netinet/in.h>

namespace nsl {

typedef int SOCKET;

class TCPSocket
{
public:
    TCPSocket();
    virtual ~TCPSocket();

    int open();
    int shutdown();
    int close();
    int bind(unsigned short port);
    int listen(int backlog);
    int send(char* buf, int len);
    int recv(char* buf, int len);
    int connect(const char* ip, unsigned short port);
    int connect_nonb(const char* ip, unsigned short port);
    int accept();
    int pollReadEvent();
    int pollWriteEvent();
    int pollErrorEvent();
    int setOptNonBlock();
    int setOptResizeSendBuf(int size);
    int setOptResizeRecvBuf(int size);
    int setOptReuseAdrs();
    int setOptLinger(int onoff, int linger);
    int setOptNagle(int nagle);
    void SetRecvBufSize(int size);
    void SetSendBufSize(int size);
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

} // namespace nsl

#endif // NSL_TCPSOCKET_H_
