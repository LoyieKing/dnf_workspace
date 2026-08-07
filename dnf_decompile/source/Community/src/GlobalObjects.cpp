//
// 全局对象定义（与原始二进制的 TU 布局对齐）：
// 原始二进制中 g_user_manager 单独位于一个 TU（_GLOBAL__I_g_user_manager 桩，
// 构造 ios_base::Init + CUserManager），与 UserManager.cpp（首函数 enter_user，
// 仅含 __ioinit 的 _GLOBAL__I__ZN12CUserManager10enter_user... 桩）分开。
//

#include <iostream>

#include "UserManager.h"
#include "User.h"

#include "DNFFunctionLib.h"
#include "CommonConstants.h"

CUserManager g_user_manager = CUserManager();
