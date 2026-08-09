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

// ---- CSHA：SHA-256 ----
const unsigned int CSHA::sm_K256[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
    0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
    0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
    0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
    0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
    0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
const unsigned int CSHA::sm_H256[8] = {
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};

CSHA::CSHA()
{
    for (int i = 0; i < 8; i++)
        m_H[i] = sm_H256[i];
    m_lengthLo = 0;
    m_lengthHi = 0;
    memset(m_block, 0, 0x40);
    m_finalized = 0;
}

void CSHA::Reset()
{
    for (int i = 0; i < 8; i++)
        m_H[i] = sm_H256[i];
    m_lengthLo = 0;
    m_lengthHi = 0;
    m_finalized = 0;
}

unsigned int CSHA::CH(unsigned int x, unsigned int y, unsigned int z)
{
    return (x & (y ^ z)) ^ z;
}

unsigned int CSHA::MAJ(unsigned int x, unsigned int y, unsigned int z)
{
    return (x & y) | (z & (x | y));
}

unsigned int CSHA::SIG0(unsigned int x)
{
    return (x >> 2 | x << 30) ^ (x >> 13 | x << 19) ^ (x >> 22 | x << 10);
}

unsigned int CSHA::SIG1(unsigned int x)
{
    return (x >> 6 | x << 26) ^ (x >> 11 | x << 21) ^ (x >> 25 | x << 7);
}

unsigned int CSHA::sig0(unsigned int x)
{
    return (x >> 7 | x << 25) ^ (x >> 18 | x << 14) ^ (x >> 3);
}

unsigned int CSHA::sig1(unsigned int x)
{
    return (x >> 17 | x << 15) ^ (x >> 19 | x << 13) ^ (x >> 10);
}

void CSHA::Bytes2Word(unsigned char const* src, unsigned int& dst)
{
    dst = ((unsigned int)src[0] << 24) | ((unsigned int)src[1] << 16) |
          ((unsigned int)src[2] << 8) | (unsigned int)src[3];
}

void CSHA::Word2Bytes(unsigned int const& src, unsigned char* dst)
{
    dst[0] = (unsigned char)(src >> 24);
    dst[1] = (unsigned char)(src >> 16);
    dst[2] = (unsigned char)(src >> 8);
    dst[3] = (unsigned char)src;
}

int CSHA::AddData(char const* data, int len)
{
    if (len <= 0)
        return 0x70000007;
    unsigned int oldLo = m_lengthLo;
    m_lengthLo += (unsigned int)len * 8;
    if (m_lengthLo < oldLo)
        m_lengthHi++;
    m_lengthHi += (unsigned int)len >> 29;
    int offset = (oldLo >> 3) & 0x3f;
    if (offset != 0)
    {
        char* dst = (char*)m_block + offset;
        int space = 0x40 - offset;
        if (len < space)
        {
            memcpy(dst, data, len);
            return 0x6fffffff;
        }
        memcpy(dst, data, space);
        Transform();
        data += space;
        len -= space;
    }
    while (len > 0x3f)
    {
        memcpy(m_block, data, 0x40);
        Transform();
        data += 0x40;
        len -= 0x40;
    }
    memcpy(m_block, data, len);
    m_finalized = 1;
    return 0x6fffffff;
}

int CSHA::FinalDigest(char* digest)
{
    if (m_finalized == 0)
        return 0x70000008;
    int offset = (m_lengthLo >> 3) & 0x3f;
    char* dst = (char*)m_block + offset;
    *dst = 0x80;
    dst++;
    int space = 0x3f - offset;
    if (space <= 7)
    {
        memset(dst, 0, space);
        Transform();
        memset(m_block, 0, 0x38);
    }
    else
    {
        memset(dst, 0, space - 8);
    }
    Word2Bytes(m_lengthHi, m_block + 0x38);
    Word2Bytes(m_lengthLo, m_block + 0x3c);
    Transform();
    for (int i = 0; i < 8; i++)
        Word2Bytes(m_H[i], (unsigned char*)digest + i * 4);
    Reset();
    return 0x6fffffff;
}

void CSHA::Transform()
{
    unsigned int W[0x40];
    for (int i = 0; i < 0x10; i++)
        Bytes2Word(m_block + i * 4, W[i]);
    for (int i = 0x10; i < 0x40; i++)
        W[i] = sig1(W[i - 2]) + W[i - 7] + sig0(W[i - 15]) + W[i - 16];
    unsigned int a = m_H[0], b = m_H[1], c = m_H[2], d = m_H[3];
    unsigned int e = m_H[4], f = m_H[5], g = m_H[6], h = m_H[7];
    for (int i = 0; i < 0x40; i++)
    {
        unsigned int t1 = h + SIG1(e) + CH(e, f, g) + sm_K256[i] + W[i];
        unsigned int t2 = SIG0(a) + MAJ(a, b, c);
        h = g; g = f; f = e; e = d + t1; d = c; c = b; b = a; a = t1 + t2;
    }
    m_H[0] += a; m_H[1] += b; m_H[2] += c; m_H[3] += d;
    m_H[4] += e; m_H[5] += f; m_H[6] += g; m_H[7] += h;
}

// ---- IMethod ----
IMethod::IMethod()
{
    m_initialized = 0;
    m_blockSize = 0;
    m_keyLength = 0;
    m_mode = 0;
    m_padding = 0;
}

IMethod::~IMethod() {}

int IMethod::Xor(char* a, char const* b)
{
    if (m_initialized == 1)
        return 0x70000005;
    for (int i = 0; i < m_blockSize; i++)
        a[i] ^= b[i];
    return 0x6fffffff;
}

int IMethod::SetMode(int mode)
{
    if (m_initialized == 1)
        return 0x70000005;
    if (mode < 0 || mode > 2)
        return 0x70000003;
    m_mode = mode;
    return 0x6fffffff;
}

int IMethod::SetPadding(int padding)
{
    if (m_initialized == 1)
        return 0x70000005;
    if (padding < 0 || padding > 2)
        return 0x70000004;
    m_padding = padding;
    return 0x6fffffff;
}

int IMethod::GetKeyLength(unsigned int* out)
{
    if (m_initialized == 1)
    {
        if (out)
            *out = 0x70000005;
        return 0;
    }
    return m_keyLength;
}

int IMethod::GetBlockSize(unsigned int* out)
{
    if (m_initialized == 1)
    {
        if (out)
            *out = 0x70000005;
        return 0;
    }
    return m_blockSize;
}

int IMethod::GetMode(unsigned int* out)
{
    if (m_initialized == 1)
    {
        if (out)
            *out = 0x70000005;
        return 0;
    }
    return m_mode;
}

int IMethod::GetPadding(unsigned int* out)
{
    if (m_initialized == 1)
    {
        if (out)
            *out = 0x70000005;
        return 0;
    }
    return m_padding;
}

int IMethod::Pad(char* data, int len, unsigned int* out)
{
    if (m_initialized == 1)
    {
        if (out)
            *out = 0x70000005;
        return 0;
    }
    int rem = len % m_blockSize;
    if (rem == 0)
        return (int)data;
    int padLen = m_blockSize - rem;
    char* dst = data + len;
    switch (m_padding)
    {
    case 0:
        for (int i = 0; i < padLen; i++)
            dst[i] = 0;
        break;
    case 1:
        for (int i = 0; i < padLen; i++)
            dst[i] = 0x20;
        break;
    case 2:
        for (int i = 0; i < padLen; i++)
            dst[i] = (char)padLen;
        break;
    default:
        break;
    }
    return (int)(data + padLen);
}

void IMethod::BytesToWord(unsigned char const* src, unsigned int& dst)
{
    dst = 0;
    dst |= (unsigned int)src[0] << 24;
    dst |= (unsigned int)src[1] << 16;
    dst |= (unsigned int)src[2] << 8;
    dst |= (unsigned int)src[3];
}

void IMethod::WordToBytes(unsigned int src, unsigned char* dst)
{
    dst[0] = (unsigned char)(src >> 24);
    dst[1] = (unsigned char)(src >> 16);
    dst[2] = (unsigned char)(src >> 8);
    dst[3] = (unsigned char)src;
}

// ---- CTEA ----
CTEA::CTEA()
{
    m_blockSize = 8;
    m_keyLength = 0x10;
    memset(m_key, 0, 0x10);
    memset(m_chain, 0, 8);
    memset(m_chain2, 0, 8);
    memset(m_iv, 0, 0x10);
}

CTEA::~CTEA() {}

int CTEA::Initialize(char const* key, int keyLen, char const* iv, int ivLen, int mode)
{
    if (!key)
        return 0x70000001;
    if (keyLen <= 0)
        return 0x70000002;
    if (mode < 0 || mode > 2)
        return 0x70000003;
    if (ivLen < 0 || ivLen > 2)
        return 0x70000004;
    m_mode = mode;
    m_padding = ivLen;
    unsigned char tmpKey[0x10] = {0};
    for (int i = 0; i < m_keyLength; i++)
        tmpKey[i] = key[i % keyLen];
    char ivSame = 0;
    char keySame = 0;
    if (m_initialized == 1)
    {
        if (memcmp(m_chain, iv, m_blockSize) == 0)
            ivSame = 1;
        if (memcmp(m_key, tmpKey, m_keyLength) == 0)
            keySame = 1;
        if (ivSame)
            memcpy(m_chain, m_chain2, m_blockSize);
        else
        {
            memcpy(m_chain, iv, m_blockSize);
            memcpy(m_chain2, iv, m_blockSize);
        }
        if (keySame)
            return 0x6fffffff;
    }
    memcpy(m_key, tmpKey, m_keyLength);
    BytesToWord(tmpKey, *(unsigned int*)&m_iv[0]);
    BytesToWord(tmpKey + 4, *(unsigned int*)&m_iv[4]);
    BytesToWord(tmpKey + 8, *(unsigned int*)&m_iv[8]);
    BytesToWord(tmpKey + 0xc, *(unsigned int*)&m_iv[0xc]);
    m_initialized = 1;
    return 0x6fffffff;
}

int CTEA::ResetChain()
{
    if (m_initialized == 1)
        return 0x70000005;
    memcpy(m_chain, m_chain2, m_blockSize);
    return 0x6fffffff;
}

int CTEA::EncryptBlock(unsigned char const* src, unsigned char* dst)
{
    unsigned int v0, v1;
    BytesToWord(src, v0);
    BytesToWord(src + 4, v1);
    unsigned int sum = 0;
    const unsigned int delta = 0x9e3779b9;
    unsigned int* key = (unsigned int*)m_iv;
    for (int i = 0; i < 0x20; i++)
    {
        v0 += ((((v1 << 4) ^ (v1 >> 5)) + v1) ^ (key[sum & 3] + sum));
        sum += delta;
        v1 += ((((v0 << 4) ^ (v0 >> 5)) + v0) ^ (key[(sum >> 11) & 3] + sum));
    }
    WordToBytes(v0, dst);
    WordToBytes(v1, dst + 4);
    return 0x6fffffff;
}

int CTEA::DecryptBlock(unsigned char const* src, unsigned char* dst)
{
    unsigned int v0, v1;
    BytesToWord(src, v0);
    BytesToWord(src + 4, v1);
    unsigned int sum = 0xc6ef3720;
    const unsigned int delta = 0x9e3779b9;
    unsigned int* key = (unsigned int*)m_iv;
    for (int i = 0; i < 0x20; i++)
    {
        v1 -= ((((v0 << 4) ^ (v0 >> 5)) + v0) ^ (key[(sum >> 11) & 3] + sum));
        sum -= delta;
        v0 -= ((((v1 << 4) ^ (v1 >> 5)) + v1) ^ (key[sum & 3] + sum));
    }
    WordToBytes(v0, dst);
    WordToBytes(v1, dst + 4);
    return 0x6fffffff;
}

int CTEA::Encrypt(char const* src, char* dst, unsigned int len)
{
    if (m_initialized != 1)
        return 0x70000005;
    if (len == 0 || len % (unsigned int)m_blockSize != 0)
        return 0x7000000a;
    if (m_mode == 1)
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            Xor((char*)src, (char const*)m_chain2);
            EncryptBlock((unsigned char const*)src, (unsigned char*)dst);
            memcpy(m_chain2, dst, m_blockSize);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    else if (m_mode == 2)
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            EncryptBlock(m_chain2, (unsigned char*)dst);
            Xor((char*)src, (char const*)dst);
            memcpy(m_chain2, dst, m_blockSize);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    else
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            EncryptBlock((unsigned char const*)src, (unsigned char*)dst);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    return 0x6fffffff;
}

int CTEA::Decrypt(char const* src, char* dst, unsigned int len)
{
    if (m_initialized != 1)
        return 0x70000005;
    if (len == 0 || len % (unsigned int)m_blockSize != 0)
        return 0x7000000a;
    if (m_mode == 1)
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            DecryptBlock((unsigned char const*)src, (unsigned char*)dst);
            Xor((char*)m_chain2, (char const*)dst);
            memcpy(m_chain2, src, m_blockSize);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    else if (m_mode == 2)
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            EncryptBlock(m_chain2, (unsigned char*)dst);
            Xor((char*)src, (char const*)dst);
            memcpy(m_chain2, src, m_blockSize);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    else
    {
        for (int i = 0; i < (int)(len / (unsigned int)m_blockSize); i++)
        {
            DecryptBlock((unsigned char const*)src, (unsigned char*)dst);
            src += m_blockSize;
            dst += m_blockSize;
        }
    }
    return 0x6fffffff;
}

int CTEA::Signature(char* digest)
{
    char buffer[0x18] = {0};
    memcpy(m_key, "TEA", strlen("TEA"));
    sprintf(buffer, "%d%d%d", m_keyLength, m_mode, m_padding);
    CSHA sha;
    sha.AddData(buffer, strlen(buffer));
    sha.FinalDigest(digest);
    return 0x6fffffff;
}
