#ifndef NSL_ACTIVENETCLOSE_H_
#define NSL_ACTIVENETCLOSE_H_

#include <deque>

namespace nsl {

class TCPUser;

class ActiveNetClose
{
public:
    void pushActiveClose(TCPUser* pUser);

    std::deque<TCPUser*> mActiveCloseList;
};

ActiveNetClose* G_ActiveNetClose();

} // namespace nsl

#endif // NSL_ACTIVENETCLOSE_H_
