# _ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader

`CPacketTranslater::OnNoticeMemberChatMsgHyperLink(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ec94` | `0x3aa` | `0x807a2b4` | `0x3a7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,275 +1,272 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0xef>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink : 0 == m_pclApp",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x48(%ebp),%esi
+lea    -0x44(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x95>
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
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0xb4>
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0xb4>
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
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x289>
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
 mov    0xa(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1af>
+mov    0x8(%ebp),%eax
 movzbl 0x147(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b8>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1af>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39b>
+mov    0x8(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x2d0,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CMemberManager10FindMemberEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x1b2>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39e>
+mov    0x8(%ebp),%eax
 lea    0xf(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%edx
-mov    -0x20(%ebp),%eax
+mov    0x8(%ebp),%eax
 movzbl 0x147(%eax),%eax
 movzbl %al,%eax
-mov    -0x20(%ebp),%ecx
+mov    0x8(%ebp),%ecx
 lea    0x148(%ecx),%ebx
-mov    -0x28(%ebp),%ecx
+mov    -0x24(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    %ebx,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember37NoticeChatMsgToMemberMembersHyperLinkEPcihPK19hyperlink_item_infoP5CUser>
-nop
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a2>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39f>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink : packet->m_uMemberID && packet->m_msgLen",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x40(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x237>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x22e>
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
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x231>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x26b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x256>
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
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x292>
-lea    -0x39(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x228>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x24d>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x24d>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x262>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x24d>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x289>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x338>
+jne    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x32f>
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
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x1cb7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x331>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x328>
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
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x3a2>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39f>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x1cbd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39d>
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x394>
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
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39f>
+nop
+jmp    <T> <_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader+0x39f>
+nop
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeMemberChatMsgHyperLink(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnNoticeMemberChatMsgHyperLinkEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d [17];
  CUser *local_2c;
  CMember *local_28;
  PacketHeader *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0808ecca to 0808ecce has its CatchHandler @ 0808ed44 */
    std::string::string(local_4c,"CPacketTranslater::OnNoticeMemberChatMsgHyperLink : 0 == m_pclApp"
                        ,&local_45);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808ece9 to 0808eced has its CatchHandler @ 0808ecf0 */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 0808ed2f to 0808ed33 has its CatchHandler @ 0808ed36 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808ed7e to 0808ee45 has its CatchHandler @ 0808ef22 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if ((*(int *)(param_1 + 10) != 0) && (param_1[0x147] != (PacketHeader)0x0)) {
    local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_2c != (CUser *)0x0) {
      local_28 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj(m_pclApp + 0x2d0);
      if (local_28 != (CMember *)0x0) {
        CMember::NoticeChatMsgToMemberMembersHyperLink
                  (local_28,(char *)(local_24 + 0x148),(uint)(byte)local_24[0x147],
                   (uchar)local_24[0xe],(hyperlink_item_info *)(local_24 + 0xf),local_2c);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0808ee6c to 0808ee70 has its CatchHandler @ 0808eee6 */
  std::string::string(local_44,
                      "CPacketTranslater::OnNoticeMemberChatMsgHyperLink : packet->m_uMemberID && packet->m_msgLen"
                      ,local_3d);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808ee8b to 0808ee8f has its CatchHandler @ 0808ee92 */
  CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 0808eed1 to 0808eed5 has its CatchHandler @ 0808eed8 */
  std::string::~string(local_44);
  std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0808ef1d to 0808ef21 has its CatchHandler @ 0808ef22 */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4760 行）：

```cpp
void CPacketTranslater::OnNoticeMemberChatMsgHyperLink(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeMemberChatMsgHyperLink : 0 == m_pclApp");
    }
    if (((RA_UINT<10>*)pkt)->v != 0 && ((RA_S8<327>*)pkt)->v != 0)
    {
        CUser* user =
            ((CUserManager*)((char*)m_pclApp + 0x10))->FindUser_CharNo(
                ((RA_UINT<10>*)pkt)->v);
        if (user != 0)
        {
            CMember* member =
                ((CMemberManager*)((char*)m_pclApp + 0x2d0))->FindMember(
                    ((RA_UINT<10>*)pkt)->v);
            if (member != 0)
            {
                member->NoticeChatMsgToMemberMembersHyperLink(
                    (char*)pkt + 0x148,
                    (unsigned int)(unsigned char)((RA_S8<327>*)pkt)->v,
                    ((RA_U8<14>*)pkt)->v,
                    (hyperlink_item_info*)((char*)pkt + 0xf), user);
            }
        }
        return;
    }
    throw CDNFException(
        "CPacketTranslater::OnNoticeMemberChatMsgHyperLink : packet->m_uMemberID && "
        "packet->m_msgLen");


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x1cb7, "./log/Except", "CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break");
        DNF_LOG_SCOPE_LINE(0x1cbd, "./log/Except", "CPacketTranslater::OnNoticeMemberChatMsgHyperLink() Exception Break\n");
    }
}
```
