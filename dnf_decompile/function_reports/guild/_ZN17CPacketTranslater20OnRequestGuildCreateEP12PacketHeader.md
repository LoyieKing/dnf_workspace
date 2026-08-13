# _ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader

`CPacketTranslater::OnRequestGuildCreate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807f108` | `0x38c` | `0x80754f2` | `0x380` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,226 +1,220 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0xd0,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x55>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x4f>
 movl   $0x10d8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
-mov    -0x10(%ebp),%eax
+lea    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb9>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0xb8>
 movl   $0x10df,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_Reply_Guild_CreateC1Ev>
-mov    -0x10(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,-0x57(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x53(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetGuildKeyEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x118>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x111>
 movl   $0x20,-0x4f(%ebp)
-movzwl -0x5f(%ebp),%eax
-movzwl %ax,%edx
 lea    -0x61(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+movl   $0x2d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x155>
+je     <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x14b>
 movl   $0x1,-0x4f(%ebp)
-movzwl -0x5f(%ebp),%eax
-movzwl %ax,%edx
 lea    -0x61(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+movl   $0x2d,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
 lea    -0xbd(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_DBMW_Request_Guild_CreateC1Ev>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface10GetGroupNoEv>
 mov    %al,-0xb3(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser7GetDBIDEv>
 mov    %eax,-0xb2(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0xae(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xbd(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetJobEv>
 mov    %al,-0x8c(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGrowthTypeEv>
 mov    %al,-0x8b(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 mov    %al,-0x8a(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetSexEv>
 mov    %al,-0x89(%ebp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser6GetSsnEv>
 movl   $0x2,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xbd(%ebp),%eax
 add    $0x35,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xbd(%ebp),%eax
 add    $0x38,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
 add    $0x25,%eax
 movl   $0xc,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0xbd(%ebp),%eax
 add    $0x4f,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0xbd(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler11GetDBServerEv>
 movl   $0x5c,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x328>
+jne    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x31c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x1110,0x8(%esp)
+movl   $"OnRequestGuildCreate",0x4(%esp)
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x1110,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildCreate Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x321>
+lea    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x315>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x382>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x376>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1115,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x37d>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader+0x371>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xd0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestGuildCreate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnRequestGuildCreateEP12PacketHeader
               (PacketHeader *param_1)

{
  int iVar1;
  CServerInterface *pCVar2;
  void *pvVar3;
  CServerHandler *this;
  Packet_DBMW_Request_Guild_Create local_c1 [10];
  undefined1 local_b7;
  undefined4 local_b6;
  undefined4 local_b2;
  undefined1 auStack_ae [30];
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 auStack_8c [3];
  undefined1 auStack_89 [23];
  undefined1 auStack_72 [13];
  Packet_Reply_Guild_Create local_65 [2];
  ushort local_63;
  undefined4 local_5b;
  undefined4 local_57;
  undefined4 local_53;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  CUser *local_18;
  PacketHeader *local_14;
  
  local_14 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 0807f138 to 0807f3ae has its CatchHandler @ 0807f3b4 */
    CMyFileLog::CMyFileLog(local_38,"OnRequestGuildCreate",0x10d8);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_38,"./log/GuildModify",
               "CPacketTranslater::OnRequestGuildCreate : 0 == m_pclApp");
  }
  else {
    local_18 = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
    if (local_18 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_30,"OnRequestGuildCreate",0x10df);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/GuildModify",
                 "CPacketTranslater::OnRequestGuildCreate : 0 == pclUser");
    }
    else {
      Packet_Reply_Guild_Create::Packet_Reply_Guild_Create(local_65);
      local_5b = *(undefined4 *)(local_14 + 10);
      local_57 = CUser::GetIdByChannel(local_18);
      iVar1 = CUser::GetGuildKey(local_18);
      if (iVar1 == 0) {
        iVar1 = CUser::GetGameServer(local_18);
        if (iVar1 == 0) {
          local_53 = 1;
          CUser::SendToGameserver(local_18,(char *)local_65,(uint)local_63);
        }
        else {
          Packet_DBMW_Request_Guild_Create::Packet_DBMW_Request_Guild_Create(local_c1);
          pCVar2 = (CServerInterface *)CUser::GetGameServer(local_18);
          local_b7 = CServerInterface::_ZN16CServerInterface10GetGroupNoEv(pCVar2);
          local_b6 = CUser::GetDBID(local_18);
          local_b2 = CUser::GetUniqCharNo(local_18);
          pvVar3 = (void *)CUser::GetCharName(local_18);
          memcpy(auStack_ae,pvVar3,0x1d);
          local_90 = CUser::GetJob(local_18);
          local_8f = CUser::GetGrowthType(local_18);
          local_8e = CUser::GetLevel(local_18);
          local_8d = CUser::GetSex(local_18);
          pvVar3 = (void *)CUser::GetSsn(local_18);
          memcpy(auStack_8c,pvVar3,2);
          memcpy(auStack_89,local_14 + 0xe,0x16);
          memcpy(auStack_72,local_14 + 0x25,0xc);
          this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
          pCVar2 = (CServerInterface *)CServerHandler::GetDBServer(this);
          CServerInterface::_ZN16CServerInterface12SendToServerEPci(pCVar2,(char *)local_c1,0x5c);
        }
      }
      else {
        local_53 = 0x20;
        CUser::SendToGameserver(local_18,(char *)local_65,(uint)local_63);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3947 行）：

```cpp
void CPacketTranslater::OnRequestGuildCreate(PacketHeader* pkt)
{
    try
    {
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x10d8, "./log/GuildModify", "CPacketTranslater::OnRequestGuildCreate : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = ((PTL_RequestGuildCreatePkt*)pkt)->m_charNo;
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x10df, "./log/GuildModify", "CPacketTranslater::OnRequestGuildCreate : 0 == pclUser");
        return;
    }
    Packet_Reply_Guild_Create reply;
    reply.m_charNo = charNo;
    reply.m_channel = user->GetIdByChannel();
    if (user->GetGuildKey() != 0)
    {
        reply.m_result = 0x20;
        user->SendToGameserver((char*)&reply, 0x2d);
        return;
    }
    if (user->GetGameServer() == 0)
    {
        reply.m_result = 1;
        user->SendToGameserver((char*)&reply, 0x2d);
        return;
    }
    Packet_DBMW_Request_Guild_Create dbPkt;
    dbPkt.m_group = user->GetGameServer()->GetGroupNo();
    dbPkt.m_dbid = user->GetDBID();
    dbPkt.m_charNo = user->GetUniqCharNo();
    memcpy(dbPkt.m_name, user->GetCharName(), 0x1d);
    dbPkt.m_job = user->GetJob();
    dbPkt.m_growth = user->GetGrowthType();
    dbPkt.m_level = user->GetLevel();
    dbPkt.m_sex = user->GetSex();
    memcpy(dbPkt.m_ssn, user->GetSsn(), 2);
    memcpy(dbPkt.m_guildName, ((PTL_RequestGuildCreatePkt*)pkt)->m_guildName, 0x16);
    memcpy(dbPkt.m_extra, ((PTL_RequestGuildCreatePkt*)pkt)->m_extra, 0xc);
    m_pclApp->Get_ServerHandler()->GetDBServer()->SendToServer((char*)&dbPkt, 0x5c);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnRequestGuildCreate", 0x1110);
        log("./log/Except", "CPacketTranslater::OnRequestGuildCreate Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1115);
        log("./log/Except", "CPacketTranslater::OnRequestGuildCreate Exception Break\n");
    }
}
```
