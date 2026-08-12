# _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader

`CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807e828` | `0x262` | `0x8074bec` | `0x261` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,168 +1,170 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x52>
 movl   $0x1000,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25a>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb6>
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb8>
 movl   $0x1007,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25a>
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
-mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-mov    0xe(%eax,%ecx,1),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11IsBlackUserEj>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
-mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ecx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%ecx
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x14c>
 mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-add    -0x14(%ebp),%eax
-lea    0x12(%eax),%esi
+add    $0xe,%eax
+add    -0x18(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+cmp    $0x1,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x148>
 mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    0xe(%eax,%ebx,1),%eax
-mov    %ecx,0xc(%esp)
-mov    %esi,0x8(%esp)
+add    $0x32,%eax
+add    -0x18(%ebp),%eax
+mov    (%eax),%ebx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x12,%eax
+mov    %eax,%ecx
+add    -0x18(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0xe,%eax
+add    -0x18(%ebp),%eax
+mov    (%eax),%eax
+mov    %ebx,0xc(%esp)
+mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser19RegisterToBlackListEjPcj>
 addl   $0x1,-0x10(%ebp)
 mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
+add    $0x32,%eax
+add    -0x18(%ebp),%eax
+mov    (%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xc2>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xc4>
 movl   $0x4,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetBlackListDBFlagEt>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x201>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x200>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x101b,0x8(%esp)
+movl   $"OnDBMWResponseBlackListOnLogin",0x4(%esp)
+lea    -0x30(%ebp),%eax
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
-movl   $0x101b,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1fa>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x1f9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x25a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1020,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x256>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x255>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  CMyFileLog local_3c [8];
  CMyFileLog local_34 [24];
  CUser *local_1c;
  PacketHeader *local_18;
  int local_14;
  
  local_18 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 0807e855 to 0807e96a has its CatchHandler @ 0807e9ad */
    CMyFileLog::CMyFileLog(local_3c,"OnDBMWResponseBlackListOnLogin",0x1000);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/BlackList",
               "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
  }
  else {
    local_1c = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_1c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_34,"OnDBMWResponseBlackListOnLogin",0x1007);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/BlackList",
                 "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser");
    }
    else {
      local_14 = 0;
      while (*(int *)(local_18 + local_14 * 0x28 + 0x32) != 0) {
        cVar1 = CUser::IsBlackUser((uint)local_1c);
        if (cVar1 != '\x01') {
          CUser::RegisterToBlackList
                    (local_1c,*(uint *)(local_18 + local_14 * 0x28 + 0xe),
                     (char *)(local_18 + local_14 * 0x28 + 0x12),
                     *(uint *)(local_18 + local_14 * 0x28 + 0x32));
        }
        local_14 = local_14 + 1;
      }
      CUser::SetBlackListDBFlag(local_1c,4);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3077 行）：

```cpp
void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt)
{
    try
    {
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1000,"./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
        return;
    }
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser(*(unsigned int*)(pb + 0xa))) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1007,"./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser");
        return;
    }
    int i = 0;
    while (*(int*)(pb + i * 0x28 + 0x32) != 0)
    {
        if (user->IsBlackUser(*(unsigned int*)(pb + i * 0x28 + 0xe)) != 1)
        {
            user->RegisterToBlackList(*(unsigned int*)(pb + i * 0x28 + 0xe),
                                      pb + i * 0x28 + 0x12,
                                      *(unsigned int*)(pb + i * 0x28 + 0x32));
        }
        i++;
    }
    user->SetBlackListDBFlag(4);
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWResponseBlackListOnLogin", 0x101b);
        log("./log/Except", "CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0x1020);
        log("./log/Except", "CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break\n");
    }
}
```
