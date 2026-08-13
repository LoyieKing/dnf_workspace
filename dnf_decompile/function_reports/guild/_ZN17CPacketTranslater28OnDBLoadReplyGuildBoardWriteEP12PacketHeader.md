# _ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader

`CPacketTranslater::OnDBLoadReplyGuildBoardWrite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8086dae` | `0x338` | `0x807c17a` | `0x23b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,202 +1,133 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x6fc,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+sub    $0x6e8,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x56>
+jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x4d>
 movl   $0x1d0c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x5c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x239>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0xba>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0xb1>
 movl   $0x1d16,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x239>
+mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x121>
+je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x11d>
 movl   $0x1d1d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-mov    -0x24(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x239>
+mov    0x8(%ebp),%eax
 movzwl 0xa(%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x1bd>
-mov    -0x24(%ebp),%eax
-lea    0x14(%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%ebx
-mov    -0x28(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x1a7>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %edi,0x14(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x14,%eax
+mov    %eax,0x14(%esp)
 movl   $0x1,0x10(%esp)
-mov    -0x28(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo>
-mov    -0x24(%ebp),%eax
-mov    0x94(%eax),%eax
+mov    0x8(%ebp),%eax
+mov    0xb9(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32c>
-mov    -0x24(%ebp),%eax
-mov    0x10(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x10(%esp)
+je     <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x239>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
 movl   $0x232e,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-lea    -0x6e6(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x239>
+lea    -0x6c6(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN30Packet_Guild_Reply_Guild_BoardC1Ev>
-movw   $0x232e,-0x6da(%ebp)
-mov    -0x24(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzwl 0xa(%eax),%eax
-mov    %ax,-0x6dc(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %ax,-0x6bc(%ebp)
+movw   $0x232e,-0x6ba(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x6d7(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x6b7(%ebp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x6d3(%ebp)
-lea    -0x6e6(%ebp),%eax
+mov    %eax,-0x6b3(%ebp)
+lea    -0x6c6(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 movl   $0x1d37,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite : Write Fail!!",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x2d0>
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
-movl   $0x1d3e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x2c9>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1d43,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardWrite Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x325>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader+0x32d>
-nop
-add    $0x6fc,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadReplyGuildBoardWrite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnDBLoadReplyGuildBoardWriteEP12PacketHeader
               (PacketHeader *param_1)

{
  STGuildBoardDBInfo *pSVar1;
  uint uVar2;
  uint uVar3;
  CGuildBoard *pCVar4;
  Packet_Guild_Reply_Guild_Board local_6ea [10];
  undefined2 local_6e0;
  undefined2 local_6de;
  undefined4 local_6db;
  undefined4 local_6d7;
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
                    /* try { // try from 08086ddf to 08086ffc has its CatchHandler @ 08087002 */
    CMyFileLog::CMyFileLog(local_60,"OnDBLoadReplyGuildBoardWrite",0x1d0c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_60,"./log/GuildBoard",
               "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == m_pclApp");
  }
  else {
    local_24 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_58,"OnDBLoadReplyGuildBoardWrite",0x1d16);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_58,"./log/GuildBoard",
                 "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclUser");
    }
    else {
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_50,"OnDBLoadReplyGuildBoardWrite",0x1d1d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_50,"./log/GuildBoard",
                   "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclGuild");
      }
      else if (*(short *)(local_28 + 10) == 0) {
        pSVar1 = (STGuildBoardDBInfo *)(local_28 + 0x14);
        uVar2 = *(uint *)(local_28 + 0x10);
        uVar3 = *(uint *)(local_28 + 0xc);
        pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
        CGuildBoard::_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo
                  (pCVar4,uVar3,uVar2,local_2c,1,pSVar1);
        if (*(int *)(local_28 + 0x94) != 0) {
          uVar2 = *(uint *)(local_28 + 0x10);
          uVar3 = *(uint *)(local_28 + 0xc);
          pCVar4 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
          CGuildBoard::_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser
                    (pCVar4,uVar3,uVar2,0x232e,local_30);
        }
      }
      else {
        Packet_Guild_Reply_Guild_Board::Packet_Guild_Reply_Guild_Board(local_6ea);
        local_6de = 0x232e;
        local_6e0 = *(undefined2 *)(local_28 + 10);
        local_6db = CUser::GetIdByChannel(local_30);
        local_6d7 = CUser::GetUniqCharNo(local_30);
        CUser::SendTcpGameserver(local_30,(PacketHeader *)local_6ea);
        CMyFileLog::CMyFileLog(local_48,"OnDBLoadReplyGuildBoardWrite",0x1d37);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/GuildBoard",
                   "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : Write Fail!!");
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5768 行）：

```cpp
void CPacketTranslater::OnDBLoadReplyGuildBoardWrite(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d0c,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = ((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_charNo;
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d16,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclUser");
        return;
    }
    unsigned int guildKey = ((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_guildKey;
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1d1d,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : 0 == pclGuild");
        return;
    }
    if (((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_result == 0)
    {
        CGuildBoard* board = guild->GetGuildBoard();
        board->setGuildBoardData(guildKey, charNo, guild, 1,
                                 (STGuildBoardDBInfo*)&((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_info);
        if (((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_field94 != 0)
        {
            board->sendGuildBoardData(guildKey, charNo, 0x232e, user);
        }
    }
    else
    {
        Packet_Guild_Reply_Guild_Board reply;
        reply.m_a = ((PTL_DBReplyGuildBoardWritePkt*)pkt)->m_result;
        reply.m_c = 0x232e;
        reply.m_f = user->GetIdByChannel();
        reply.m_13 = user->GetUniqCharNo();
        user->SendTcpGameserver(&reply);
        DNF_LOG_SCOPE_LINE(0x1d37,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardWrite : Write Fail!!");
    }
}
```
