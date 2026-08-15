# _ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader

`CPacketTranslater::OnGuildRequestGuildBoardWrite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8086af6` | `0x2b7` | `0x807c9b8` | `0x2c2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,170 +1,170 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x110,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+sub    $0x100,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x4f>
 movl   $0x1cd3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2ad>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x10(%ebp)
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b8>
+mov    0x8(%ebp),%eax
 mov    0x12(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
 mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0xb9>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0xae>
 movl   $0x1cdd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2ad>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b8>
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x120>
+je     <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x115>
 movl   $0x1ce4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2ad>
-lea    -0x100(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b8>
+lea    -0xf8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_DB_Load_Request_Guild_Board_WriteC1Ev>
+mov    0x8(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0xed(%ebp)
+mov    0x8(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0xe9(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0xe5(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x18,%eax
+movl   $0x78,0x8(%esp)
+mov    %eax,0x4(%esp)
+lea    -0xf8(%ebp),%eax
+add    $0x17,%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
+lea    -0xf8(%ebp),%eax
+lea    0x9b(%eax),%edx
+mov    0x8(%ebp),%eax
+movzbl 0x16(%eax),%eax
+mov    %al,(%edx)
+lea    -0xf8(%ebp),%eax
+lea    0x9c(%eax),%edx
+mov    0x8(%ebp),%eax
+movzbl 0x17(%eax),%eax
+mov    %al,(%edx)
 mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xf5(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xf1(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0xed(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x16(%eax),%eax
-mov    %al,-0x65(%ebp)
-mov    -0x14(%ebp),%eax
-movzbl 0x17(%eax),%eax
-mov    %al,-0x64(%ebp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1e,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x100(%ebp),%eax
+lea    -0xf8(%ebp),%eax
 add    $0x9e,%eax
-mov    %eax,(%esp)
-call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
-add    $0x18,%eax
-movl   $0x78,0x8(%esp)
-mov    %eax,0x4(%esp)
-lea    -0x100(%ebp),%eax
-add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x100(%ebp),%edx
+lea    -0xf8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2ad>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b8>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x253>
+jne    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x25e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1cf8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardWrite Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x24c>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x257>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2ad>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b8>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1cfd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildRequestGuildBoardWrite Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2a8>
+jmp    <T> <_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader+0x2b3>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x110,%esp
+add    $0x100,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildRequestGuildBoardWrite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnGuildRequestGuildBoardWriteEP12PacketHeader
               (PacketHeader *param_1)

{
  void *__src;
  CServerHandler *this;
  Packet_DB_Load_Request_Guild_Board_Write local_104 [11];
  undefined4 local_f9;
  undefined4 local_f5;
  undefined4 local_f1;
  undefined1 auStack_ed [132];
  PacketHeader local_69;
  PacketHeader local_68;
  undefined1 auStack_66 [30];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  CUser *local_20;
  int local_1c;
  PacketHeader *local_18;
  CApplication *local_14;
  
  local_18 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08086b26 to 08086cc7 has its CatchHandler @ 08086ccd */
    CMyFileLog::CMyFileLog(local_48,"OnGuildRequestGuildBoardWrite",0x1cd3);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard",
               "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == m_pclApp");
  }
  else {
    local_14 = m_pclApp + 0x10;
    local_20 = (CUser *)CUserManager::FindUser_CharNo((uint)local_14);
    if (local_20 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnGuildRequestGuildBoardWrite",0x1cdd);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildBoard",
                 "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclUser");
    }
    else {
      local_1c = CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
      if (local_1c == 0) {
        CMyFileLog::CMyFileLog(local_38,"OnGuildRequestGuildBoardWrite",0x1ce4);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/GuildBoard",
                   "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclGuild");
      }
      else {
        Packet_DB_Load_Request_Guild_Board_Write::Packet_DB_Load_Request_Guild_Board_Write
                  (local_104);
        local_f9 = *(undefined4 *)(local_18 + 10);
        local_f5 = *(undefined4 *)(local_18 + 0xe);
        local_f1 = *(undefined4 *)(local_18 + 0x12);
        local_69 = local_18[0x16];
        local_68 = local_18[0x17];
        __src = (void *)CUser::GetCharName(local_20);
        memcpy(auStack_66,__src,0x1e);
        memcpy(auStack_ed,local_18 + 0x18,0x78);
        this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
        CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(this,(PacketHeader *)local_104)
        ;
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5191 行）：

```cpp
void CPacketTranslater::OnGuildRequestGuildBoardWrite(PacketHeader* pkt)
{
    try
    {
        if (m_pclApp == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1cd3,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == m_pclApp");
            return;
        }
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(
            ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_charNo);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1cdd,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclUser");
            return;
        }
        CGuild* guild;
        if ((guild = (&m_pclApp->m_guildManager)->FindGuild(
                 ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_guildKey)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x1ce4,"./log/GuildBoard",
                "CPacketTranslater::OnGuildRequestGuildBoardWrite : 0 == pclGuild");
            return;
        }
        Packet_DB_Load_Request_Guild_Board_Write dbPkt;
        dbPkt.m_b = ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_boardNo;
        dbPkt.m_c = ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_guildKey;
        dbPkt.m_d = ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_charNo;
        memcpy(&dbPkt.m_info, ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_info, 0x78);
        *(unsigned char*)((char*)&dbPkt + 0x9b) = ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_field16;
        *(unsigned char*)((char*)&dbPkt + 0x9c) = ((Packet_Guild_Request_Guild_Board_Write*)pkt)->m_field17;
        memcpy((char*)&dbPkt + 0x9e, user->GetCharName(), 0x1e);
        m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnGuildRequestGuildBoardWrite Exception Break", 0x1cf8, 0x1cfd);
}
```
