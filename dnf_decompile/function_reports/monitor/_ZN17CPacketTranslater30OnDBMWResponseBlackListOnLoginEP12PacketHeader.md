# _ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader

`CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80866d4` | `0x26d` | `0x807214c` | `0x26c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,171 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x52>
-movl   $0xdc4,0x8(%esp)
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x4c>
+movl   $0xdc3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
-mov    -0x14(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x265>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager8FindUserEj>
-mov    %eax,-0x18(%ebp)
-cmpl   $0x0,-0x18(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb6>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xab>
 movl   $0xdcb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x265>
 movl   $0x0,-0x10(%ebp)
 jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x147>
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
+mov    0x8(%ebp),%ecx
 mov    -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-add    -0x14(%ebp),%eax
-lea    0x12(%eax),%esi
+add    $0xe,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11IsBlackUserEj>
+cmp    $0x1,%al
+setne  %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x143>
+mov    0x8(%ebp),%ecx
 mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ebx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
-mov    0xe(%eax,%ebx,1),%eax
-mov    %ecx,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser19RegisterToBlackListEjPcj>
-addl   $0x1,-0x10(%ebp)
+add    $0x32,%eax
+lea    (%ecx,%eax,1),%eax
+mov    (%eax),%ecx
+mov    0x8(%ebp),%ebx
 mov    -0x10(%ebp),%edx
-mov    -0x14(%ebp),%ecx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x3,%eax
+add    $0x12,%eax
+add    %eax,%ebx
+mov    0x8(%ebp),%esi
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0xe,%eax
+lea    (%esi,%eax,1),%eax
+mov    (%eax),%eax
+mov    %ecx,0xc(%esp)
+mov    %ebx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser19RegisterToBlackListEjPcj>
+addl   $0x1,-0x10(%ebp)
+mov    0x8(%ebp),%ecx
+mov    -0x10(%ebp),%edx
+mov    %edx,%eax
+shl    $0x2,%eax
+add    %edx,%eax
+shl    $0x3,%eax
+add    $0x32,%eax
 lea    (%ecx,%eax,1),%eax
-add    $0x20,%eax
-mov    0x12(%eax),%eax
+mov    (%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xc2>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0xb7>
 movl   $0x4,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser18SetBlackListDBFlagEt>
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13SendBlackListEv>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x265>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x20c>
+jne    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x20b>
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
 movl   $0xde0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x205>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x204>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x266>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x265>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xde5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x261>
+jmp    <T> <_ZN17CPacketTranslater30OnDBMWResponseBlackListOnLoginEP12PacketHeader+0x260>
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
                    /* try { // try from 08086701 to 0808685e has its CatchHandler @ 08086864 */
    CMyFileLog::CMyFileLog(local_3c,"OnDBMWResponseBlackListOnLogin",0xdc4);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/BlackList",
               "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
  }
  else {
    local_1c = (CUser *)CUserManager::FindUser(m_pclApp + 0x10);
    if (local_1c == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_34,"OnDBMWResponseBlackListOnLogin",0xdcb);
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
      CUser::SendBlackList(local_1c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 2515 行）：

```cpp
void CPacketTranslater::OnDBMWResponseBlackListOnLogin(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0xdc3,"./log/BlackList",
            "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == m_pclApp");
    }
    else
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser(
                ((RA_UINT<10>*)pkt)->v);
        if (user == 0)
        {
            DNF_LOG_SCOPE_LINE(0xdcb,"./log/BlackList",
                "CPacketTranslater::OnDBMWResponseBlackListOnLogin : 0 == pclUser");
        }
        else
        {
            for (int i = 0; *(int*)((char*)pkt + i * 0x28 + 0x32) != 0; i++)
            {
                if (user->IsBlackUser(*(unsigned int*)((char*)pkt + i * 0x28 + 0xe)) != 1)
                {
                    user->RegisterToBlackList(
                        *(unsigned int*)((char*)pkt + i * 0x28 + 0xe),
                        (char*)pkt + i * 0x28 + 0x12,
                        *(unsigned int*)((char*)pkt + i * 0x28 + 0x32));
                }
            }
            user->SetBlackListDBFlag(4);
            user->SendBlackList();
        }
    }


    }
    catch (CDNFException& e)
    {
        DNF_LOG_SCOPE_LINE(0xde0, "./log/Except", "CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        DNF_LOG_SCOPE_LINE(0xde5, "./log/Except", "CPacketTranslater::OnDBMWResponseBlackListOnLogin Exception Break\n");
    }
}
```
