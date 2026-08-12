# _ZN13CPowerManager25SaveDBPowerWarPointRewardEv

`CPowerManager::SaveDBPowerWarPointReward()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4b16` | `0x124` | `0x809a902` | `0x125` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,74 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x814,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-test   %al,%al
-je     <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x26>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x2,%al
-jle    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x72>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-movsbl %al,%ebx
+add    $0x184,%eax
+movzbl (%eax),%eax
+mov    %al,-0x19(%ebp)
+cmpb   $0x0,-0x19(%ebp)
+je     <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x24>
+cmpb   $0x2,-0x19(%ebp)
+jle    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x67>
+movsbl -0x19(%ebp),%ebx
 movl   $0x357,0x8(%esp)
 movl   $&_ZZN13CPowerManager25SaveDBPowerWarPointRewardEvE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"invalid winner side income(%d)",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x11b>
+jmp    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x11c>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
 movl   $0x1,-0x14(%ebp)
-jmp    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x10c>
-mov    -0x14(%ebp),%eax
-imul   $0x6c,%eax,%eax
-add    0x8(%ebp),%eax
-add    $0x8,%eax
+jmp    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x10d>
+mov    0x8(%ebp),%eax
+mov    -0x14(%ebp),%edx
+imul   $0x6c,%edx,%edx
+add    $0x8,%edx
+add    %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CPower20GetPowerWarGuildInfoEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo27GetPowerWarPointDBSaveCountEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x108>
-lea    -0x7fb(%ebp),%eax
+je     <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x109>
+lea    -0x803(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_DB_Save_Power_War_Point_RewardC1Ev>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+lea    -0x803(%ebp),%eax
+lea    0xa(%eax),%ebx
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x7f1(%ebp)
-lea    -0x7fb(%ebp),%eax
+mov    %al,(%ebx)
+lea    -0x803(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18CPowerWarGuildInfo25MakePacketDBPowerWarPointEP37Packet_DB_Save_Power_War_Point_Reward>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x7fb(%ebp),%edx
+lea    -0x803(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 addl   $0x1,-0x14(%ebp)
 cmpl   $0x2,-0x14(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN13CPowerManager25SaveDBPowerWarPointRewardEv+0x7e>
 add    $0x814,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SaveDBPowerWarPointReward() */

void __thiscall CPowerManager::_ZN13CPowerManager25SaveDBPowerWarPointRewardEv(CPowerManager *this)

{
  CPowerManager CVar1;
  CServerHandler *pCVar2;
  Packet_DB_Save_Power_War_Point_Reward local_7ff [10];
  undefined1 local_7f5;
  CMyFileLog local_20 [8];
  int local_18;
  CPowerWarGuildInfo *local_14;
  int local_10;
  
  if ((this[0x184] == (CPowerManager)0x0) || ('\x02' < (char)this[0x184])) {
    CVar1 = this[0x184];
    CMyFileLog::CMyFileLog(local_20,"SaveDBPowerWarPointReward",0x357);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_20,"./log/Power","invalid winner side income(%d)",(int)(char)CVar1);
  }
  else {
    for (local_18 = 1; local_18 < 3; local_18 = local_18 + 1) {
      local_14 = (CPowerWarGuildInfo *)
                 CPower::GetPowerWarGuildInfo((CPower *)(this + local_18 * 0x6c + 8));
      local_10 = CPowerWarGuildInfo::GetPowerWarPointDBSaveCount(local_14);
      if (local_10 != 0) {
        Packet_DB_Save_Power_War_Point_Reward::Packet_DB_Save_Power_War_Point_Reward(local_7ff);
        pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
        local_7f5 = CServerHandler::GetServerGroupNo(pCVar2);
        CPowerWarGuildInfo::MakePacketDBPowerWarPoint(local_14,local_7ff);
        pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)(this + 4));
        CServerHandler::SendToDB(pCVar2,(PacketHeader *)local_7ff);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 449 行）：

```cpp
void CPowerManager::SaveDBPowerWarPointReward()
{
    char winnerSide = *(char*)((char*)this + 0x184);
    if (winnerSide == 0 || winnerSide > 2)
    {
        DNF_LOG_SCOPE_LINE(0x357, "./log/Power", "invalid winner side income(%d)", (int)winnerSide);
        return;
    }
    CApplication* app = *(CApplication**)((char*)this + 4);
    for (int side = 1; side < 3; side++)
    {
        CPowerWarGuildInfo* info =
            ((CPower*)((char*)this + side * 0x6c + 8))->GetPowerWarGuildInfo();
        int count = info->GetPowerWarPointDBSaveCount();
        if (count != 0)
        {
            Packet_DB_Save_Power_War_Point_Reward pkt;
            *(unsigned char*)((char*)&pkt + 0xa) =
                app->Get_ServerHandler()->GetServerGroupNo();
            info->MakePacketDBPowerWarPoint(&pkt);
            app->Get_ServerHandler()->SendToDB(&pkt);
        }
    }
}
```
