#ifndef NSL_DISPATCHERS_H_
#define NSL_DISPATCHERS_H_

namespace nsl {

class UDPDispatcher;
class TCPDispatcher;
class InterDispatcher;
class DBDispatcher;

class Dispatchers
{
public:
    Dispatchers();
    UDPDispatcher* getUDPDispatcher();
    TCPDispatcher* getTCPDispatcher();
    InterDispatcher* GetInterDispatcher();
    DBDispatcher* getDBDispatcher();

    UDPDispatcher* dispatcherUDP;
    TCPDispatcher* dispatcherTCP;
    InterDispatcher* mpInterDispatcher;
    DBDispatcher* dispatcherDB;
};

} // namespace nsl

#endif // NSL_DISPATCHERS_H_
