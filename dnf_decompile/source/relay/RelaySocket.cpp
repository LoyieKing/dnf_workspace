// df_relay_r — TCPSocket/UDPSocket（GCC 4.1.2, 无 DWARF — Ghidra 反汇编还原）
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <unistd.h>

#include "RelaySocket.h"

// ---- TCPSocket ----

TCPSocket::TCPSocket()
{
    sock_ = -1;
    *(unsigned short*)((char*)this + 0x18) = 0;
    memset((char*)this + 0x14, 0, 4);
    memset((char*)this + 4, 0, 0x10);
}

TCPSocket::~TCPSocket()
{
    close();
}

bool TCPSocket::open()
{
    sock_ = socket(2, 1, 6);
    if (sock_ != -1)
    {
        setOptLinger(false);
        setOptRecvBufferSize((int)this);
    }
    else
    {
        __errno_location();
    }
    return sock_ != -1;
}

bool TCPSocket::bind(unsigned short port, bool bNonBlock)
{
    setOptReuseAdrs(true);
    sockaddr local;
    memset(&local, 0, 0x10);
    local.sa_family = 2;
    local.sa_data[0] = (char)(htons(port) & 0xff);
    local.sa_data[1] = (char)(htons(port) >> 8);
    local.sa_data[2] = 0;
    local.sa_data[3] = 0;
    local.sa_data[4] = 0;
    local.sa_data[5] = 0;
    int r = ::bind(sock_, &local, 0x10);
    if (r < 0)
    {
        close();
        return 0;
    }
    if (bNonBlock)
    {
        setOptNonBlock();
    }
    printf("succeeded in binding TCP socket port #%d\n", (unsigned int)port);
    return 1;
}

bool TCPSocket::listen(int backlog)
{
    int r = ::listen(sock_, backlog);
    if (-1 >= r)
    {
        close();
    }
    return -1 < r;
}

ssize_t TCPSocket::send(char* buf, int len)
{
    if ((buf == 0) || (len < 1))
    {
        return -1;
    }
    ssize_t r = write(sock_, buf, len);
    if (r < 1)
    {
        if ((*__errno_location() == EAGAIN) || (*__errno_location() == EINTR) ||
            (*__errno_location() == EAGAIN) || (*__errno_location() == 0))
        {
            r = 0;
        }
        else
        {
            r = -1;
        }
    }
    return r;
}

ssize_t TCPSocket::recv(char* buf, int len)
{
    if ((buf == 0) || (len < 1))
    {
        return -1;
    }
    ssize_t r = read(sock_, buf, len);
    if (r < 0)
    {
        if ((*__errno_location() == EAGAIN) || (*__errno_location() == EINTR) ||
            (*__errno_location() == EAGAIN) || (*__errno_location() == 0))
        {
            r = 0;
        }
        else
        {
            r = -1;
        }
    }
    else if (r == 0)
    {
        r = -1;
    }
    return r;
}

int TCPSocket::shutdown(int how)
{
    return *(int*)this;
}

void TCPSocket::close()
{
    if (sock_ != -1)
    {
        ::close(sock_);
        sock_ = -1;
        memset((char*)this + 0x14, 0, 4);
        *(unsigned short*)((char*)this + 0x18) = 0;
    }
}

bool TCPSocket::setOptNonBlock()
{
    unsigned int flags = fcntl(sock_, 3, 0);
    int r = fcntl(sock_, 4, flags | 0x800);
    return -1 < r;
}

bool TCPSocket::setOptReuseAdrs(bool bReuse)
{
    unsigned int v = (unsigned int)bReuse;
    int r = setsockopt(sock_, 1, 2, &v, 4);
    return -1 < r;
}

bool TCPSocket::setOptLinger(bool bLinger)
{
    unsigned int v[2];
    v[0] = (unsigned int)bLinger;
    v[1] = 0;
    int r = setsockopt(sock_, 1, 0xd, v, 8);
    return -1 < r;
}

