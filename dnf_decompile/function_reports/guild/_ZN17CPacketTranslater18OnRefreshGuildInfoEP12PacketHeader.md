# _ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader

`CPacketTranslater::OnRefreshGuildInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80886da` | `0x21f` | `0x807d682` | `0x128` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,135 +1,72 @@
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
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x60>
+jne    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x50>
 movl   $0x1f4b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x218>
-mov    -0x18(%ebp),%eax
-mov    0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x126>
+mov    -0x14(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0xc4>
+je     <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0xb3>
 movl   $0x1f51,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == pUser",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x218>
-mov    -0x18(%ebp),%eax
-mov    0xe(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x126>
+mov    -0x14(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x12b>
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x114>
 movl   $0x1f57,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x218>
+jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x126>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild25SendGuildInfoToMemberOnlyEP5CUser>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x218>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x1be>
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
-movl   $0x1f5f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnAddGuildFund Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x1b7>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x218>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1f64,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnAddGuildFund Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader+0x213>
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

/* CPacketTranslater::OnRefreshGuildInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnRefreshGuildInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CGuild *local_18;
  CUser *local_14;
  
  local_1c = param_1;
  local_18 = (CGuild *)0x0;
  local_14 = (CUser *)0x0;
  if (m_pclApp == 0) {
                    /* try { // try from 08088715 to 08088816 has its CatchHandler @ 0808881c */
    CMyFileLog::CMyFileLog(local_44,"OnRefreshGuildInfo",0x1f4b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == m_pclApp");
  }
  else {
    local_14 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_14 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_3c,"OnRefreshGuildInfo",0x1f51);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_3c,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == pUser");
    }
    else {
      local_18 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_18 == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_34,"OnRefreshGuildInfo",0x1f57);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_34,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == pGuild");
      }
      else {
        CGuild::SendGuildInfoToMemberOnly(local_18,local_14);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5521 行）：

```cpp
void CPacketTranslater::OnRefreshGuildInfo(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f4b, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == m_pclApp");
        return;
    }
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xa))) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f51, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pUser");
        return;
    }
    CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xe));
    if (guild == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1f57, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pGuild");
        return;
    }
    guild->SendGuildInfoToMemberOnly(user);
}
```
