# _ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader

`CPacketTranslater::OnNoticeGuildChatMsgHyperLink(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807401a` | `0x3ce` | `0x806a5c8` | `0x3d6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,284 +1,289 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x5c,%esp
+sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0xef>
-lea    -0x41(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink : 0 == m_pclApp",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x95>
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
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0xb4>
-lea    -0x48(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0xb4>
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
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x2b6>
-lea    -0x41(%ebp),%eax
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x2c0>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1dc>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1e6>
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1dc>
-mov    -0x20(%ebp),%eax
-movzbl 0x14b(%eax),%eax
+je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1e6>
+mov    -0x2c(%ebp),%eax
+add    $0x14b,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1dc>
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
+je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1e6>
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1d6>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
+je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1e0>
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1d6>
+je     <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x1e0>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
-mov    -0x20(%ebp),%edx
-lea    0x13(%edx),%edi
-mov    -0x20(%ebp),%edx
-movzbl 0x12(%edx),%edx
-movzbl %dl,%ebx
-mov    -0x20(%ebp),%edx
-movzbl 0x14b(%edx),%edx
-movzbl %dl,%ecx
-mov    -0x20(%ebp),%edx
-lea    0x14c(%edx),%esi
-mov    -0x20(%ebp),%edx
-mov    0xa(%edx),%edx
-mov    %eax,0x18(%esp)
+mov    %eax,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+lea    0x13(%eax),%edi
+mov    -0x2c(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+movzbl %al,%ecx
+mov    -0x2c(%ebp),%eax
+add    $0x14b,%eax
+movzbl (%eax),%eax
+movzbl %al,%edx
+mov    -0x2c(%ebp),%eax
+lea    0x14c(%eax),%esi
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    -0x20(%ebp),%ebx
+mov    %ebx,0x18(%esp)
 mov    %edi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    %ecx,0xc(%esp)
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
-mov    %edx,0x4(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild36NoticeChatMsgToGuildMembersHyperLinkEjPcihPK19hyperlink_item_infoPKc>
 nop
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3c6>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3ce>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x25b>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x265>
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
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x255>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x27a>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x27a>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x28f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x27a>
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
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x2b6>
-lea    -0x39(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x25f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x284>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x284>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x299>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x284>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x2d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x2c0>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x35c>
+jne    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x364>
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
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x430,0x8(%esp)
+movl   $"OnNoticeGuildChatMsgHyperLink",0x4(%esp)
+lea    -0x44(%ebp),%eax
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
-movl   $0x430,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x355>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x35d>
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
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3c6>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3ce>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x436,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3c1>
+jmp    <T> <_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader+0x3c9>
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
-add    $0x5c,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildChatMsgHyperLink(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29OnNoticeGuildChatMsgHyperLinkEP12PacketHeader
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
                    /* try { // try from 08074050 to 08074054 has its CatchHandler @ 080740ca */
    std::string::string(local_4c,"CPacketTranslater::OnNoticeGuildChatMsgHyperLink : 0 == m_pclApp",
                        &local_45);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807406f to 08074073 has its CatchHandler @ 08074076 */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 080740b5 to 080740b9 has its CatchHandler @ 080740bc */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08074104 to 080741ef has its CatchHandler @ 080742cc */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if (((*(int *)(param_1 + 0xe) != 0) && (*(int *)(param_1 + 10) != 0)) &&
     (param_1[0x14b] != (PacketHeader)0x0)) {
    local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_2c != (CUser *)0x0) {
      local_28 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_28 != (CGuild *)0x0) {
        pcVar2 = (char *)CUser::GetCharName(local_2c);
        CGuild::NoticeChatMsgToGuildMembersHyperLink
                  (local_28,*(uint *)(local_24 + 10),(char *)(local_24 + 0x14c),
                   (uint)(byte)local_24[0x14b],(uchar)local_24[0x12],
                   (hyperlink_item_info *)(local_24 + 0x13),pcVar2);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08074216 to 0807421a has its CatchHandler @ 08074290 */
  std::string::string(local_44,
                      "CPacketTranslater::OnNoticeGuildChatMsgHyperLink : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen"
                      ,local_3d);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08074235 to 08074239 has its CatchHandler @ 0807423c */
  CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 0807427b to 0807427f has its CatchHandler @ 08074282 */
  std::string::~string(local_44);
  std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080742c7 to 080742cb has its CatchHandler @ 080742cc */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 865 行）：

```cpp
void CPacketTranslater::OnNoticeGuildChatMsgHyperLink(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildChatMsgHyperLink : 0 == m_pclApp");
    char* pb = (char*)pkt;
    if (*(int*)(pb + 0xe) != 0 && *(int*)(pb + 0xa) != 0 && (unsigned char)pb[0x14b] != 0)
    {
        CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xa));
        if (user != 0)
        {
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(*(unsigned int*)(pb + 0xe));
            if (guild != 0)
            {
                const char* name = user->GetCharName();
                guild->NoticeChatMsgToGuildMembersHyperLink(
                    *(unsigned int*)(pb + 0xa), pb + 0x14c, (unsigned char)pb[0x14b],
                    (unsigned char)pb[0x12], (hyperlink_item_info*)(pb + 0x13), name);
            }
        }
    }
    else
    {
        throw CDNFException(
            "CPacketTranslater::OnNoticeGuildChatMsgHyperLink : packet->m_uCharID && packet->m_uGuildKey && packet->m_msgLen");
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break : %s\n", e.what());
        CMyFileLog log("OnNoticeGuildChatMsgHyperLink", 0x430);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x436);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildChatMsgHyperLink() Exception Break\n");
    }
}
```
