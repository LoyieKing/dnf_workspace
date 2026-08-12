# _ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader

`CPacketTranslater::OnDBLoadReplyGuildBoardDelete(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8087328` | `0x2ba` | `0x807c752` | `0x1f3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,178 +1,129 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x53>
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x51>
 movl   $0x1d84,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2b2>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x1ed>
+mov    -0x1c(%ebp),%eax
+add    $0x10,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0xb7>
 movl   $0x1d8e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2b2>
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x1ed>
+mov    -0x1c(%ebp),%eax
+add    $0xc,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x11e>
+je     <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x125>
 movl   $0x1d95,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2b2>
-mov    -0x24(%ebp),%eax
-movzwl 0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x1ed>
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x15d>
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0x14(%eax),%ebx
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x162>
+mov    -0x1c(%ebp),%eax
+add    $0x14,%eax
+mov    (%eax),%ebx
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %edi,0xc(%esp)
-mov    %esi,0x8(%esp)
+mov    -0x18(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard20deleteGuildBoardDataEjjj>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x193>
+jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x198>
 movl   $0x1d9e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete : Delete Fail!!",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x70(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Guild_Reply_Guild_Board_DeleteC1Ev>
-mov    -0x24(%ebp),%eax
-movzwl 0xa(%eax),%eax
-mov    %ax,-0x66(%ebp)
-mov    -0x2c(%ebp),%eax
+lea    -0x50(%ebp),%eax
+add    $0xa,%eax
+mov    -0x1c(%ebp),%edx
+add    $0xa,%edx
+movzwl (%edx),%edx
+mov    %dx,(%eax)
+lea    -0x50(%ebp),%eax
+lea    0xc(%eax),%ebx
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x64(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x50(%ebp),%eax
+lea    0x10(%eax),%ebx
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x60(%ebp)
-lea    -0x70(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x50(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2b2>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x258>
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
-movl   $0x1daa,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x251>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2b2>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1daf,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardDelete Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader+0x2ad>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x7c,%esp
+add    $0x64,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadReplyGuildBoardDelete(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnDBLoadReplyGuildBoardDeleteEP12PacketHeader
               (PacketHeader *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CGuildBoard *this;
  Packet_Guild_Reply_Guild_Board_Delete local_74 [10];
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  CMyFileLog local_60 [8];
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  local_28 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08087356 to 080874fe has its CatchHandler @ 08087504 */
    CMyFileLog::CMyFileLog(local_60,"OnDBLoadReplyGuildBoardDelete",0x1d84);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_60,"./log/GuildBoard",
               "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == m_pclApp");
  }
  else {
    local_24 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_58,"OnDBLoadReplyGuildBoardDelete",0x1d8e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildBoard",
                 "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclUser");
    }
    else {
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_50,"OnDBLoadReplyGuildBoardDelete",0x1d95);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/GuildBoard",
                   "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclGuild");
      }
      else {
        if (*(short *)(local_28 + 10) == 0) {
          uVar1 = *(uint *)(local_28 + 0x10);
          uVar2 = *(uint *)(local_28 + 0xc);
          uVar3 = *(uint *)(local_28 + 0x14);
          this = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
          CGuildBoard::_ZN11CGuildBoard20deleteGuildBoardDataEjjj(this,uVar3,uVar2,uVar1);
        }
        else {
          CMyFileLog::CMyFileLog(local_48,"OnDBLoadReplyGuildBoardDelete",0x1d9e);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/GuildBoard",
                     "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : Delete Fail!!");
        }
        Packet_Guild_Reply_Guild_Board_Delete::Packet_Guild_Reply_Guild_Board_Delete(local_74);
        local_6a = *(undefined2 *)(local_28 + 10);
        local_68 = CUser::GetIdByChannel(local_30);
        local_64 = CUser::GetUniqCharNo(local_30);
        CUser::SendTcpGameserver(local_30,(PacketHeader *)local_74);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5224 行）：

```cpp
void CPacketTranslater::OnDBLoadReplyGuildBoardDelete(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d84,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0x10);
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d8e,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xc);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d95,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : 0 == pclGuild");
        return;
    }
    if (*(short*)(pb + 0xa) == 0)
    {
        guild->GetGuildBoard()->deleteGuildBoardData(*(unsigned int*)(pb + 0x14), guildKey,
                                                     charNo);
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0x1d9e,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardDelete : Delete Fail!!");
    }
    Packet_Guild_Reply_Guild_Board_Delete reply;
    *(unsigned short*)((char*)&reply + 0xa) = *(unsigned short*)(pb + 0xa);
    *(unsigned int*)((char*)&reply + 0xc) = user->GetIdByChannel();
    *(unsigned int*)((char*)&reply + 0x10) = user->GetUniqCharNo();
    user->SendTcpGameserver(&reply);
}
```
