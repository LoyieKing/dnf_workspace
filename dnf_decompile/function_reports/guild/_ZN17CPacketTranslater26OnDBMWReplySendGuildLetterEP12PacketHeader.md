# _ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader

`CPacketTranslater::OnDBMWReplySendGuildLetter(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8079ed6` | `0x384` | `0x8070824` | `0x391` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,262 +1,268 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0xef>
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == m_pclApp",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x95>
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
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0xb4>
-lea    -0x50(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0xcc>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x49(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x29e>
-lea    -0x49(%ebp),%eax
+lea    -0x39(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x2ad>
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x63(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x53(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Monitor_Reply_Guild_MailC1Ev>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x28(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1e7>
-lea    -0x41(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1e9>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : packet->m_uGuildKey == 0",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x18d>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x18f>
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
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x187>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ac>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ac>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1c4>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ac>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x41(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x29e>
-lea    -0x41(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x189>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ae>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ae>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1c6>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x1ae>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x31(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x2ad>
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    -0x28(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
+lea    0x10(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x25b>
+movl   $0xb0e,0x8(%esp)
+movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
+movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
+movl   $"./log/GuildModify",0x4(%esp)
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x389>
+lea    -0x53(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x53(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser14GetIdByChannelEv>
+mov    %eax,(%ebx)
+lea    -0x53(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x28(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+mov    %al,(%edx)
+lea    -0x53(%ebp),%eax
+movl   $0x13,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x25a>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%ebx
-movl   $0xb0e,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d",0x8(%esp)
-movl   $"./log/GuildModify",0x4(%esp)
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x59(%ebp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x55(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0x12(%eax),%eax
-mov    %al,-0x51(%ebp)
-lea    -0x63(%ebp),%eax
-movl   $0x13,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x389>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x31e>
+jne    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x32b>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0xb19,0x8(%esp)
+movl   $"OnDBMWReplySendGuildLetter",0x4(%esp)
+lea    -0x5c(%ebp),%eax
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
-movl   $0xb19,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x324>
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
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x37c>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x389>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xb1e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBMWReplySendGuildLetter() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x64(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x377>
+jmp    <T> <_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader+0x384>
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
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBMWReplySendGuildLetter(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26OnDBMWReplySendGuildLetterEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  CDNFException *pCVar2;
  Packet_Monitor_Reply_Guild_Mail local_67 [10];
  undefined4 local_5d;
  undefined4 local_59;
  PacketHeader local_55;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45;
  CMyFileLog local_44 [24];
  CUser *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08079f0c to 08079f10 has its CatchHandler @ 08079f86 */
    std::string::string(local_54,"CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == m_pclApp",
                        &local_4d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08079f2b to 08079f2f has its CatchHandler @ 08079f32 */
    CDNFException::CDNFException(pCVar2,local_54);
                    /* try { // try from 08079f71 to 08079f75 has its CatchHandler @ 08079f78 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08079fc0 to 08079fc4 has its CatchHandler @ 0807a170 */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Monitor_Reply_Guild_Mail::Packet_Monitor_Reply_Guild_Mail(local_67);
  if (*(int *)(local_28 + 0xe) == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0807a004 to 0807a008 has its CatchHandler @ 0807a07e */
    std::string::string(local_4c,
                        "CPacketTranslater::OnDBMWReplySendGuildLetter : packet->m_uGuildKey == 0",
                        &local_45);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807a023 to 0807a027 has its CatchHandler @ 0807a02a */
    CDNFException::CDNFException(pCVar2,local_4c);
                    /* try { // try from 0807a069 to 0807a06d has its CatchHandler @ 0807a070 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807a0b8 to 0807a16a has its CatchHandler @ 0807a170 */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = m_pclApp + 0x10;
  local_2c = (CUser *)CUserManager::FindUser_CharNo(local_24);
  if (local_2c == (CUser *)0x0) {
    uVar1 = *(undefined4 *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_44,"OnDBMWReplySendGuildLetter",0xb0e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_44,"./log/GuildModify",
               "CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d",uVar1);
  }
  else {
    local_5d = *(undefined4 *)(local_28 + 10);
    local_59 = CUser::GetIdByChannel(local_2c);
    local_55 = local_28[0x12];
    CUser::SendToGameserver(local_2c,(char *)local_67,0x13);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 2248 行）：

```cpp
void CPacketTranslater::OnDBMWReplySendGuildLetter(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == m_pclApp");
    char* pb = (char*)pkt;
    Packet_Monitor_Reply_Guild_Mail reply;
    if (*(unsigned int*)(pb + 0xe) == 0)
    {
        throw CDNFException(
            "CPacketTranslater::OnDBMWReplySendGuildLetter : packet->m_uGuildKey == 0");
    }
    unsigned int charNo = *(unsigned int*)(pb + 0xa);
    CUser* user;
    if ((user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0xb0e,"./log/GuildModify",
            "CPacketTranslater::OnDBMWReplySendGuildLetter : 0 == pclUser, Char Key = %d", charNo);
    }
    else
    {
        *(unsigned int*)((char*)&reply + 0xa) = charNo;
        *(unsigned int*)((char*)&reply + 0xe) = user->GetIdByChannel();
        *(unsigned char*)((char*)&reply + 0x12) = *(unsigned char*)(pb + 0x12);
        user->SendToGameserver((char*)&reply, 0x13);
    }
    }
    catch (CDNFException& e)
    {
        CMyFileLog log("OnDBMWReplySendGuildLetter", 0xb19);
        log("./log/Except", "CPacketTranslater::OnDBMWReplySendGuildLetter() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        CMyFileLog log(__FUNCTION__, 0xb1e);
        log("./log/Except", "CPacketTranslater::OnDBMWReplySendGuildLetter() Exception Break\n");
    }
}
```
