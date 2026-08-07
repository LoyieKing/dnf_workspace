#ifndef NSL_ISESSION_H_
#define NSL_ISESSION_H_

namespace nsl {

class TCPUser;

class ISession
{
public:
    ISession();
    virtual ~ISession();
    virtual void onClose() = 0;
    virtual void onDoClose() = 0;
    virtual void setTCPUser(TCPUser* pUser);
    virtual TCPUser* getTCPUser();

    TCPUser* pTCPUser;
};

} // namespace nsl

#endif // NSL_ISESSION_H_
