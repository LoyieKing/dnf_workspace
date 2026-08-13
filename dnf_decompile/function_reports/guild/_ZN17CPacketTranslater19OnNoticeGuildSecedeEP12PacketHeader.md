# _ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader

`CPacketTranslater::OnNoticeGuildSecede(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8072f1e` | `0x39a` | `0x806953c` | `0x396` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,246 +1,244 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x108c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe2>
-lea    -0x39(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xe5>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildSecede : 0 == m_pclApp",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xa7>
-lea    -0x40(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xc2>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x39(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x2b9>
-lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x165>
-lea    -0x5a(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x168>
+lea    -0x4a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Guild_Exp_Book_DeleteC1Ev>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x50(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x4c(%ebp)
+mov    %eax,-0x3c(%ebp)
+mov    -0x28(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,-0x38(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x44(%ebp)
+mov    %eax,-0x34(%ebp)
+lea    -0x4a(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x255>
+lea    -0x60(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN15Packet_No_CacheC1Ev>
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x48(%ebp)
-lea    -0x5a(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x252>
-lea    -0x70(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN15Packet_No_CacheC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x66(%ebp)
+mov    %eax,-0x56(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x62(%ebp)
-movl   $0x1,-0x5e(%ebp)
+mov    %eax,-0x52(%ebp)
+movl   $0x1,-0x4e(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x70(%ebp),%edx
+lea    -0x60(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x66(%ebp)
+mov    %eax,-0x56(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
-mov    %eax,-0x62(%ebp)
-movl   $0x2,-0x5e(%ebp)
+mov    %eax,-0x52(%ebp)
+movl   $0x2,-0x4e(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x70(%ebp),%edx
+lea    -0x60(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
 lea    -0x1083(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21Packet_DBMW_Query_MsgC1Ev>
+movl   $0x4f00,-0x1079(%ebp)
 movl   $0x2,-0x1075(%ebp)
-movl   $0x4f00,-0x1079(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0x12(%eax),%eax
 mov    %eax,0x8(%esp)
 movl   $"upDate charac_info set guild_secede = 1 where charac_no = %u",0x4(%esp)
 lea    -0x1083(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x1083(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 lea    0xa(%eax),%ecx
-mov    -0x24(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
+mov    -0x28(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25NoticeSecedeToGuildMemberEPc>
 movl   $0x0,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x335>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x331>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x2f9,0x8(%esp)
+movl   $"OnNoticeGuildSecede",0x4(%esp)
+lea    -0x68(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-mov    %eax,%ebx
-movl   $0x2f9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildSecede() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32e>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x32a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38f>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2ff,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildSecede() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x38a>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader+0x386>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x108c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildSecede(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnNoticeGuildSecedeEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  uint uVar1;
  CServerHandler *pCVar2;
  Packet_DBMW_Query_Msg local_1087 [10];
  undefined4 local_107d;
  undefined4 local_1079;
  char acStack_1075 [4097];
  Packet_No_Cache local_74 [10];
  undefined4 local_6a;
  uint local_66;
  undefined4 local_62;
  Packet_Guild_Exp_Book_Delete local_5e [10];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  string local_44 [7];
  allocator local_3d [17];
  CGuild *local_2c;
  PacketHeader *local_28;
  CUser *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08072f57 to 08072f5b has its CatchHandler @ 08072fc5 */
    std::string::string(local_44,"CPacketTranslater::OnNoticeGuildSecede : 0 == m_pclApp",local_3d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08072f76 to 08072f7a has its CatchHandler @ 08072f7d */
    CDNFException::CDNFException(this,local_44);
                    /* try { // try from 08072fb4 to 08072fb8 has its CatchHandler @ 08072fbb */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08072ffb to 080731d1 has its CatchHandler @ 080731d7 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  uVar1 = CApplication::Get_UserManager(m_pclApp);
  local_24 = (CUser *)CUserManager::FindUser_CharNo(uVar1);
  if (local_24 == (CUser *)0x0) {
    Packet_No_Cache::_ZN15Packet_No_CacheC2Ev(local_74);
    local_6a = *(undefined4 *)(local_28 + 0xe);
    local_66 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
    local_66 = local_66 & 0xff;
    local_62 = 1;
    pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
              (pCVar2,(PacketHeader *)local_74);
    local_6a = *(undefined4 *)(local_28 + 0xe);
    local_66 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
    local_66 = local_66 & 0xff;
    local_62 = 2;
    pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader
              (pCVar2,(PacketHeader *)local_74);
    Packet_DBMW_Query_Msg::Packet_DBMW_Query_Msg(local_1087);
    local_1079 = 2;
    local_107d = 0x4f00;
    sprintf(acStack_1075,"upDate charac_info set guild_secede = 1 where charac_no = %u",
            *(undefined4 *)(local_28 + 0x12));
    pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(pCVar2,(PacketHeader *)local_1087);
  }
  else {
    Packet_Guild_Exp_Book_Delete::Packet_Guild_Exp_Book_Delete(local_5e);
    local_54 = CUser::GetIdByChannel(local_24);
    local_50 = *(undefined4 *)(local_28 + 0x12);
    local_48 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
    local_48 = local_48 & 0xff;
    local_4c = *(undefined4 *)(local_28 + 0xe);
    CUser::SendTcpGameserver(local_24,(PacketHeader *)local_5e);
  }
  local_2c = (CGuild *)
             CGuildManager::_ZN13CGuildManager11GuildSecedeEjR22ST_Notice_Guild_Secede
                       ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_28 + 10),
                        (ST_Notice_Guild_Secede *)(local_28 + 10));
  if (local_2c != (CGuild *)0x0) {
    CGuild::NoticeSecedeToGuildMember(local_2c,(char *)(local_28 + 10));
    CGuild::SendGuildInfoToMembers(local_2c,false);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1316 行）：

```cpp
void CPacketTranslater::OnNoticeGuildSecede(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildSecede : 0 == m_pclApp")
    char* pb = (char*)pkt;
    try
    {
        CUser* user =
            m_pclApp->Get_UserManager()->FindUser_CharNo(
                ((PTL_NoticeGuildSecedePkt*)pb)->m_charNo);
        if (user != 0)
        {
            Packet_Guild_Exp_Book_Delete expDel;
            expDel.m_channel = user->GetIdByChannel();
            expDel.m_charNo = ((PTL_NoticeGuildSecedePkt*)pb)->m_charNo;
            expDel.m_group = ((PTL_NoticeGuildSecedePkt*)pb)->m_guildKey;
            expDel.m16 = (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
            user->SendTcpGameserver((PacketHeader*)&expDel);
        }
        else
        {
            Packet_No_Cache noCache;
            noCache.ma = ((PTL_NoticeGuildSecedePkt*)pb)->m_guildKey;
            noCache.me = (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
            noCache.m12 = 1;
            m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&noCache);
            noCache.ma = ((PTL_NoticeGuildSecedePkt*)pb)->m_guildKey;
            noCache.me = (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
            noCache.m12 = 2;
            m_pclApp->Get_ServerHandler()->SendTcpGameServerFirst(&noCache);

            Packet_DBMW_Query_Msg query;
            query.m_queryId = 0x4f00;
            query.m_handleIdx = 2;
            sprintf(query.m_data,
                    "upDate charac_info set guild_secede = 1 where charac_no = %u",
                    ((PTL_NoticeGuildSecedePkt*)pb)->m_charNo);
            m_pclApp->Get_ServerHandler()->SendToDB(&query);
        }

        CGuild* guild = (&m_pclApp->m_guildManager)->GuildSecede(
            ((PTL_NoticeGuildSecedePkt*)pb)->m_fieldA,
            *(ST_Notice_Guild_Secede*)(pb + 0xa));
        if (guild != 0)
        {
            guild->NoticeSecedeToGuildMember(pb + 0xa);
            guild->SendGuildInfoToMembers(false);
        }
    }
    catch (std::exception& e)
    {
        CMyFileLog log("OnNoticeGuildSecede", 0x2f9);
        log("./log/Except",
            "CPacketTranslater::OnNoticeGuildSecede() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x2ff);
        log("./log/Except",
            "CPacketTranslater::OnNoticeGuildSecede() Exception Break\n");
    }
}
```
