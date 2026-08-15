# _ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader

`CPacketTranslater::OnDBReplyUnconnGuildMember(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8077bca` | `0x414` | `0x806df58` | `0x410` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,311 +1,309 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0xef>
-lea    -0x45(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == m_pclApp",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x50(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x95>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0xb4>
-lea    -0x4c(%ebp),%eax
+lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x45(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2fc>
-lea    -0x45(%ebp),%eax
+lea    -0x49(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2f8>
+lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1dc>
-lea    -0x3d(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1e1>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x3d(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyUnconnGuildMember : packet->m_uGuildKey == 0",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x44(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x182>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x187>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x17c>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a1>
-lea    -0x44(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1b9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a1>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x3d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2fc>
-lea    -0x3d(%ebp),%eax
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x181>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a6>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a6>
+lea    -0x48(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1be>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x1a6>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x41(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2f8>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x222>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x21e>
+mov    -0x28(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x40c>
-lea    -0x35(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x408>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == pclGuild ,the guild is out",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2a1>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x29d>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x29b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2c0>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2c0>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2d5>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2c0>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2fc>
-lea    -0x35(%ebp),%eax
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x297>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2bc>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2bc>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2d1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2bc>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x2f8>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x3a2>
+jne    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x39e>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x8b5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBReplyUnconnGuildMember() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x39b>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x397>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x40c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x408>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnCallGuildMembers() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x8bb,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBReplyUnconnGuildMember() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x407>
+jmp    <T> <_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader+0x403>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBReplyUnconnGuildMember(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnDBReplyUnconnGuildMemberEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  string local_50 [7];
  allocator local_49;
  string local_48 [7];
  allocator local_41;
  string local_40 [7];
  allocator local_39 [17];
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08077c00 to 08077c04 has its CatchHandler @ 08077c7a */
    std::string::string(local_50,"CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == m_pclApp",
                        &local_49);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077c1f to 08077c23 has its CatchHandler @ 08077c26 */
    CDNFException::CDNFException(pCVar1,local_50);
                    /* try { // try from 08077c65 to 08077c69 has its CatchHandler @ 08077c6c */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08077cb4 to 08077cb8 has its CatchHandler @ 08077ec2 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (*(int *)(param_1 + 10) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08077ced to 08077cf1 has its CatchHandler @ 08077d67 */
    std::string::string(local_48,
                        "CPacketTranslater::OnDBReplyUnconnGuildMember : packet->m_uGuildKey == 0",
                        &local_41);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077d0c to 08077d10 has its CatchHandler @ 08077d13 */
    CDNFException::CDNFException(pCVar1,local_48);
                    /* try { // try from 08077d52 to 08077d56 has its CatchHandler @ 08077d59 */
    std::string::~string(local_48);
    std::allocator<char>::~allocator((allocator<char> *)&local_41);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08077da1 to 08077de6 has its CatchHandler @ 08077ec2 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
  if (local_28 != (CGuild *)0x0) {
    CGuild::LoadGuildOneMemberProxy(local_28,(STGuildMemberProxy *)(local_24 + 0x12));
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08077e0c to 08077e10 has its CatchHandler @ 08077e86 */
  std::string::string(local_40,
                      "CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == pclGuild ,the guild is out"
                      ,local_39);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08077e2b to 08077e2f has its CatchHandler @ 08077e32 */
  CDNFException::CDNFException(pCVar1,local_40);
                    /* try { // try from 08077e71 to 08077e75 has its CatchHandler @ 08077e78 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08077ebd to 08077ec1 has its CatchHandler @ 08077ec2 */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 1570 行）：

```cpp
void CPacketTranslater::OnDBReplyUnconnGuildMember(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == m_pclApp");
        Packet_DB_Reply_Unconn_Guild_Member* pb = (Packet_DB_Reply_Unconn_Guild_Member*)pkt;
        unsigned int guildKey = pb->m_guildId;
        if (guildKey == 0)
        {
            throw CDNFException(
                "CPacketTranslater::OnDBReplyUnconnGuildMember : packet->m_uGuildKey == 0");
        }
        CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
        if (guild != 0)
        {
            guild->LoadGuildOneMemberProxy(pb->m_proxy);
            return;
        }
        throw CDNFException(
            "CPacketTranslater::OnDBReplyUnconnGuildMember : 0 == pclGuild ,the guild is out");
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnCallGuildMembers() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x8b5, "./log/Except", "CPacketTranslater::OnDBReplyUnconnGuildMember() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnCallGuildMembers() Exception Break");
        DNF_LOG_SCOPE_LINE(0x8bb, "./log/Except", "CPacketTranslater::OnDBReplyUnconnGuildMember() Exception Break\n");
    }
}void CPacketTranslater::OnCallGuildInvite(PacketHeader* pkt)
```
