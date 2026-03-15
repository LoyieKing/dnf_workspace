//
// Created by Loyie King on 2024/3/10.
//

#include "AbstractSocket.h"

#include <arpa/inet.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <cerrno>
#include <cstring>

#include "ArchiveLog.h"

template<int TSizeIn, int TSizeOut>
int CAbstractSocket<TSizeIn, TSizeOut>::AcceptSocket() {
    socklen_t len;
    sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    len = 16;
    int sock = accept(socket, (sockaddr *)&addr, &len);
    if (sock < 0) {
        char *error_message = strerror(errno);
        ArchiveLog("Accept Socket[%d] Error(%s)", sock, error_message);
        sock = -1;
    } else {
        uint16_t port = ntohs(addr.sin_port);
        char *ip = inet_ntoa(addr.sin_addr);
        ArchiveLog("accepted other server ip(%s), port(%d), sock(%d)", ip, (uint)port, sock);
    }
    return sock;
}

template<int MaxRecvBuf, int MaxSendBuf>
CAbstractSocket<MaxRecvBuf, MaxSendBuf>::CAbstractSocket() {
    socket = -1;
    what1 = 0;
    m_remain_recvlen = 0;
    recvBufferOffset = NULL;
    remainSendLen = 0;
    sendBufferOffset = NULL;
    Reset();
}

template<int MaxRecvBuf, int MaxSendBuf>
void CAbstractSocket<MaxRecvBuf, MaxSendBuf>::Reset() {
    socket = -1;
    what1 = 0;
    m_remain_recvlen = 0;
    remainSendLen = 0;
    memset(recvBuffer, 0, MaxRecvBuf);
    memset(sendBuffer, 0, MaxSendBuf);
    this->recvBufferOffset = recvBuffer;
    this->sendBufferOffset = sendBuffer;
}

template<int MaxRecvBuf, int MaxSendBuf>
void CAbstractSocket<MaxRecvBuf, MaxSendBuf>::AddTriggerSessionEventType(int sessionEventType) {
    this->triggerSessionEventType |= sessionEventType;
}

template<int MaxRecvBuf, int MaxSendBuf>
bool CAbstractSocket<MaxRecvBuf, MaxSendBuf>::ConnectPeer() {
    int sock = connect(this->socket, &this->socket_address, 0x10);
    if (sock < 0 && errno != EINPROGRESS /*115*/ && errno != EAGAIN /*11*/ && errno != EINTR /*4*/ && errno != 0) {
        return false;
    }
    return true;
}

template<int MaxRecvBuf, int MaxSendBuf>
bool CAbstractSocket<MaxRecvBuf, MaxSendBuf>::CreateConnectionSocket(const char *ip, int port) {
    int sock = ::socket(PF_INET, SOCK_STREAM, 0);
    this->socket = sock;
    if (this->socket < 0) {
        return false;
    } else {
        bool nonblock = SetNonblock(this->socket);
        if (nonblock) {
            memset(&this->socket_address, 0, sizeof(this->socket_address));
            this->socket_address.sa_family = 2;
            in_addr_t addr = inet_addr(ip);
            *(in_addr_t *)(this->socket_address.sa_data + 2) = addr;
            *(uint16_t *)(this->socket_address).sa_data = htons(port);
            return ConnectPeer();
        } else {
            return false;
        }
    }
}

template<int MaxRecvBuf, int MaxSendBuf>
bool CAbstractSocket<MaxRecvBuf, MaxSendBuf>::SetNonblock(int sock) {
    int opts = fcntl(sock, F_GETFL);
    int r = fcntl(sock, F_SETFL, opts | O_NONBLOCK /*0x800 , 04000*/);
    return -1 < r;
}

