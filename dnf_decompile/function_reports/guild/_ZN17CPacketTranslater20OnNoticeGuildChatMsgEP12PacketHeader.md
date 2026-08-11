# _ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader

`CPacketTranslater::OnNoticeGuildChatMsg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8073c70` | `0x3a9` | `0x806a4fe` | `0x3b2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,277 +1,280 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0xef>
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg : 0 == m_pclApp",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x95>
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
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0xb4>
-lea    -0x48(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x291>
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x29c>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x11e>
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x11e>
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1f7>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x29(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CPacketTranslater::OnNoticeGuildChatMsg : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x30(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x19d>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x197>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1bc>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1bc>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1d4>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1bc>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x29c>
+lea    -0x29(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_UserManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
+mov    %eax,-0x24(%ebp)
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Get_GuildManagerEv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1b7>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1b7>
-mov    -0x20(%ebp),%eax
-movzbl 0x12(%eax),%eax
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1b7>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1b1>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x1b1>
-mov    -0x28(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3aa>
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3aa>
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    -0x20(%ebp),%edx
-movzbl 0x12(%edx),%edx
+mov    -0x28(%ebp),%edx
+add    $0x12,%edx
+movzbl (%edx),%edx
 movzbl %dl,%ecx
-mov    -0x20(%ebp),%edx
+mov    -0x28(%ebp),%edx
 lea    0x13(%edx),%ebx
-mov    -0x20(%ebp),%edx
-mov    0xa(%edx),%edx
+mov    -0x28(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%edx
 mov    %eax,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %edx,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild27NoticeChatMsgToGuildMembersEjPciPKc>
-nop
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3a1>
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CPacketTranslater::OnNoticeGuildChatMsg : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x236>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x230>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x255>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x255>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x26a>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x255>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x291>
-lea    -0x39(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3aa>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x337>
+jne    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x340>
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
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x405,0x8(%esp)
+movl   $"OnNoticeGuildChatMsg",0x4(%esp)
+lea    -0x40(%ebp),%eax
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
-movl   $0x405,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x330>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x339>
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
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3a1>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3aa>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x40b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildChatMsg() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x39c>
+jmp    <T> <_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader+0x3a5>
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

/* CPacketTranslater::OnNoticeGuildChatMsg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnNoticeGuildChatMsgEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  char *pcVar2;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d [17];
  CUser *local_2c;
  CGuild *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08073ca6 to 08073caa has its CatchHandler @ 08073d20 */
    std::string::string(local_4c,"CPacketTranslater::OnNoticeGuildChatMsg : 0 == m_pclApp",&local_45
                       );
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08073cc5 to 08073cc9 has its CatchHandler @ 08073ccc */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 08073d0b to 08073d0f has its CatchHandler @ 08073d12 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08073d5a to 08073e20 has its CatchHandler @ 08073efd */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (((*(int *)(param_1 + 0xe) != 0) && (*(int *)(param_1 + 10) != 0)) &&
     (param_1[0x12] != (PacketHeader)0x0)) {
    local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_2c != (CUser *)0x0) {
      local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_28 != (CGuild *)0x0) {
        pcVar2 = (char *)CUser::GetCharName(local_2c);
        CGuild::NoticeChatMsgToGuildMembers
                  (local_28,*(uint *)(local_24 + 10),(char *)(local_24 + 0x13),
                   (uint)(byte)local_24[0x12],pcVar2);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08073e47 to 08073e4b has its CatchHandler @ 08073ec1 */
  std::string::string(local_44,
                      "CPacketTranslater::OnNoticeGuildChatMsg : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen"
                      ,local_3d);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08073e66 to 08073e6a has its CatchHandler @ 08073e6d */
  CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 08073eac to 08073eb0 has its CatchHandler @ 08073eb3 */
  std::string::~string(local_44);
  std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08073ef8 to 08073efc has its CatchHandler @ 08073efd */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 705 行）：

```cpp
void CPacketTranslater::OnNoticeGuildChatMsg(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildChatMsg : 0 == m_pclApp")
    char* pb = (char*)pkt;
    if (*(unsigned int*)(pb + 0xe) == 0 || *(unsigned int*)(pb + 10) == 0 || pb[0x12] == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeGuildChatMsg : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    CUser* user = m_pclApp->Get_UserManager()->FindUser_CharNo(*(unsigned int*)(pb + 10));
    CGuild* guild = m_pclApp->Get_GuildManager()->FindGuild(*(unsigned int*)(pb + 0xe));
    if (user != 0 && guild != 0)
    {
        guild->NoticeChatMsgToGuildMembers(*(unsigned int*)(pb + 10), pb + 0x13,
                                           (int)(unsigned char)pb[0x12],
                                           (const char*)user->GetCharName());
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n", e.what());
        CMyFileLog log("OnNoticeGuildChatMsg", 0x405);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildChatMsg() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildChatMsg() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x40b);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildChatMsg() Exception Break\n");
    }
}
```
