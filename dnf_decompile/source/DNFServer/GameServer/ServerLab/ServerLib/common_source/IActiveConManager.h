#ifndef NSL_IACTIVECONMANAGER_H_
#define NSL_IACTIVECONMANAGER_H_

namespace nsl {

class ActiveConManager;

class IActiveConManager
{
public:
    IActiveConManager();
    ActiveConManager* getActiveConManager();

    ActiveConManager* activeConManager_;
};

} // namespace nsl

#endif // NSL_IACTIVECONMANAGER_H_
