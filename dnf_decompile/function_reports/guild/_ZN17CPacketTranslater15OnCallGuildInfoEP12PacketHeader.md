# _ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader

`CPacketTranslater::OnCallGuildInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807cd58` | `0x402` | `0x80734b0` | `0x408` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,275 +1,282 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0xb3c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe2>
-lea    -0x51(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xe5>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCallGuildInfo : 0 == m_pclApp",0x4(%esp)
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x58(%ebp),%esi
+lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xa7>
-lea    -0x58(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xc2>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x51(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x321>
-lea    -0x51(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+add    $0x10,%edx
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15b>
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%ebx
-movl   $0xdc5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnCallGuildInfo() pclUser = 0, Char Key : %d\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x50(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
-lea    -0xb2e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev>
-mov    -0x28(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0xb24(%ebp)
-mov    -0x28(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0xb20(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0xb1c(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2c0>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-add    $0x4,%edx
-mov    0x3(%eax,%edx,4),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x1ed>
-movl   $0xdd3,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    -0x20(%ebp),%eax
-mov    %eax,0xc(%esp)
-movl   $"CPacketTranslater::OnCallGuildInfo : packet->m_uGuildKey[%d] == 0",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bc>
-mov    -0x20(%ebp),%edx
-mov    -0x28(%ebp),%eax
-add    $0x4,%edx
-mov    0x3(%eax,%edx,4),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x30(%ebp)
 cmpl   $0x0,-0x30(%ebp)
 sete   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bb>
-mov    -0x20(%ebp),%edx
-mov    -0x20(%ebp),%ecx
+je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x15d>
+movl   $0xdc5,0x8(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x34(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnCallGuildInfo() pclUser = 0, Char Key : %d\n",0x8(%esp)
+movl   $"./log/Except",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3fd>
+lea    -0xb32(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN36Packet_Monitor_Call_Guild_Info_ReplyC1Ev>
+lea    -0xb32(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x34(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xb32(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x34(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0xb32(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bd>
 mov    -0x28(%ebp),%eax
-add    $0x4,%ecx
-mov    0x3(%eax,%ecx,4),%eax
+shl    $0x2,%eax
+add    $0x13,%eax
+add    -0x34(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x20a>
+movl   $0xdd3,0x8(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x28(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnCallGuildInfo : packet->m_uGuildKey[%d] == 0",0x8(%esp)
+movl   $"./log/Guild",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2b9>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZN13CGuildManager9FindGuildEj>
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+je     <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2b8>
+lea    -0xb32(%ebp),%eax
+mov    -0x28(%ebp),%edx
 imul   $0x1d,%edx,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xb06,%edx
-mov    %eax,0x3(%edx)
-mov    -0x20(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+add    $0x13,%edx
+lea    (%eax,%edx,1),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0xb32(%ebp),%eax
+mov    -0x28(%ebp),%edx
+imul   $0x1d,%edx,%edx
+add    $0x17,%edx
+lea    (%eax,%edx,1),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildLevelEv>
-imul   $0x1d,%ebx,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xb06,%edx
-mov    %al,0x7(%edx)
-mov    -0x20(%ebp),%ebx
-mov    -0x30(%ebp),%eax
+mov    %al,(%ebx)
+lea    -0xb32(%ebp),%eax
+mov    -0x28(%ebp),%edx
+imul   $0x1d,%edx,%edx
+add    $0x18,%edx
+lea    (%eax,%edx,1),%ebx
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildRankEv>
-imul   $0x1d,%ebx,%edx
-lea    -0x18(%ebp),%ecx
-lea    (%ecx,%edx,1),%edx
-sub    $0xb06,%edx
-mov    %al,0x8(%edx)
-mov    -0x30(%ebp),%eax
+mov    %al,(%ebx)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
-mov    -0x20(%ebp),%ecx
-lea    -0xb2e(%ebp),%edx
+lea    -0xb32(%ebp),%edx
+mov    -0x28(%ebp),%ecx
 imul   $0x1d,%ecx,%ecx
-add    $0x10,%ecx
+add    $0x19,%ecx
 add    %ecx,%edx
-add    $0x9,%edx
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2bc>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x2b9>
 nop
-addl   $0x1,-0x20(%ebp)
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
+addl   $0x1,-0x28(%ebp)
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
-cmp    -0x20(%ebp),%eax
+cmp    -0x28(%ebp),%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x19a>
-mov    -0x28(%ebp),%eax
-movzbl 0x12(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x1b1>
+mov    -0x34(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %dx,%ax
 shl    $0x2,%eax
 add    %edx,%eax
 add    $0x13,%eax
-mov    %ax,-0xb2c(%ebp)
-movzwl -0xb2c(%ebp),%eax
-movzwl %ax,%edx
-lea    -0xb2e(%ebp),%eax
+mov    %ax,-0x2a(%ebp)
+lea    -0xb32(%ebp),%eax
+lea    0x2(%eax),%edx
+movzwl -0x2a(%ebp),%eax
+mov    %ax,(%edx)
+movzwl -0x2a(%ebp),%edx
+lea    -0xb32(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3fd>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39d>
+jne    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3a3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xde9,0x8(%esp)
+movl   $"OnCallGuildInfo",0x4(%esp)
+lea    -0x54(%ebp),%eax
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
-movl   $0xde9,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCallGuildInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x396>
+lea    -0x54(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x39c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f7>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3fd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xdee,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCallGuildInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f2>
+lea    -0x5c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader+0x3f8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0xb3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCallGuildInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnCallGuildInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  CDNFException *this;
  void *__src;
  Packet_Monitor_Call_Guild_Info_Reply local_b32 [2];
  ushort local_b30;
  undefined4 local_b28;
  undefined4 local_b24;
  PacketHeader local_b20;
  undefined4 uStack_b1f;
  undefined1 auStack_b1b [2751];
  string local_5c [7];
  allocator local_55;
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [24];
  CGuild *local_34;
  CUser *local_30;
  PacketHeader *local_2c;
  uint local_28;
  int local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807cd91 to 0807cd95 has its CatchHandler @ 0807cdff */
    std::string::string(local_5c,"CPacketTranslater::OnCallGuildInfo : 0 == m_pclApp",&local_55);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807cdb0 to 0807cdb4 has its CatchHandler @ 0807cdb7 */
    CDNFException::CDNFException(this,local_5c);
                    /* try { // try from 0807cdee to 0807cdf2 has its CatchHandler @ 0807cdf5 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807ce35 to 0807d073 has its CatchHandler @ 0807d079 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = param_1;
  local_28 = m_pclApp + 0x10;
  local_30 = (CUser *)CUserManager::FindUser_CharNo(local_28);
  if (local_30 == (CUser *)0x0) {
    uVar2 = *(undefined4 *)(local_2c + 0xe);
    CMyFileLog::CMyFileLog(local_54,"OnCallGuildInfo",0xdc5);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_54,"./log/Except",
               "CPacketTranslater::OnCallGuildInfo() pclUser = 0, Char Key : %d\n",uVar2);
  }
  else {
    Packet_Monitor_Call_Guild_Info_Reply::Packet_Monitor_Call_Guild_Info_Reply(local_b32);
    local_b28 = *(undefined4 *)(local_2c + 10);
    local_b24 = *(undefined4 *)(local_2c + 0xe);
    local_b20 = local_2c[0x12];
    for (local_24 = 0; local_24 < (int)(uint)(byte)local_2c[0x12]; local_24 = local_24 + 1) {
      if (*(int *)(local_2c + (local_24 + 4) * 4 + 3) == 0) {
        CMyFileLog::CMyFileLog(local_4c,"OnCallGuildInfo",0xdd3);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_4c,"./log/Guild",
                   "CPacketTranslater::OnCallGuildInfo : packet->m_uGuildKey[%d] == 0",local_24);
      }
      else {
        local_34 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
        if (local_34 != (CGuild *)0x0) {
          *(undefined4 *)((int)&uStack_b1f + local_24 * 0x1d) =
               *(undefined4 *)(local_2c + (local_24 + 4) * 4 + 3);
          iVar3 = local_24;
          uVar4 = CGuild::GetGuildLevel(local_34);
          auStack_b1b[iVar3 * 0x1d] = uVar4;
          iVar3 = local_24;
          uVar4 = CGuild::GetGuildRank(local_34);
          auStack_b1b[iVar3 * 0x1d + 1] = uVar4;
          __src = (void *)CGuild::GetGuildName(local_34);
          memcpy(auStack_b1b + local_24 * 0x1d + 2,__src,0x16);
        }
      }
    }
    PVar1 = local_2c[0x12];
    local_b30 = ((ushort)(byte)PVar1 * 8 - (ushort)(byte)PVar1) * 4 + (ushort)(byte)PVar1 + 0x13;
    CUser::SendToGameserver(local_30,(char *)local_b32,(uint)local_b30);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2850 行）：

```cpp
void CPacketTranslater::OnCallGuildInfo(PacketHeader* pkt)
{
    THROW_IF_NO_APP("CPacketTranslater::OnCallGuildInfo : 0 == m_pclApp")
    char* pb = (char*)pkt;
    try
    {
        CUser* user;
        if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xe))) == 0)
        {
            CMyFileLog log("OnCallGuildInfo", 0xdc5);
            log("./log/Except",
                "CPacketTranslater::OnCallGuildInfo() pclUser = 0, Char Key : %d\n",
                *(unsigned int*)(pb + 0xe));
            return;
        }
        Packet_Monitor_Call_Guild_Info_Reply replyPkt;
        *(unsigned int*)((char*)&replyPkt + 0xa) = *(unsigned int*)(pb + 0xa);
        *(unsigned int*)((char*)&replyPkt + 0xe) = *(unsigned int*)(pb + 0xe);
        *(unsigned char*)((char*)&replyPkt + 0x12) = pb[0x12];
        for (int i = 0; i < (unsigned char)pb[0x12]; i++)
        {
            unsigned int guildKey = *(unsigned int*)(pb + 0x13 + i * 4);
            if (guildKey == 0)
            {
                CMyFileLog log("OnCallGuildInfo", 0xdd3);
                log("./log/Guild",
                    "CPacketTranslater::OnCallGuildInfo : packet->m_uGuildKey[%d] == 0", i);
                continue;
            }
            CGuild* guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey);
            if (guild == 0)
            {
                continue;
            }
            *(unsigned int*)((char*)&replyPkt + 0x13 + i * 0x1d) = guildKey;
            *(unsigned char*)((char*)&replyPkt + 0x17 + i * 0x1d) = guild->GetGuildLevel();
            *(unsigned char*)((char*)&replyPkt + 0x18 + i * 0x1d) = guild->GetGuildRank();
            memcpy((char*)&replyPkt + 0x19 + i * 0x1d, guild->GetGuildName(), 0x16);
        }
        unsigned short totalLen =
            (unsigned short)((unsigned char)pb[0x12] * 0x1d + 0x13);
        *(unsigned short*)((char*)&replyPkt + 0x2) = totalLen;
        user->SendToGameserver((char*)&replyPkt, totalLen);
    }
    catch (std::exception& e)
    {
        CMyFileLog log("OnCallGuildInfo", 0xde9);
        log("./log/Except",
            "CPacketTranslater::OnCallGuildInfo() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xdee);
        log("./log/Except",
            "CPacketTranslater::OnCallGuildInfo() Exception Break\n");
    }
}
```
