#ifndef NSL_PACKETDESIGN_H_
#define NSL_PACKETDESIGN_H_

namespace nsl {

#pragma pack(push, 1)
struct PACKET_HEADER
{
    char classification;
    char msg_no;
    unsigned int sLength;
    unsigned int check_sum;
    unsigned int sequence;
    unsigned int ack;

    PACKET_HEADER()
    {
    }

    unsigned int getPacketID()
    {
        return (unsigned int)msg_no;
    }

    void setPacketID(int n)
    {
        msg_no = (char)n;
    }

    int getSize()
    {
        return sLength;
    }

    void setSize(int n)
    {
        sLength = n;
    }

    unsigned int getCategory()
    {
        return (unsigned int)classification;
    }

    void setCategory(int n)
    {
        classification = (char)n;
    }

    void setCheckSum(unsigned int n)
    {
        check_sum = n;
    }

    unsigned int getCheckSum()
    {
        return check_sum;
    }

    void setVariableLength(int n)
    {
        sequence = n;
    }

    bool isVariableLength()
    {
        return sequence != 0;
    }

    operator unsigned int()
    {
        return sLength;
    }

    void _copyData(PACKET_HEADER* p)
    {
        memcpy(_getData(), p->_getData(), p->sLength - sizeof(PACKET_HEADER));
    }

    char* _getData()
    {
        return (char*)this + sizeof(PACKET_HEADER);
    }

    PACKET_HEADER* _getHeader()
    {
        return this;
    }
};

#pragma pack(pop)

} // namespace nsl

#endif // NSL_PACKETDESIGN_H_
