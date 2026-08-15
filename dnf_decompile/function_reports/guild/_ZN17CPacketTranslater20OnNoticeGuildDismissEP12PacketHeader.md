# _ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader

`CPacketTranslater::OnNoticeGuildDismiss(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8073948` | `0x328` | `0x8069e9c` | `0x323` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,213 +1,211 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0xdf>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildDismiss : 0 == m_pclApp",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0xa4>
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x218>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x213>
 lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x3a9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"Packet_Monitor_Notice_Guild_Dismiss: guildkey : %d\n",0x8(%esp)
 movl   $"./log/Web",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x5a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15Packet_No_CacheC1Ev>
 movl   $0x0,-0x50(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
 mov    %eax,-0x4c(%ebp)
 movl   $0x1,-0x48(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x5a(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader>
 movl   $0x0,-0x50(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
 mov    %eax,-0x4c(%ebp)
 movl   $0x2,-0x48(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x5a(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader>
-mov    -0x20(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_ServerGroupEv>
 movzbl %al,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild27DismissGuildMemberAndNoticeEi>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x290(%eax),%edx
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager12GuildDismissEP6CGuild>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ba>
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b5>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildDismiss() Exception Break : %s\n",(%esp)
 call   <T> <printf>
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
 movl   $0x3c9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildDismiss() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2b3>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x2ae>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x320>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildDismiss() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x3cf,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildDismiss() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x31b>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader+0x316>
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

/* CPacketTranslater::OnNoticeGuildDismiss(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnNoticeGuildDismissEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *this;
  CServerHandler *pCVar2;
  uint uVar3;
  Packet_No_Cache local_5e [10];
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  string local_48 [7];
  allocator local_41;
  CMyFileLog local_40 [24];
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807397e to 08073982 has its CatchHandler @ 080739ec */
    std::string::string(local_48,"CPacketTranslater::OnNoticeGuildDismiss : 0 == m_pclApp",&local_41
                       );
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807399d to 080739a1 has its CatchHandler @ 080739a4 */
    CDNFException::CDNFException(this,local_48);
                    /* try { // try from 080739db to 080739df has its CatchHandler @ 080739e2 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08073a22 to 08073b5a has its CatchHandler @ 08073b60 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  uVar1 = *(undefined4 *)(param_1 + 10);
  CMyFileLog::CMyFileLog(local_40,"OnNoticeGuildDismiss",0x3a9);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/Web","Packet_Monitor_Notice_Guild_Dismiss: guildkey : %d\n",uVar1);
  Packet_No_Cache::_ZN15Packet_No_CacheC2Ev(local_5e);
  local_54 = 0;
  local_50 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
  local_50 = local_50 & 0xff;
  local_4c = 1;
  pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::_ZN14CServerHandler20SendAllTcpGameServerEP12PacketHeader
            (pCVar2,(PacketHeader *)local_5e);
  local_54 = 0;
  local_50 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
  local_50 = local_50 & 0xff;
  local_4c = 2;
  pCVar2 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader
            (pCVar2,(PacketHeader *)local_5e);
  local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_28 != (CGuild *)0x0) {
    uVar3 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
    CGuild::DismissGuildMemberAndNotice(local_28,uVar3 & 0xff);
    CGuildManager::_ZN13CGuildManager12GuildDismissEP6CGuild
              ((CGuildManager *)(m_pclApp + 0x290),local_28);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 776 行）：

```cpp
void CPacketTranslater::OnNoticeGuildDismiss(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildDismiss : 0 == m_pclApp")
    Packet_Monitor_Notice_Guild_Dismiss* pb = (Packet_Monitor_Notice_Guild_Dismiss*)pkt;
    DNF_LOG_SCOPE_LINE(0x3a9,"./log/Web", "Packet_Monitor_Notice_Guild_Dismiss: guildkey : %d\n",
        pb->m_guildKey);
    Packet_No_Cache noCache;
    noCache.ma = 0;
    noCache.me = (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
    noCache.m12 = 1;
    m_pclApp->Get_ServerHandler()->SendAllTcpGameServer(&noCache);
    noCache.ma = 0;
    noCache.me = (unsigned int)m_pclApp->Get_ServerGroup() & 0xff;
    noCache.m12 = 2;
    m_pclApp->Get_ServerHandler()->SendTcpGameServerFirst(&noCache);
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(pb->m_guildKey);
    if (guild != 0)
    {
        guild->DismissGuildMemberAndNotice((int)m_pclApp->Get_ServerGroup() & 0xff);
        (&m_pclApp->m_guildManager)->GuildDismiss(guild);
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildDismiss() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x3c9, "./log/Except", "CPacketTranslater::OnNoticeGuildDismiss() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildDismiss() Exception Break");
        DNF_LOG_SCOPE_LINE(0x3cf, "./log/Except", "CPacketTranslater::OnNoticeGuildDismiss() Exception Break\n");
    }
}
```