bool TCPSocket::setOptNagle(bool bNagle)
{
    unsigned int v = (unsigned int)!bNagle;
    int r = setsockopt(sock_, 6, 1, &v, 4);
    return -1 < r;
}

bool TCPSocket::setOptRecvBufferSize(int size)
{
    int r = setsockopt(*(int*)size, 1, 8, &size, 4);
    return -1 < r;
}

bool TCPSocket::connect(char const* ip, unsigned short port)
{
    sockaddr local;
    memset(&local, 0, 0x10);
    local.sa_family = 2;
    *(unsigned int*)(local.sa_data + 2) = inet_addr(ip);
    *(unsigned short*)local.sa_data = htons(port);
    unsigned int len = 0x10;
    int r = ::connect(sock_, &local, 0x10);
    if (-1 < r)
    {
        memcpy((char*)this + 0x14, local.sa_data + 2, 4);
        *(unsigned short*)((char*)this + 0x18) = *(unsigned short*)local.sa_data;
        setOptNonBlock();
    }
    return -1 < r;
}

bool TCPSocket::pollReadEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, &fds, 0, 0, &tv);
    return r != 0;
}

bool TCPSocket::pollWriteEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, 0, &fds, 0, &tv);
    return r != 0;
}

bool TCPSocket::pollErrorEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, 0, 0, &fds, &tv);
    return r != 0;
}

bool TCPSocket::accept(TCPSocket& new_sock)
{
    socklen_t len = 0x10;
    new_sock.sock_ = ::accept(sock_, (sockaddr*)((char*)&new_sock + 4), &len);
    if ((new_sock.sock_ < 0) || (new_sock.sock_ == -1))
    {
        return 0;
    }
    memcpy((char*)&new_sock + 0x14, (char*)&new_sock + 8, 4);
    *(unsigned short*)((char*)&new_sock + 0x18) = *(unsigned short*)((char*)&new_sock + 6);
    return 1;
}

char* TCPSocket::getPeerAdrs()
{
    return (char*)this + 0x14;
}

unsigned short TCPSocket::getPeerPort()
{
    return *(unsigned short*)((char*)this + 0x18);
}

int TCPSocket::setOptResizeSendBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    int r = setsockopt(sock_, 1, 7, &size, 4);
    if (r < 0)
    {
        return 0;
    }
    return 1;
}

int TCPSocket::setOptResizeRecvBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    int r = setsockopt(sock_, 1, 8, &size, 4);
    if (r < 0)
    {
        return 0;
    }
    return 1;
}

// ---- UDPSocket ----

UDPSocket::UDPSocket()
    : sock_(-1), port_(0)
{
    memset((char*)this + 4, 0, 0x10);
    memset((char*)this + 0x18, 0, 0x10);
}

UDPSocket::~UDPSocket()
{
    close();
}

bool UDPSocket::open()
{
    if (sock_ == -1)
    {
        sock_ = socket(2, 2, 0);
        if (sock_ == -1)
        {
            printf("Could not create a UDP socket : %d\n", *__errno_location());
            return 0;
        }
        return 1;
    }
    return 0;
}

int UDPSocket::bind(unsigned short port, bool bNonBlock)
{
    port_ = port;
    memset((char*)this + 4, 0, 0x10);
    *(unsigned short*)((char*)this + 4) = 2;
    *(unsigned int*)((char*)this + 8) = htonl(0);
    *(unsigned short*)((char*)this + 6) = htons(*(unsigned short*)((char*)this + 0x14));
    int r = ::bind(sock_, (sockaddr*)((char*)this + 4), 0x10);
    if (r == 0)
    {
        if (bNonBlock)
        {
            setOptNonBlock();
        }
        return 1;
    }
    int err = *__errno_location();
    if (err == 0x62)
    {
        printf("Port %d for receiving UDP is in use\n", (unsigned int)port);
    }
    else if (err == 99)
    {
        puts("Cannot assign requested address");
    }
    else if (err != 0)
    {
        printf("Could not bind UDP receive port. Error= %d , strerror = %s\n", err, strerror(err));
    }
    return 0;
}

