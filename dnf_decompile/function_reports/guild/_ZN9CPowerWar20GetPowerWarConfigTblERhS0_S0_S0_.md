# _ZN9CPowerWar20GetPowerWarConfigTblERhS0_S0_S0_

`CPowerWar::GetPowerWarConfigTbl(unsigned char&, unsigned char&, unsigned char&, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7094` | `0x42` | `0x809d496` | `0x46` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x14(%eax),%edx
 mov    0x18(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
-mov    0x10(%eax),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
 lea    0x1(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
 mov    -0xc(%ebp),%eax
-mov    0xc(%eax),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %dl,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::GetPowerWarConfigTbl(unsigned char&, unsigned char&, unsigned char&, unsigned char&)
    */

void __thiscall
CPowerWar::_ZN9CPowerWar20GetPowerWarConfigTblERhS0_S0_S0_
          (CPowerWar *this,uchar *param_1,uchar *param_2,uchar *param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = CScheduler::_ZN10CScheduler19GetNextScheduleTimeERhS0_
                    ((CScheduler *)(this + 0x14),param_3,param_4);
  *param_1 = (char)*(undefined4 *)(iVar1 + 0x10) + '\x01';
  *param_2 = (uchar)*(undefined4 *)(iVar1 + 0xc);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/PowerWar.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 619 个文件*
