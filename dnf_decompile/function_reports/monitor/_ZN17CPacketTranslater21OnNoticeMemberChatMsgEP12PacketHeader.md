# _ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader

`CPacketTranslater::OnNoticeMemberChatMsg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80827ea` | `0x389` | `0x806e39c` | `0x386` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,268 +1,265 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0xef>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x95>
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
 jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0xb4>
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0xb4>
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
-lea    -0x41(%ebp),%eax
+lea    -0x3d(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x268>
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
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x18e>
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x197>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x18e>
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
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37a>
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
-je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x191>
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37d>
+mov    0x8(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
-mov    -0x20(%ebp),%edx
+mov    0x8(%ebp),%edx
 lea    0xf(%edx),%ecx
-mov    -0x28(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7CMember28NoticeChatMsgToMemberMembersEPciP5CUser>
-nop
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x381>
-lea    -0x39(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37e>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg : packet->m_uMemberID && packet->m_msgLen",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x216>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x20d>
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x210>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x24a>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x235>
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x271>
-lea    -0x39(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x207>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x22c>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x22c>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x241>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x22c>
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
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x268>
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
-jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x317>
+jne    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x30e>
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
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x822,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x310>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x307>
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
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x381>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37e>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x828,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeMemberChatMsg() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x373>
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
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37e>
+nop
+jmp    <T> <_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader+0x37e>
+nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeMemberChatMsg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnNoticeMemberChatMsgEP12PacketHeader
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
                    /* try { // try from 08082820 to 08082824 has its CatchHandler @ 0808289a */
    std::string::string(local_4c,"CPacketTranslater::OnNoticeMemberChatMsg : 0 == m_pclApp",
                        &local_45);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808283f to 08082843 has its CatchHandler @ 08082846 */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 08082885 to 08082889 has its CatchHandler @ 0808288c */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 080828d4 to 0808297a has its CatchHandler @ 08082a57 */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  if ((*(int *)(param_1 + 10) != 0) && (param_1[0xe] != (PacketHeader)0x0)) {
    local_2c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
    if (local_2c != (CUser *)0x0) {
      local_28 = (CMember *)CMemberManager::_ZN14CMemberManager10FindMemberEj(m_pclApp + 0x2d0);
      if (local_28 != (CMember *)0x0) {
        CMember::NoticeChatMsgToMemberMembers
                  (local_28,(char *)(local_24 + 0xf),(uint)(byte)local_24[0xe],local_2c);
      }
    }
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 080829a1 to 080829a5 has its CatchHandler @ 08082a1b */
  std::string::string(local_44,
                      "CPacketTranslater::OnNoticeMemberChatMsg : packet->m_uMemberID && packet->m_msgLen"
                      ,local_3d);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080829c0 to 080829c4 has its CatchHandler @ 080829c7 */
  CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 08082a06 to 08082a0a has its CatchHandler @ 08082a0d */
  std::string::~string(local_44);
  std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08082a52 to 08082a56 has its CatchHandler @ 08082a57 */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 1561 行）：

```cpp
void CPacketTranslater::OnNoticeMemberChatMsg(PacketHeader* pkt)
{try
{


    if (m_pclApp == 0)
    {
        throw CDNFException("CPacketTranslater::OnNoticeMemberChatMsg : 0 == m_pclApp");
    }
    if (((RA_UINT<10>*)pkt)->v != 0 && ((RA_S8<14>*)pkt)->v != 0)
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
                member->NoticeChatMsgToMemberMembers(
                    (char*)pkt + 0xf, (unsigned int)(unsigned char)((RA_S8<14>*)pkt)->v,
                    user);
            }
        }
        return;
    }
    throw CDNFException(
        "CPacketTranslater::OnNoticeMemberChatMsg : packet->m_uMemberID && packet->m_msgLen");


    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x822, "./log/Except", "CPacketTranslater::OnNoticeMemberChatMsg() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeMemberChatMsg() Exception Break");
        DNF_LOG_SCOPE_LINE(0x828, "./log/Except", "CPacketTranslater::OnNoticeMemberChatMsg() Exception Break\n");
    }
}
```
