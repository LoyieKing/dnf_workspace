#ifndef NSL_INTERNALMSGDESIGN_H_
#define NSL_INTERNALMSGDESIGN_H_

#include <string.h>

#include "PacketDesign.h"

namespace nsl {

class TCPUser;
class ConInterface;

#pragma pack(push, 1)
struct INTERNALMSG_HEADER
{
    void* pNextJob;
    bool bActiveJob;
    int workIndex;
    int mDestCharacKey;
    TCPUser* pTcpUser;
    unsigned int characKey;
    bool bWillDelete;
    int mOwnerWorkId;
    char classification;
    char msg_no;
    unsigned int sLength;

    INTERNALMSG_HEADER()
    {
    }

    void setDestCharacKey(int n)
    {
        mDestCharacKey = n;
    }

    int getDestCharacKey()
    {
        return mDestCharacKey;
    }

    unsigned int getInternalMsgID()
    {
        return (unsigned int)msg_no;
    }

    void setInternalMsgID(int n)
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
};

#pragma pack(pop)

struct INTERNALMSG_SERVICE_UNAVAILABLE : public INTERNALMSG_HEADER
{
    int reason;

    INTERNALMSG_SERVICE_UNAVAILABLE()
    {
        memset(this, 0, sizeof(INTERNALMSG_SERVICE_UNAVAILABLE));
        setInternalMsgID(0);
        setSize(sizeof(INTERNALMSG_SERVICE_UNAVAILABLE));
        bWillDelete = false;
    }
};

struct INTERNALMSG_DESTROY_CHARACTER : public INTERNALMSG_HEADER
{
    bool bActiveClosing;
    ConInterface* pConInfo;
    int areaIndex;

    INTERNALMSG_DESTROY_CHARACTER()
    {
        memset(this, 0, sizeof(INTERNALMSG_DESTROY_CHARACTER));
        setInternalMsgID(0);
        setSize(sizeof(INTERNALMSG_DESTROY_CHARACTER));
    }
};

} // namespace nsl

#endif // NSL_INTERNALMSGDESIGN_H_
