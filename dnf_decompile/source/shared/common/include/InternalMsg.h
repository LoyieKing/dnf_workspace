#ifndef NSL_INTERNALMSG_H_
#define NSL_INTERNALMSG_H_

#include "MsgCell.h"

namespace nsl {

class TCPUser;
class ConInterface;

class InternalMsg : public CMsgCell
{
public:
    InternalMsg()
    {
    }
    ~InternalMsg()
    {
    }

    void* pNextJob;
    ConInterface* pConInfo;
    char buf[2048];
    bool bActiveJob;
    int workIndex;
    int mDestCharacKey;
    TCPUser* pTCPUser;
    unsigned int mCharacKey;
    bool bWillDelete;
    int mOwnerWorkId;
};

} // namespace nsl

#endif // NSL_INTERNALMSG_H_