bool UDPSocket::setOptNonBlock()
{
    unsigned int flags = fcntl(sock_, 3, 0);
    int r = fcntl(sock_, 4, flags | 0x800);
    return -1 < r;
}

void UDPSocket::delDisconnectUser(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(lock_);
    std::set<unsigned int>::iterator it = monitor_set.find(acc_id);
    if (it != monitor_set.end())
    {
        monitor_set.erase(it);
    }
}

void UDPSocket::pushMonitorAuthPacket(unsigned int acc_id)
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(lock_);
    if (monitor_set.find(acc_id) == monitor_set.end())
    {
        monitor_queue.push(acc_id);
        monitor_set.insert(acc_id);
    }
}

void UDPSocket::popMonitorAuthPacket()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(lock_);
    unsigned int acc_id = 0;
    do
    {
        if (monitor_queue.size() == 0)
        {
            return;
        }
        acc_id = monitor_queue.front();
        monitor_queue.pop();
    } while (monitor_set.find(acc_id) == monitor_set.end());
    std::set<unsigned int>::iterator it = monitor_set.find(acc_id);
    monitor_set.erase(it);
    // Packet_Relay_User_Check + send（后续随 Packet 头补齐）
}

unsigned int UDPSocket::sizeMonitorAuthPacket()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(lock_);
    return monitor_set.size();
}

ssize_t UDPSocket::send(char* buf, int len, unsigned short port, const char* ip,
                        unsigned int ip_addr)
{
    if ((buf == 0) || (len < 1))
    {
        return -1;
    }
    if ((ip == 0) && (ip_addr == 0))
    {
        return 0;
    }
    sockaddr local;
    memset(&local, 0, 0x10);
    if (ip != 0)
    {
        ip_addr = inet_addr(ip);
    }
    local.sa_family = 2;
    *(unsigned short*)local.sa_data = htons(port);
    local.sa_data[2] = (char)ip_addr;
    local.sa_data[3] = (char)(ip_addr >> 8);
    local.sa_data[4] = (char)(ip_addr >> 16);
    local.sa_data[5] = (char)(ip_addr >> 24);
    ssize_t r = sendto(sock_, buf, len, 0, &local, 0x10);
    if (r < 0)
    {
        r = 0;
    }
    return r;
}

ssize_t UDPSocket::recv(char* buf, int len)
{
    if ((buf == 0) || (len < 1))
    {
        return -1;
    }
    socklen_t slen = 0x10;
    ssize_t r = recvfrom(sock_, buf, len, 0, (sockaddr*)((char*)this + 0x18), &slen);
    if (r < 0)
    {
        r = 0;
    }
    return r;
}

int UDPSocket::getHandle()
{
    return sock_;
}

void UDPSocket::close()
{
    if (sock_ != -1)
    {
        ::close(sock_);
        sock_ = -1;
        port_ = 0;
    }
}

int UDPSocket::setOptResizeSendBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    int r = setsockopt(sock_, 1, 7, &size, 4);
    if (r < 0)
    {
        return 0;
    }
    return 1;
}

int UDPSocket::setOptResizeRecvBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    int r = setsockopt(sock_, 1, 8, &size, 4);
    if (r < 0)
    {
        return 0;
    }
    return 1;
}

bool UDPSocket::pollReadEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, &fds, 0, 0, &tv);
    return r != 0;
}

bool UDPSocket::pollWriteEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, 0, &fds, 0, &tv);
    return r != 0;
}

bool UDPSocket::pollErrorEvent() const
{
    fd_set fds;
    fd_set* p = &fds;
    for (unsigned int i = 0; i < 0x20; i++)
    {
        p->fds_bits[i] = 0;
    }
    p->fds_bits[(unsigned int)sock_ >> 5] =
        (1 << ((unsigned int)sock_ & 0x1f)) | p->fds_bits[(unsigned int)sock_ >> 5];
    timeval tv;
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    int r = select(2, 0, 0, &fds, &tv);
    return r != 0;
}
