# _ZN17CPacketTranslater7OnLoginEP12PacketHeader

`CPacketTranslater::OnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8057692` | `0x358` | `0x8053140` | `0x325` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,230 +1,215 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x8c,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x2c(%ebp)
+sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x34d>
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%ecx
-mov    -0x2c(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movzbl %al,%edx
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x31c>
+mov    0x8(%ebp),%eax
+add    $0xf,%eax
+movzbl (%eax),%eax
+mov    %al,-0x2e(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+mov    %al,-0x2d(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x2c(%ebp)
+movzbl -0x2d(%ebp),%ecx
+movzbl -0x2e(%ebp),%edx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication14FindGameServerEii>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-sete   %al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1e0>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+add    $0x63c,%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUserC1Ev>
+lea    -0x3c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xc9>
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%edi
-mov    -0x2c(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movzbl %al,%esi
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xb9>
+mov    -0x28(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CUserManager10CreateUserEjP11CGameServer>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1d0>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xe4>
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGameServer10GetGroupNoEv>
+cmp    -0x2e(%ebp),%al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xe4>
+mov    $0x1,%eax
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0xe9>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1d0>
+lea    -0x4a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN30Packet_Monitor_UDP_User_GetoutC1Ev>
+mov    -0x2c(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+lea    -0x4a(%ebp),%eax
+movl   $0xe,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGameServer16SendToGameServerEPci>
+lea    -0x4a(%ebp),%eax
+movl   $0xe,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN11CGameServer16SendToGameServerEPci>
 movl   $0x0,0x4(%esp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
-movl   $0x42,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"Not Found M_ID(%s) Group No(%d) Channel No(%d)",0x8(%esp)
-movl   $"./log/Channel",0x4(%esp)
-lea    -0x4c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x34d>
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x63c,%eax
-mov    %eax,-0x20(%ebp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUserC1Ev>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-lea    -0x50(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x234>
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x136>
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer10GetGroupNoEv>
-mov    -0x2c(%ebp),%edx
-movzbl 0xf(%edx),%edx
-cmp    %dl,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x136>
-mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x13b>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x267>
-lea    -0x5e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN30Packet_Monitor_UDP_User_GetoutC1Ev>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
-movl   $0xe,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CGameServer16SendToGameServerEPci>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x54(%ebp)
-lea    -0x5e(%ebp),%eax
-movl   $0xe,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CGameServer16SendToGameServerEPci>
-mov    -0x2c(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x70(%ebp)
-mov    -0x2c(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x24(%ebp),%eax
+movzbl %al,%esi
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer12GetChannelNoEv>
 movzbl %al,%edi
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN11CGameServer10GetGroupNoEv>
-movzbl %al,%esi
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
 movl   $0x66,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x70(%ebp),%eax
-mov    %eax,0x1c(%esp)
-mov    -0x6c(%ebp),%eax
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x2d(%ebp),%edx
+movzbl -0x2e(%ebp),%eax
+mov    %edx,0x1c(%esp)
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"DOUBLE : ID(%s) Already Gr(%d) Ch(%d)\tCurrent Gr(%d) Ch(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x267>
-mov    -0x2c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    -0x28(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CUserManager10CreateUserEjP11CGameServer>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x267>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x1d0>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x277>
-lea    -0x50(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x244>
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x34d>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x31d>
+movl   $0x0,0x4(%esp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,%ebx
+movl   $0x42,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+movzbl -0x2d(%ebp),%edx
+movzbl -0x2e(%ebp),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"Not Found M_ID(%s) Group No(%d) Channel No(%d)",0x8(%esp)
+movl   $"./log/Channel",0x4(%esp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x31d>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x2f3>
+jne    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x2c0>
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
 movl   $0x75,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x2ec>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x2b9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x34d>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x31d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x7a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater7OnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x348>
+lea    -0x64(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x315>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x8c,%esp
+jmp    <T> <_ZN17CPacketTranslater7OnLoginEP12PacketHeader+0x31d>
+nop
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater7OnLoginEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  bool bVar2;
  char cVar3;
  PacketHeader PVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  Packet_Monitor_UDP_User_Getout local_62 [10];
  undefined4 local_58;
  CUser local_54 [4];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  PacketHeader *local_30;
  CGameServer *local_2c;
  CGameServer *local_28;
  CUserManager *local_24;
  
  local_30 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
    return;
  }
                    /* try { // try from 080576d5 to 08057772 has its CatchHandler @ 08057909 */
  local_2c = (CGameServer *)
             CApplication::FindGameServer
                       (m_pclApp,(uint)(byte)param_1[0xf],(uint)(byte)param_1[0xe]);
  if (local_2c != (CGameServer *)0x0) {
    local_24 = (CUserManager *)(m_pclApp + 0x63c);
    CUser::CUser(local_54);
                    /* try { // try from 0805778a to 080578e1 has its CatchHandler @ 080578e4 */
    cVar3 = CUserManager::_ZN12CUserManager8FindUserEjR5CUser
                      (local_24,*(uint *)(local_30 + 10),local_54);
    if (cVar3 == '\0') {
      CUserManager::_ZN12CUserManager10CreateUserEjP11CGameServer
                (local_24,*(uint *)(local_30 + 10),local_2c);
    }
    else {
      local_28 = (CGameServer *)CUser::GetGameServer(local_54);
      if ((local_28 == (CGameServer *)0x0) ||
         (PVar4 = (PacketHeader)CGameServer::GetGroupNo(local_28), PVar4 == local_30[0xf])) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        Packet_Monitor_UDP_User_Getout::Packet_Monitor_UDP_User_Getout(local_62);
        local_58 = *(undefined4 *)(local_30 + 10);
        CGameServer::SendToGameServer(local_28,(char *)local_62,0xe);
        local_58 = *(undefined4 *)(local_30 + 10);
        CGameServer::SendToGameServer(local_2c,(char *)local_62,0xe);
        PVar4 = local_30[0xe];
        PVar1 = local_30[0xf];
        uVar6 = CGameServer::GetChannelNo(local_28);
        uVar7 = CGameServer::GetGroupNo(local_28);
        uVar5 = NumberToString(*(uint *)(local_30 + 10),0);
        CMyFileLog::CMyFileLog(local_48,"OnLogin",0x66);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/User",
                   "DOUBLE : ID(%s) Already Gr(%d) Ch(%d)\tCurrent Gr(%d) Ch(%d)",uVar5,uVar7 & 0xff
                   ,uVar6 & 0xff,(uint)(byte)PVar1,(uint)(byte)PVar4);
      }
    }
                    /* try { // try from 080578ff to 08057903 has its CatchHandler @ 08057909 */
    CUser::~CUser(local_54);
    return;
  }
  PVar4 = local_30[0xe];
  PVar1 = local_30[0xf];
  uVar5 = NumberToString(*(uint *)(local_30 + 10),0);
  CMyFileLog::CMyFileLog(local_50,"OnLogin",0x42);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_50,"./log/Channel","Not Found M_ID(%s) Group No(%d) Channel No(%d)",uVar5,
             (uint)(byte)PVar1,(uint)(byte)PVar4);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp](source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp)（约第 22 行）：

```cpp
void CPacketTranslater::OnLogin(PacketHeader* pkt)
{
    if (m_pclApp == 0)
    {
        return;
    }
    try
    {
        unsigned char group = *(unsigned char*)((char*)pkt + 0xf);
        unsigned char channel = *(unsigned char*)((char*)pkt + 0xe);
        unsigned int user_id = *(unsigned int*)((char*)pkt + 0xa);
        CGameServer* new_gs = m_pclApp->FindGameServer(group, channel);
        if (new_gs != 0)
        {
            CUserManager* um = &m_pclApp->m_userManager;
            CUser user;
            if (!um->FindUser(user_id, user))
            {
                um->CreateUser(user_id, new_gs);
            }
            else
            {
                CGameServer* old_gs = user.GetGameServer();
                if (old_gs != 0 && old_gs->GetGroupNo() != group)
                {
                    Packet_Monitor_UDP_User_Getout getout;
                    getout.m_userID = user_id;
                    old_gs->SendToGameServer((char*)&getout, 0xe);
                    new_gs->SendToGameServer((char*)&getout, 0xe);
                    register const char* s = NumberToString(user_id, 0);
                    register int g = old_gs->GetGroupNo() & 0xff;
                    register int ch = old_gs->GetChannelNo() & 0xff;
                    DNF_LOG_SCOPE_LINE(0x66,"./log/User",
                        "DOUBLE : ID(%s) Already Gr(%d) Ch(%d)\tCurrent Gr(%d) Ch(%d)",
                        s, g, ch, group, channel);
                }
            }
            return;
        }
        register const char* s = NumberToString(user_id, 0);
        DNF_LOG_SCOPE_LINE(0x42,"./log/Channel", "Not Found M_ID(%s) Group No(%d) Channel No(%d)",
            s, group, channel);
    }
    catch (CDNFException& e)
    {
        register const char* s = e.what();
        DNF_LOG_SCOPE_LINE(0x75, "./log/Except", "CPacketTranslater::OnLogin() Exception Break : %s\n", s);
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0x7a, "./log/Except", "CPacketTranslater::OnLogin() Exception Break\n");
    }
}
```
