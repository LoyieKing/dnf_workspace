# _ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader

`CPacketTranslater::OnGuildDebug(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80892b2` | `0x260` | `0x807e27c` | `0x17a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,150 +1,94 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x50,%esp
+sub    $0x48,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x60>
+jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x50>
 movl   $0x2040,0x8(%esp)
 movl   $"OnGuildDebug",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildDebug : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x178>
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    -0x18(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0xc7>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0xbb>
 movl   $0x2046,0x8(%esp)
 movl   $"OnGuildDebug",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildDebug : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x178>
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    -0x10(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x12b>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x123>
 movl   $0x204c,0x8(%esp)
 movl   $"OnGuildDebug",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnGuildDebug : 0 == pUser",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
-mov    -0x18(%ebp),%eax
-mov    0x12(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x178>
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x13f>
-cmp    $0x1,%eax
-je     <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x161>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
+jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x14e>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
+jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x178>
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+cmp    $0x1,%eax
+jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x178>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager18RefreshTodayMemberEb>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x1ff>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x2061,0x8(%esp)
-movl   $"OnGuildDebug",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnGuildDebug Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x1f8>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x259>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x2066,0x8(%esp)
-movl   $"OnGuildDebug",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnGuildDebug Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader+0x254>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x50,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnGuildDebug(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater12OnGuildDebugEP12PacketHeader(PacketHeader *param_1)

{
  CGuildManager *pCVar1;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  int local_18;
  int local_14;
  
  local_1c = param_1;
  local_18 = 0;
  local_14 = 0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 080892ed to 0808942f has its CatchHandler @ 08089435 */
    CMyFileLog::CMyFileLog(local_44,"OnGuildDebug",0x2040);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/Guild","CPacketTranslater::OnGuildDebug : 0 == m_pclApp");
  }
  else {
    local_14 = CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_14 == 0) {
      CMyFileLog::CMyFileLog(local_3c,"OnGuildDebug",0x2046);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/Guild","CPacketTranslater::OnGuildDebug : 0 == pGuild");
    }
    else {
      local_18 = CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
      if (local_18 == 0) {
        CMyFileLog::CMyFileLog(local_34,"OnGuildDebug",0x204c);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/Guild","CPacketTranslater::OnGuildDebug : 0 == pUser");
      }
      else if (*(int *)(local_1c + 0x12) == 0) {
        pCVar1 = (CGuildManager *)CApplication::Get_GuildManager(m_pclApp);
        CGuildManager::_ZN13CGuildManager21RefreshAttendanceInfoEb(pCVar1,true);
      }
      else if (*(int *)(local_1c + 0x12) == 1) {
        pCVar1 = (CGuildManager *)CApplication::Get_GuildManager(m_pclApp);
        CGuildManager::_ZN13CGuildManager18RefreshTodayMemberEb(pCVar1,true);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5510 行）：

```cpp
void CPacketTranslater::OnGuildDebug(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x2040, "./log/Guild", "CPacketTranslater::OnGuildDebug : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(guildKey);
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x2046, "./log/Guild", "CPacketTranslater::OnGuildDebug : 0 == pGuild");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x204c, "./log/Guild", "CPacketTranslater::OnGuildDebug : 0 == pUser");
    }
    else if (*(int*)(pb + 0x12) == 0)
    {
        m_pclApp->Get_GuildManager()->RefreshAttendanceInfo(true);
    }
    else if (*(int*)(pb + 0x12) == 1)
    {
        m_pclApp->Get_GuildManager()->RefreshTodayMember(true);
    }
}
```
