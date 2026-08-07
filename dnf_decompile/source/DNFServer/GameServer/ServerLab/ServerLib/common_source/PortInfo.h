#ifndef NSL_PORTINFO_H_
#define NSL_PORTINFO_H_

namespace nsl {

class PortInfo
{
public:
    PortInfo()
    {
        mTCPPort = 0;
        mUDPPort = 0;
    }
    ~PortInfo()
    {
    }
    void setTCPPort(int port)
    {
        mTCPPort = port;
    }
    void setUDPPort(int port)
    {
        mUDPPort = port;
    }
    int getTCPPort()
    {
        return mTCPPort;
    }
    int getUDPPort()
    {
        return mUDPPort;
    }

    int mTCPPort;
    int mUDPPort;
};

} // namespace nsl

#endif // NSL_PORTINFO_H_
