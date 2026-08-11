# _ZN17CPacketTranslater8OnLogoutEP12PacketHeader

`CPacketTranslater::OnLogout(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x80579ea` | `0x2b9` | `0x8053466` | `0x2b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,186 +1,183 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
-lea    -0x48(%ebp),%eax
+sub    $0x50,%esp
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserC1Ev>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 add    $0x63c,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-lea    -0x48(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x18(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager8FindUserEjR5CUser>
-xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
-lea    -0x48(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
-setne  %al
+sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x103>
-mov    -0x24(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0xf4>
+movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Z14NumberToStringji>
+mov    %eax,%ebx
+movl   $0x9d,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetGameServerEv>
+mov    0x8(%ebp),%edx
+add    $0xe,%edx
+movzbl (%edx),%edx
+movzbl %dl,%ecx
+mov    0x8(%ebp),%edx
+add    $0xf,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+mov    %eax,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"[NO USER_GameServer_Diff] Disconnected User DB ID(%s), Group(%d), Channel(%d), GameServer(%d)",0x8(%esp)
+movl   $"./log/User",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
+mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CUserManager10DeleteUserEP29Packet_DoubleCheck_UDP_Logout>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%edi
-mov    -0x24(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movzbl %al,%esi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
 movl   $0x0,0x4(%esp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z14NumberToStringji>
 mov    %eax,%ebx
 movl   $0x99,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    0x8(%ebp),%eax
+add    $0xf,%eax
+movzbl (%eax),%eax
+movzbl %al,%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[NO USER_DeleteUser_False] Disconnected User DB ID(%s), Group(%d), Channel(%d)",0x8(%esp)
 movl   $"./log/User",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetGameServerEv>
-mov    %eax,%esi
-mov    -0x24(%ebp),%eax
-movzbl 0xe(%eax),%eax
-movzbl %al,%eax
-mov    %eax,-0x4c(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0xf(%eax),%eax
-movzbl %al,%edi
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_Z14NumberToStringji>
-mov    %eax,%ebx
-movl   $0x9d,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x18(%esp)
-mov    -0x4c(%ebp),%eax
-mov    %eax,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    %ebx,0xc(%esp)
-movl   $"[NO USER_GameServer_Diff] Disconnected User DB ID(%s), Group(%d), Channel(%d), GameServer(%d)",0x8(%esp)
-movl   $"./log/User",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x229>
+jne    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x221>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",(%esp)
 call   <T> <printf>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0xa8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLogout() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x222>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x21a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x28b>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x283>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnLogout() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0xae,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater8OnLogoutEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLogout() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x284>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x27c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x28b>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x283>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x2a6>
+jmp    <T> <_ZN17CPacketTranslater8OnLogoutEP12PacketHeader+0x29e>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x48(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUserD1Ev>
-add    $0x6c,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLogout(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater8OnLogoutEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  PacketHeader PVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CUser local_4c [4];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CUserManager *local_24;
  
  CUser::CUser(local_4c);
  local_28 = param_1;
  if (m_pclApp != 0) {
    local_24 = (CUserManager *)(m_pclApp + 0x63c);
                    /* try { // try from 08057a35 to 08057b71 has its CatchHandler @ 08057b77 */
    cVar3 = CUserManager::_ZN12CUserManager8FindUserEjR5CUser
                      (local_24,*(uint *)(param_1 + 10),local_4c);
    if (cVar3 == '\x01') {
      iVar4 = CUser::GetGameServer(local_4c);
      if (iVar4 == 0) {
        uVar5 = CUser::GetGameServer(local_4c);
        PVar1 = local_28[0xe];
        PVar2 = local_28[0xf];
        uVar6 = NumberToString(*(uint *)(local_28 + 10),0);
        CMyFileLog::CMyFileLog(local_40,"OnLogout",0x9d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_40,"./log/User",
                   "[NO USER_GameServer_Diff] Disconnected User DB ID(%s), Group(%d), Channel(%d), GameServer(%d)"
                   ,uVar6,(uint)(byte)PVar2,(uint)(byte)PVar1,uVar5);
      }
      else {
        cVar3 = CUserManager::DeleteUser(local_24,(Packet_DoubleCheck_UDP_Logout *)local_28);
        if (cVar3 != '\x01') {
          PVar1 = local_28[0xe];
          PVar2 = local_28[0xf];
          uVar5 = NumberToString(*(uint *)(local_28 + 10),0);
          CMyFileLog::CMyFileLog(local_48,"OnLogout",0x99);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_48,"./log/User",
                     "[NO USER_DeleteUser_False] Disconnected User DB ID(%s), Group(%d), Channel(%d)"
                     ,uVar5,(uint)(byte)PVar2,(uint)(byte)PVar1);
        }
      }
    }
  }
  CUser::~CUser(local_4c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp](source/DNFServer/GameServer/COServer/DNFPacketTranslater.cpp)（约第 76 行）：

```cpp
void CPacketTranslater::OnLogout(PacketHeader* pkt)
{
    CUser user;
    if (m_pclApp != 0)
    {
        try
        {
            CUserManager* um = &m_pclApp->m_userManager;
            unsigned int user_id = *(unsigned int*)((char*)pkt + 0xa);
            if (um->FindUser(user_id, user))
            {
                if (user.GetGameServer() == 0)
                {
                    register const char* s = NumberToString(user_id, 0);
                    DNF_LOG_SCOPE_LINE(0x9d,"./log/User",
                        "[NO USER_GameServer_Diff] Disconnected User DB ID(%s), Group(%d), Channel(%d), GameServer(%d)",
                        s, *(unsigned char*)((char*)pkt + 0xf),
                        *(unsigned char*)((char*)pkt + 0xe), user.GetGameServer());
                }
                else if (!um->DeleteUser((Packet_DoubleCheck_UDP_Logout*)pkt))
                {
                    register const char* s = NumberToString(user_id, 0);
                    DNF_LOG_SCOPE_LINE(0x99,"./log/User",
                        "[NO USER_DeleteUser_False] Disconnected User DB ID(%s), Group(%d), Channel(%d)",
                        s, *(unsigned char*)((char*)pkt + 0xf),
                        *(unsigned char*)((char*)pkt + 0xe));
                }
            }
        }
        catch (CDNFException& e)
        {
            printf("CPacketTranslater::OnLogout() Exception Break : %s\n", e.what());
            register const char* s = e.what();
            DNF_LOG_SCOPE_LINE(0xa8, "./log/Except", "CPacketTranslater::OnLogout() Exception Break : %s\n", s);
        }
        catch (...)
        {
            puts("CPacketTranslater::OnLogout() Exception Break");
            DNF_LOG_SCOPE_LINE(0xae, "./log/Except", "CPacketTranslater::OnLogout() Exception Break\n");
        }
    }
}
```
