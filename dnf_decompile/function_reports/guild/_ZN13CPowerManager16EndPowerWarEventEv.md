# _ZN13CPowerManager16EndPowerWarEventEv

`CPowerManager::EndPowerWarEvent()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a3dd6` | `0x10c` | `0x809a0a4` | `0x10c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,65 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0xd5,0x8(%esp)
 movl   $"EndPowerWarEvent",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPowerManager::EndPowerWarEvent TOP",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager17ComputeWinnerSideEv>
 movsbl %al,%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13SetWinnerSideEc>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16RewardBonusPointEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager19SaveDBPowerWarPointEv>
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16CalcPowerWarRankEb>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager14PrintDebugInfoEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager18SaveDBPowerWarRankEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager16SendPowerWarInfoEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager19SendPowerWarEndInfoEv>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager13CleanPowerWarEv>
 mov    0x8(%ebp),%eax
 add    $0x14c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CPowerWar10resetEventEv>
 movl   $0xfd,0x8(%esp)
 movl   $"EndPowerWarEvent",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPowerManager::EndPowerWarEvent BOTTOM",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::EndPowerWarEvent() */

void __thiscall CPowerManager::_ZN13CPowerManager16EndPowerWarEventEv(CPowerManager *this)

{
  char cVar1;
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [16];
  
  CMyFileLog::CMyFileLog(local_1c,"EndPowerWarEvent",0xd5);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/Power","CPowerManager::EndPowerWarEvent TOP");
  cVar1 = ComputeWinnerSide(this);
  _ZN13CPowerManager13SetWinnerSideEc(this,cVar1);
  RewardBonusPoint(this);
  SaveDBPowerWarPoint(this);
  _ZN13CPowerManager16CalcPowerWarRankEb(this,true);
  RewardGuildPowerWarPoint(this);
  _ZN13CPowerManager14PrintDebugInfoEv(this);
  SaveDBPowerWarRank(this);
  SendPowerWarInfo(this);
  SendPowerWarEndInfo(this);
  _ZN13CPowerManager13CleanPowerWarEv(this);
  CPowerWar::resetEvent((CPowerWar *)(this + 0x14c));
  CMyFileLog::CMyFileLog(local_14,"EndPowerWarEvent",0xfd);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/Power","CPowerManager::EndPowerWarEvent BOTTOM");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 218 行）：

```cpp
void CPowerManager::EndPowerWarEvent()
{
    CMyFileLog logTop("EndPowerWarEvent", 0xd5);
    logTop("./log/Power", "CPowerManager::EndPowerWarEvent TOP");
    SetWinnerSide(ComputeWinnerSide());
    RewardBonusPoint();
    SaveDBPowerWarPoint();
    CalcPowerWarRank(true);
    RewardGuildPowerWarPoint();
    PrintDebugInfo();
    SaveDBPowerWarRank();
    SendPowerWarInfo();
    SendPowerWarEndInfo();
    CleanPowerWar();
    ((CPowerWar*)((char*)this + 0x14c))->CPowerWar::resetEvent();
    CMyFileLog logBottom("EndPowerWarEvent", 0xfd);
    logBottom("./log/Power", "CPowerManager::EndPowerWarEvent BOTTOM");
}
```
