# _ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader

`CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80834ae` | `0x232` | `0x8079520` | `0x143` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x6c,%esp
-movl   $0x0,-0x24(%ebp)
+sub    $0x58,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x54>
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x50>
 movl   $0x17a8,0x8(%esp)
 movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x141>
+mov    -0x14(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xbd>
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x17b2,0x8(%esp)
-movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xe7>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xee>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xf5>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xfa>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x139>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x96>
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xcf>
 movl   $0x17b9,0x8(%esp)
 movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild19SetGuildAgitLevelUpEv>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1d0>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x17c5,0x8(%esp)
-movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBUpgradeGuildAgit Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1c9>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x17ca,0x8(%esp)
-movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBUpgradeGuildAgit Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x225>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
+nop
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x141>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x6c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+call   <T> <_ZN6CGuild19SetGuildAgitLevelUpEv>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x141>
+movl   $0x17b2,0x8(%esp)
+movl   $"OnDBUpgradeGuildAgit",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x14(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%ecx
+mov    -0x14(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_28 = (CGuild *)0x0;
  if (m_pclApp == 0) {
                    /* try { // try from 080834dd to 080835fc has its CatchHandler @ 08083602 */
    CMyFileLog::CMyFileLog(local_50,"OnDBUpgradeGuildAgit",0x17a8);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_50,"./log/Except","CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp");
    return;
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 0x12) == 0) {
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290),
       local_28 == (CGuild *)0x0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      CMyFileLog::CMyFileLog(local_40,"OnDBUpgradeGuildAgit",0x17b9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildAgit","CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild"
                );
    }
    else {
      CGuild::SetGuildAgitLevelUp(local_28);
      CGuild::SendGuildAgitInfoToMembers(local_28);
    }
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_48,"OnDBUpgradeGuildAgit",0x17b2);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/GuildAgit",
             "CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)"
             ,uVar3,uVar2,uVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4090 行）：

```cpp
void CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x17a8, "./log/Except", "CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp");
        return;
    }
    if (*(int*)(pb + 0x12) == 0)
    {
        unsigned int guildKey = *(unsigned int*)(pb + 0xa);
        CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
        if (guildKey == 0 || guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x17b9,"./log/GuildAgit",
                "CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild");
        }
        else
        {
            guild->SetGuildAgitLevelUp();
            guild->SendGuildAgitInfoToMembers();
        }
        return;
    }
    DNF_LOG_SCOPE_LINE(0x17b2,"./log/GuildAgit",
        "CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
        *(unsigned int*)(pb + 0xa), *(unsigned int*)(pb + 0xe), *(unsigned int*)(pb + 0x12));
}
```