template<int MaxRecvBuf, int MaxSendBuf>
void CAbstractSocket<MaxRecvBuf, MaxSendBuf>::disconnect() {
    shutdown(this->socket, SHUT_RD);
    close(this->socket);
    Reset();
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::GetSocket() {
    return this->socket;
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::GetTriggerSessionEventType() {
    return this->triggerSessionEventType;
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::CreateListenSocket(int &outputSocket, int port, const char *ip) {
    int sock = ::socket(PF_INET, SOCK_STREAM, 0);
    outputSocket = sock;
    if (outputSocket < 0) {
        return 0;
    }
    struct sockaddr sockaddr;
    memset(&sockaddr, 0, sizeof(sockaddr));
    memset(&sockaddr, 0, sizeof sockaddr);
    sockaddr.sa_family = 2;
    if (ip == NULL) {
        *(in_addr_t *)(sockaddr.sa_data + 2) = htonl(0);
    } else {
        *(in_addr_t *)(sockaddr.sa_data + 2) = inet_addr(ip);
    }
    *(uint16_t *)(sockaddr).sa_data = htons((uint16_t)port);
    int socketBufSize = 60000;
    int e = setsockopt(outputSocket, SOL_SOCKET /*1*/, SO_REUSEADDR /*2*/, &socketBufSize, 4);
    if (e < 0) {
        return 0;
    }
    int err = bind(outputSocket, &sockaddr, 0x10);
    if (err < 0) {
        return 0;
    }
    err = listen(outputSocket, 5);
    if (err < 0) {
        return 0;
    }
    bool success = SetNonblock(outputSocket);
    if (success) {
        return 1;
    } else {
        return 0;
    }
}

template<int MaxRecvBuf, int MaxSendBuf>
bool CAbstractSocket<MaxRecvBuf, MaxSendBuf>::SetRecvBufferOffset(int parsingLen) {
    if (parsingLen < 1) {
        return 0;
    }
    if (parsingLen < this->m_remain_recvlen) {
        if (MaxRecvBuf < parsingLen) {
            ArchiveLog("[PARSING LENGTH EXCEPTION] parsingLen > MaxRecvBuf , memmove : parsingLen = %d", parsingLen);
            return 0;
        }
        this->m_remain_recvlen = this->m_remain_recvlen - parsingLen;
        this->recvBufferOffset = this->recvBuffer + this->m_remain_recvlen;
        memmove(this->recvBuffer, this->recvBuffer + parsingLen, this->m_remain_recvlen);
    } else {
        if (this->m_remain_recvlen != parsingLen) {
            ArchiveLog("[PARSING LENGTH EXCEPTION] m_remain_recvlen(%d) > parsingLen(%d) ", this->m_remain_recvlen, parsingLen);
            return 0;
        }
        this->m_remain_recvlen = 0;
        this->recvBufferOffset = this->recvBuffer;
    }
    return 1;
}

template<int MaxRecvBuf, int MaxSendBuf>
char *CAbstractSocket<MaxRecvBuf, MaxSendBuf>::GetRecvBuff(int getSize, int *remainRecvLen) {
    this->m_remain_recvlen += getSize;
    this->recvBufferOffset += getSize;
    *remainRecvLen = this->m_remain_recvlen;
    return this->recvBuffer;
}

template<int MaxRecvBuf, int MaxSendBuf>
ssize_t CAbstractSocket<MaxRecvBuf, MaxSendBuf>::recv_packet() {
    if (this->socket < 0) {
        return 0;
    }
    errno = 0;
    size_t maxRead = MaxRecvBuf - m_remain_recvlen;
    if (maxRead == 0) {
        recvBufferOffset = recvBuffer;
        m_remain_recvlen = 0;
        maxRead = MaxRecvBuf;
    }
    ssize_t nRead = read(this->socket, this->recvBufferOffset, maxRead);
    if (nRead < 0) {
        if (errno == EAGAIN || errno == EINTR || errno == EAGAIN /*two 0xb, not typo. copied from original code*/ || errno == 0) {
            return 0;
        } else {
            ArchiveLog("RECV ERROR DISCONNNECT NOW FD[%d] : %d(%s)", this->socket, errno, strerror(errno));
            return -1;
        }
    } else if (nRead == 0) {
        ArchiveLog("Recv ERROR = 0 (%d) : %s, MaxRead(%d) nRead(%d)", errno, strerror(errno), maxRead, nRead);
        return -1;
    }
    return nRead;
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::SetSocket(int sock, bool setNonBlock) {
    this->socket = sock;
    if (setNonBlock) {
        bool success = SetNonblock(sock);
        if (!success) {
            return 0;
        }
    }
    return 1;
}

template<int MaxRecvBuf, int MaxSendBuf>
void CAbstractSocket<MaxRecvBuf, MaxSendBuf>::SetTriggerSessionEventType(int sessionEventType) {
    this->triggerSessionEventType = sessionEventType;
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::send_packet(const char *data, int last) {
    if (this->socket < 0) {
        return -1;
    } else if (last < 1) {
        ArchiveLog("!!!Send Packet[(%d,%d) Size(%d) Error\n", (int)*data, (int)data[1], last);
        return -1;
    } else {
        errno = 0;
        this->remainSendLen = this->remainSendLen + last;
        if (this->remainSendLen < MaxSendBuf + 1) {
            if ((this->sendBufferOffset < this->sendBuffer) || ((char *)&this->triggerSessionEventType <= this->sendBufferOffset)) {
                this->remainSendLen = this->remainSendLen - last;
                ArchiveLog("!!!Send Packet Buffer error P_TYPE[%d] Size:Remain[%d] Last[%d]", (int)data[1], this->remainSendLen, last);
                return -1;
            } else {
                memcpy(this->sendBufferOffset, data, last);
                this->sendBufferOffset = this->sendBufferOffset + last;
                return send_packet();
            }
        } else {
            this->remainSendLen = this->remainSendLen - last;
            ArchiveLog("!!!Send Packet Overflow P_TYPE[%d] Size:Remain[%d] Last[%d]", (int)data[1], this->remainSendLen, last);
            return -1;
        }
    }
}

template<int MaxRecvBuf, int MaxSendBuf>
int CAbstractSocket<MaxRecvBuf, MaxSendBuf>::send_packet() {
    if (this->remainSendLen < 1) {
        return 0;
    }
    int nSend = write(this->socket, this->sendBuffer, this->remainSendLen);
    if (nSend < 1) {
        if (errno == EAGAIN || errno == EINTR || errno == EAGAIN /*two 0xb, not typo. copied from original code*/ || errno == 0) {
            return 0;
        } else {
            ArchiveLog("SEND ERROR DISCONNNECT NOW FD[%d] : %d(%s)", this->socket, errno, strerror(errno));
            return -1;
        }
    } else if (nSend > 0) {
        if (nSend < this->remainSendLen) {
            this->sendBufferOffset = (this->sendBuffer + nSend);
            this->remainSendLen = this->remainSendLen - nSend;
            if (this->remainSendLen < 0) {
                return -1;
            } else if (this->remainSendLen < MaxSendBuf + 1) {
                memmove(this->sendBuffer, this->sendBufferOffset, this->remainSendLen);
                this->sendBufferOffset = (this->sendBuffer + this->remainSendLen);
            } else {
                return -1;
            }
        } else if (this->remainSendLen < nSend) {
            ArchiveLog("offset error[Remain_Data: %d Send:%d]", this->remainSendLen, nSend);
            return -1;
        } else {
            this->sendBufferOffset = this->sendBuffer;
            this->remainSendLen = 0;
        }
    }

    return nSend;
}
