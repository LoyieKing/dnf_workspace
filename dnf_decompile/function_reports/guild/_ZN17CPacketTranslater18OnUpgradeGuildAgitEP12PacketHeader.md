# _ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader

`CPacketTranslater::OnUpgradeGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8083184` | `0x32a` | `0x80792ce` | `0x2fe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,205 +1,191 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
-movl   $0x0,-0x24(%ebp)
+sub    $0x7c,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x57>
+jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x53>
 movl   $0x1767,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnUpgradeGuildAgit : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x8e>
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
-jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x95>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x9a>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0xd9>
+je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x85>
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0xc0>
 movl   $0x1770,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x144>
+je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x1d4>
 mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%esi
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x192>
 mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild12GetGuildFundEv>
+mov    -0x28(%ebp),%edx
+mov    0x16(%edx),%edx
+cmp    %edx,%eax
+setb   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x14c>
+movl   $0x1783,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x50(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
+mov    -0x28(%ebp),%eax
+mov    0x16(%eax),%edi
+mov    -0x28(%ebp),%eax
+mov    0x12(%eax),%esi
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
+mov    %edi,0x14(%esp)
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
+movl   $0x177c,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x24(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild already have guild agit",0x8(%esp)
+movl   $"./log/GuildAgit",0x4(%esp)
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%ebx
 movl   $0x1776,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",0x8(%esp)
 movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16IsExistGuildAgitEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x19b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x177c,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDeleteGuildAgit : %d guild already have guild agit",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
-mov    -0x20(%ebp),%eax
-mov    0x16(%eax),%ebx
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild12GetGuildFundEv>
-cmp    %eax,%ebx
-seta   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x1fa>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0x1783,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",0x8(%esp)
-movl   $"./log/GuildAgit",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
-mov    -0x20(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    -0x6c(%ebp),%edx
-mov    %edx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %esi,0xc(%esp)
-mov    %ebx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild16UpgradeGuildAgitEP14CServerHandlerjjjj>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2c5>
+jne    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x29c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1790,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnUpgradeGuildAgit Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2be>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x295>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31f>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1795,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnUpgradeGuildAgit Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x31a>
+jmp    <T> <_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader+0x2f1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x8c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnUpgradeGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnUpgradeGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  CServerHandler *pCVar9;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  local_28 = (CGuild *)0x0;
  if (m_pclApp != (CApplication *)0x0) {
    local_24 = param_1;
    if ((*(int *)(param_1 + 10) == 0) ||
       (local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290))
       , local_28 == (CGuild *)0x0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      CMyFileLog::CMyFileLog(local_58,"OnUpgradeGuildAgit",6000);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildAgit","CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
    }
    else {
      cVar7 = CGuild::IsGuildMaster(local_28,*(uint *)(local_24 + 0xe));
      if (cVar7 == '\x01') {
        cVar7 = CGuild::IsExistGuildAgit(local_28);
        if (cVar7 == '\x01') {
          uVar3 = *(uint *)(local_24 + 0x16);
          uVar8 = CGuild::GetGuildFund(local_28);
          if (uVar8 < uVar3) {
            uVar1 = *(undefined4 *)(local_24 + 10);
            CMyFileLog::CMyFileLog(local_40,"OnUpgradeGuildAgit",0x1783);
            CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                      (local_40,"./log/GuildAgit",
                       "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",uVar1);
          }
          else {
            uVar3 = *(uint *)(local_24 + 0x16);
            uVar8 = *(uint *)(local_24 + 0x12);
            uVar4 = *(uint *)(local_24 + 0xe);
            uVar5 = *(uint *)(local_24 + 10);
            pCVar9 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
            CGuild::UpgradeGuildAgit(local_28,pCVar9,uVar5,uVar4,uVar8,uVar3);
          }
        }
        else {
          uVar1 = *(undefined4 *)(local_24 + 10);
          CMyFileLog::CMyFileLog(local_48,"OnUpgradeGuildAgit",0x177c);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/GuildAgit",
                     "CPacketTranslater::OnDeleteGuildAgit : %d guild already have guild agit",uVar1
                    );
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_24 + 10);
        uVar2 = *(undefined4 *)(local_24 + 0xe);
        CMyFileLog::CMyFileLog(local_50,"OnUpgradeGuildAgit",0x1776);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/GuildAgit",
                   "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",uVar2,uVar1
                  );
      }
    }
    return;
  }
                    /* try { // try from 080831b6 to 080833c7 has its CatchHandler @ 080833cd */
  CMyFileLog::CMyFileLog(local_60,"OnUpgradeGuildAgit",0x1767);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_60,"./log/Except","CPacketTranslater::OnUpgradeGuildAgit : 0 == m_pclApp");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 4261 行）：

```cpp
void CPacketTranslater::OnUpgradeGuildAgit(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1767, "./log/Except", "CPacketTranslater::OnUpgradeGuildAgit : 0 == m_pclApp");
            return;
        }
        else
        {
            unsigned int guildKey = ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_guildKey;
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
            if (guildKey == 0 || guild == 0)
            {
                DNF_LOG_SCOPE_LINE(6000, "./log/GuildAgit", "CPacketTranslater::OnCreateGuildAgit : 0 == pclGuild");
            }
            else if (guild->IsGuildMaster(((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_charNo) == 1)
            {
                if (guild->IsExistGuildAgit() == 1)
                {
                    if (guild->GetGuildFund() < ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_fund)
                    {
                        DNF_LOG_SCOPE_LINE(0x1783,"./log/GuildAgit",
                            "CPacketTranslater::OnCreateGuildAgit : %d guild fund shortage",
                            guildKey);
                    }
                    else
                    {
                        guild->UpgradeGuildAgit(m_pclApp->Get_ServerHandler(), guildKey,
                                                ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_charNo,
                                                ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_field12,
                                                ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_fund);
                    }
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x177c,"./log/GuildAgit",
                        "CPacketTranslater::OnDeleteGuildAgit : %d guild already have guild agit",
                        guildKey);
                }
            }
            else
            {
                DNF_LOG_SCOPE_LINE(0x1776,"./log/GuildAgit",
                    "CPacketTranslater::OnCreateGuildAgit : %d is not guild master(g:%d)",
                    ((Packet_Guild_Upgrade_Guild_Agit*)pb)->m_charNo, guildKey);
            }
        }
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnUpgradeGuildAgit Exception Break", 0x1790, 0x1795);
}
```
