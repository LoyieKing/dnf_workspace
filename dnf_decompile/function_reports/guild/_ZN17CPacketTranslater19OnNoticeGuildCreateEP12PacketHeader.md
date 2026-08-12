# _ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader

`CPacketTranslater::OnNoticeGuildCreate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8073574` | `0x3d4` | `0x8069b18` | `0x3e2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,282 +1,285 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x7c,%esp
+sub    $0x8c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xef>
-lea    -0x41(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xf2>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x41(%ebp),%eax
+lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildCreate : 0 == m_pclApp",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x95>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x98>
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x8f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb4>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb4>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xcc>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb4>
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x2bc>
-lea    -0x41(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x92>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb7>
+lea    -0x3c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xcf>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0xb7>
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
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x2c9>
+lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1ed>
-lea    -0x39(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1f0>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x39(%ebp),%eax
+lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",0x4(%esp)
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x193>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x196>
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x18d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b2>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b2>
-lea    -0x40(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1ca>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b2>
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x2bc>
-lea    -0x39(%ebp),%eax
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x190>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b5>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b5>
+lea    -0x34(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1cd>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x1b5>
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
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x2c9>
+lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-mov    -0x24(%ebp),%eax
-mov    0xe(%eax),%eax
+mov    -0x2c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x10,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3cc>
+mov    %eax,-0x24(%ebp)
+cmpl   $0x0,-0x24(%ebp)
+je     <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3d7>
+mov    -0x24(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,-0x20(%ebp)
+mov    -0x2c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x290(%edx),%ecx
+mov    -0x20(%ebp),%edx
+mov    %edx,0xc(%esp)
+mov    -0x28(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %ecx,(%esp)
+call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
 mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    -0x24(%ebp),%edx
-mov    0xa(%edx),%edx
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
-add    $0x290,%ecx
-mov    %eax,0xc(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %ecx,(%esp)
-call   <T> <_ZN13CGuildManager11CreateGuildEjP14CServerHandlerj>
-mov    -0x20(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
-lea    -0x75(%ebp),%eax
+lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN41Packet_Monitor_Notice_Guild_Create_ToUserC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 add    $0xa,%eax
 movl   $0x1f,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x75(%ebp),%eax
+lea    -0x79(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x28(%ebp),%eax
+lea    -0x79(%ebp),%eax
+lea    0x29(%eax),%ebx
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x4c(%ebp)
-lea    -0x75(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x79(%ebp),%eax
 movl   $0x2d,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3cc>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3d7>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0x2,%eax
-jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x362>
+jne    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x36d>
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
 movl   $"CPacketTranslater::OnNoticeGuildCreate() Exception Break : %s\n",(%esp)
 call   <T> <printf>
+movl   $0x37f,0x8(%esp)
+movl   $"OnNoticeGuildCreate",0x4(%esp)
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
-movl   $0x37f,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnNoticeGuildCreate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x35b>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x366>
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
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3cc>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3d7>
 mov    %ecx,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnNoticeGuildCreate() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x385,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnNoticeGuildCreate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3c7>
+jmp    <T> <_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader+0x3d2>
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
-add    $0x7c,%esp
+add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnNoticeGuildCreate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnNoticeGuildCreateEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *pCVar1;
  uint uVar2;
  Packet_Monitor_Notice_Guild_Create_ToUser local_79 [10];
  undefined1 auStack_6f [31];
  undefined4 local_50;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d [17];
  CUser *local_2c;
  PacketHeader *local_28;
  CServerHandler *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080735aa to 080735ae has its CatchHandler @ 08073624 */
    std::string::string(local_4c,"CPacketTranslater::OnNoticeGuildCreate : 0 == m_pclApp",&local_45)
    ;
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080735c9 to 080735cd has its CatchHandler @ 080735d0 */
    CDNFException::CDNFException(pCVar1,local_4c);
                    /* try { // try from 0807360f to 08073613 has its CatchHandler @ 08073616 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807365e to 08073662 has its CatchHandler @ 0807382c */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  if (local_24 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080736a8 to 080736ac has its CatchHandler @ 08073722 */
    std::string::string(local_44,"CGuildManager::GuildMemLogin() pclServerHandler == NULL\n",
                        local_3d);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080736c7 to 080736cb has its CatchHandler @ 080736ce */
    CDNFException::CDNFException(pCVar1,local_44);
                    /* try { // try from 0807370d to 08073711 has its CatchHandler @ 08073714 */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)local_3d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0807375c to 08073826 has its CatchHandler @ 0807382c */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_2c = (CUser *)CUserManager::FindUser_CharNo((uint)(m_pclApp + 0x10));
  if (local_2c != (CUser *)0x0) {
    uVar2 = CUser::GetUniqCharNo(local_2c);
    CGuildManager::CreateGuild
              ((CGuildManager *)(m_pclApp + 0x290),*(uint *)(local_28 + 10),local_24,uVar2);
    CUser::QueryGuildMember(local_2c,local_24);
    Packet_Monitor_Notice_Guild_Create_ToUser::Packet_Monitor_Notice_Guild_Create_ToUser(local_79);
    memcpy(auStack_6f,local_28 + 10,0x1f);
    local_50 = CUser::GetIdByChannel(local_2c);
    CUser::SendToGameserver(local_2c,(char *)local_79,0x2d);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 756 行）：

```cpp
void CPacketTranslater::OnNoticeGuildCreate(PacketHeader* pkt)
{
    try
    {
    THROW_IF_NO_APP("CPacketTranslater::OnNoticeGuildCreate : 0 == m_pclApp");
    char* pb = (char*)pkt;
    CServerHandler* handler;
    if ((handler = m_pclApp->Get_ServerHandler()) == 0)
    {
        throw CDNFException("CGuildManager::GuildMemLogin() pclServerHandler == NULL\n");
    }
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(*(unsigned int*)(pb + 0xe));
    if (user != 0)
    {
        unsigned int uniqCharNo = user->GetUniqCharNo();
        (&m_pclApp->m_guildManager)->CreateGuild(*(unsigned int*)(pb + 0xa), handler,
                                                  uniqCharNo);
        user->QueryGuildMember(handler);
        Packet_Monitor_Notice_Guild_Create_ToUser notice;
        memcpy((char*)&notice + 0xa, pb + 0xa, 0x1f);
        *(unsigned int*)((char*)&notice + 0x29) = user->GetIdByChannel();
        user->SendToGameserver((char*)&notice, 0x2d);
    }
    }
    catch (CDNFException& e)
    {
        printf("CPacketTranslater::OnNoticeGuildCreate() Exception Break : %s\n", e.what());
        CMyFileLog log("OnNoticeGuildCreate", 0x37f);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildCreate() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnNoticeGuildCreate() Exception Break");
        CMyFileLog log(__FUNCTION__, 0x385);
        log("./log/Except", "CPacketTranslater::OnNoticeGuildCreate() Exception Break\n");
    }
}
```
