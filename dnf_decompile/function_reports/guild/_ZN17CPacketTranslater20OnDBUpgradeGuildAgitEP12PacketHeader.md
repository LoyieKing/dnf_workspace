# _ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader

`CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80834ae` | `0x232` | `0x80795e2` | `0x21d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
-movl   $0x0,-0x24(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x54>
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x53>
 movl   $0x17a8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x215>
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xbd>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xb6>
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x17b2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x215>
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xee>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x24(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xf5>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xfa>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x139>
+je     <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0xe8>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x124>
 movl   $0x17b9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
-mov    -0x24(%ebp),%eax
+nop
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x215>
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild19SetGuildAgitLevelUpEv>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26SendGuildAgitInfoToMembersEv>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x215>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1d0>
+jne    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1bb>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x17c5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBUpgradeGuildAgit Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1c9>
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x1b4>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x22a>
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x215>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x17ca,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBUpgradeGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x225>
+jmp    <T> <_ZN17CPacketTranslater20OnDBUpgradeGuildAgitEP12PacketHeader+0x210>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
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

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4245 行）：

```cpp
void CPacketTranslater::OnDBUpgradeGuildAgit(PacketHeader* pkt)
{
    Packet_DB_Upgrade_Guild_Agit_Reply* pb = (Packet_DB_Upgrade_Guild_Agit_Reply*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x17a8, "./log/Except", "CPacketTranslater::OnDBUpgradeGuildAgit : 0 == m_pclApp");
            return;
        }
        if (pb->m_field12 != 0)
        {
            DNF_LOG_SCOPE_LINE(0x17b2,"./log/GuildAgit",
                "CPacketTranslater::OnDBUpgradeGuildAgit / Failure! Upgrade Guild Agit(Guild No : %d, Master No : %d, Reason : %d)",
                pb->m_guildKey, pb->m_charNo, pb->m_field12);
            return;
        }
        {
            unsigned int guildKey = pb->m_guildKey;
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
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
        }
        return;
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnDBUpgradeGuildAgit Exception Break", 0x17c5, 0x17ca);
}
```
