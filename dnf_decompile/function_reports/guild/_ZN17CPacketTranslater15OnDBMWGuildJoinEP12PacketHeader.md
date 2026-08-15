# _ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader

`CPacketTranslater::OnDBMWGuildJoin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8079026` | `0x389` | `0x806f428` | `0x381` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,241 +1,238 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xac,%esp
+mov    0x8(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xe2>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xe8>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x51(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x54(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x90>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x96>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x58(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x8a>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x90>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xad>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xa7>
-lea    -0x58(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xad>
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xc5>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0xad>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x51(%ebp),%eax
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x2a8>
-lea    -0x51(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x2a0>
+lea    -0x4d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x14c>
-movl   $0x9d8,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBMWGuildJoin() 0 == pclJoinUser",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x1ae>
+je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x147>
+movl   $0x9d8,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movl   $"CPacketTranslater::OnDBMWGuildJoin() 0 == pclJoinUser",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x2c(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x290,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x1a4>
 movl   $0x9dc,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWGuildJoin() 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x24(%ebp),%eax
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x287>
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x1cf>
+mov    -0x2c(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,0x8(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x376>
+mov    -0x2c(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x233>
-lea    -0xa2(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x24c>
+lea    -0x9e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Guild_Reply_Guild_Invite_To_CallerC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x98(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x94(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x94(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x90(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x90(%ebp)
-lea    -0xa2(%ebp),%eax
+mov    %eax,-0x8c(%ebp)
+lea    -0x9e(%ebp),%eax
 movl   $0x34,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x37e>
-lea    -0x6e(%ebp),%eax
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x376>
+lea    -0x6a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Guild_Reply_Guild_Invite_To_InvitedC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x64(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x60(%ebp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x60(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-lea    -0x6e(%ebp),%eax
+mov    %eax,-0x58(%ebp)
+lea    -0x6a(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x37e>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x8(%esp)
-mov    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x37e>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x376>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x324>
+jne    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x31c>
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
 movl   $0xa2c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnReplyGuildInvite() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x31d>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x315>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x37e>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x376>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xa31,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnReplyGuildInvite() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x379>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader+0x371>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xac,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWGuildJoin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnDBMWGuildJoinEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_Guild_Reply_Guild_Invite_To_Caller local_a6 [10];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  Packet_Guild_Reply_Guild_Invite_To_Invited local_72 [10];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  string local_5c [7];
  allocator local_55;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CUser *local_34;
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807905f to 08079063 has its CatchHandler @ 080790cd */
    std::string::string(local_5c,"CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp",&local_55);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807907e to 08079082 has its CatchHandler @ 08079085 */
    CDNFException::CDNFException(this,local_5c);
                    /* try { // try from 080790bc to 080790c0 has its CatchHandler @ 080790c3 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08079103 to 080792c8 has its CatchHandler @ 080792ce */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = m_pclApp + 0x10;
  local_34 = (CUser *)CUserManager::FindUser_CharNo(local_24);
  if (local_34 == (CUser *)0x0) {
    CMyFileLog::CMyFileLog(local_54,"OnDBMWGuildJoin",0x9d8);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/GuildModify","CPacketTranslater::OnDBMWGuildJoin() 0 == pclJoinUser")
    ;
  }
  local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_2c == (CGuild *)0x0) {
    CMyFileLog::CMyFileLog(local_4c,"OnDBMWGuildJoin",0x9dc);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/GuildModify","CPacketTranslater::OnDBMWGuildJoin() 0 == pclGuild");
  }
  if (*(int *)(local_28 + 0x16) == 0) {
    GuildJoin(local_2c,local_34,*(uint *)(local_28 + 0xe));
  }
  else {
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
    if (local_30 != (CUser *)0x0) {
      Packet_Guild_Reply_Guild_Invite_To_Caller::Packet_Guild_Reply_Guild_Invite_To_Caller(local_a6)
      ;
      local_9c = *(undefined4 *)(local_28 + 0xe);
      local_98 = CUser::GetIdByChannel(local_30);
      local_94 = *(undefined4 *)(local_28 + 0x16);
      CUser::SendToGameserver(local_30,(char *)local_a6,0x34);
    }
    if (local_34 != (CUser *)0x0) {
      Packet_Guild_Reply_Guild_Invite_To_Invited::Packet_Guild_Reply_Guild_Invite_To_Invited
                (local_72);
      local_68 = *(undefined4 *)(local_28 + 0x12);
      local_64 = CUser::GetIdByChannel(local_34);
      local_60 = *(undefined4 *)(local_28 + 0x16);
      CUser::SendToGameserver(local_34,(char *)local_72,0x16);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1833 行）：

```cpp
void CPacketTranslater::OnDBMWGuildJoin(PacketHeader* pkt)
{
    Packet_DBMW_Guild_Join* pb = (Packet_DBMW_Guild_Join*)pkt;
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnReplyGuildInvite : 0 == m_pclApp");
        CUser* joinUser;
        if ((joinUser = (&m_pclApp->m_userManager)->FindUser_CharNo(
                 pb->m_joiner)) == 0)
        {
            DNF_LOG_SCOPE_LINE(0x9d8, "./log/GuildModify", "CPacketTranslater::OnDBMWGuildJoin() 0 == pclJoinUser");
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(
            pb->m_guildKey);
        if (guild == 0)
        {
            DNF_LOG_SCOPE_LINE(0x9dc, "./log/GuildModify", "CPacketTranslater::OnDBMWGuildJoin() 0 == pclGuild");
        }
        if (pb->m_result == 0)
        {
            GuildJoin(guild, joinUser, pb->m_caller);
        }
        else
        {
            CUser* caller;
            if ((caller = (&m_pclApp->m_userManager)->FindUser_CharNo(
                     pb->m_caller)) != 0)
            {
                Packet_Guild_Reply_Guild_Invite_To_Caller callerPkt;
                callerPkt.m_a = pb->m_caller;
                callerPkt.m_e = caller->GetIdByChannel();
                callerPkt.m_12 = pb->m_result;
                caller->SendToGameserver((char*)&callerPkt, 0x34);
            }
            if (joinUser != 0)
            {
                Packet_Guild_Reply_Guild_Invite_To_Invited invitedPkt;
                invitedPkt.m_a = pb->m_joiner;
                invitedPkt.m_e = joinUser->GetIdByChannel();
                invitedPkt.m_12 = pb->m_result;
                joinUser->SendToGameserver((char*)&invitedPkt, 0x16);
            }
        }
    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xa2c, "./log/Except", "CPacketTranslater::OnReplyGuildInvite() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xa31, "./log/Except", "CPacketTranslater::OnReplyGuildInvite() Exception Break\n");
    }
}
```
