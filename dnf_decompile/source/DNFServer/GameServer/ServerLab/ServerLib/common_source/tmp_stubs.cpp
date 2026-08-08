#include <functional>

#include "ServiceFactory.h"
#include "ThreadLock.h"
#include "Message.h"
#include "MsgCell.h"

namespace nsl {

ServiceFactory* pApp = 0;
bool is_config_changed = false;
bool is_config_reloaded = false;

} // namespace nsl
