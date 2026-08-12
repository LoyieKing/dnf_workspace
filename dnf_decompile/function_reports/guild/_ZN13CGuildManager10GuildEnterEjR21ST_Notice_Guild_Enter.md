# _ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter

`CGuildManager::GuildEnter(unsigned int, ST_Notice_Guild_Enter&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095e46` | `0x4f8` | `0x805bbc4` | `0x4fa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,377 +1,378 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0xf2>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildEnter()\t0 == m_pclApp\n",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x95>
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
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x8f>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0xb4>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0xcf>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0xb4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x1d8>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x2d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildEnter()\t0 == dwGuildKey\n",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x34(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x17b>
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
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x175>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x19a>
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x1b5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x19a>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x2d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,-0x24(%ebp)
 cmpl   $0x0,-0x24(%ebp)
 sete   %al
 test   %al,%al
 je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x2d3>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::GuildEnter() pclServerHandler == NULL\n",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x276>
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
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x270>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x295>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x295>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x2b0>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x295>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15Get_UserManagerEv>
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x317>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser21SendSetGuildKeyToUserEjj>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x424>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x426>
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3c1>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3c3>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
 mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild23LoadGuildOneMemberProxyEP5CUser>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x397>
+test   %eax,%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x399>
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26IncTotalCnt_Of_GuildDBInfoEv>
 movl   $0x0,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser32MakeGameServerSendUserInfoPacketEj>
-jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ed>
+jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ef>
 movl   $0x4,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3f6>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3f8>
 movl   $0x10,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3f6>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3f8>
 mov    $0x1,%eax
-jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3fb>
+jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x3fd>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ed>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ef>
 mov    0x10(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild27QueryUnconnGuildMemberProxyEP14CServerHandlerj>
-jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ed>
+jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ef>
 cmpl   $0x0,-0x20(%ebp)
-je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ed>
+je     <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x4ef>
 movl   $0x6718,(%esp)
 call   <T> <_ZN6CGuildnwEj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuildC1Ej>
-jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x46b>
+jmp    <T> <_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter+0x46d>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZN6CGuilddlEPv>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild10QueryGuildEP14CServerHandlerj>
 mov    -0x1c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager11InsertGuildEjP6CGuild>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16QueryGuildMemberEP14CServerHandler>
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild17InsertGuildMemberEjP5CUser>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser32MakeGameServerSendUserInfoPacketEj>
 mov    -0x1c(%ebp),%eax
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::GuildEnter(unsigned int, ST_Notice_Guild_Enter&) */

CGuild * __thiscall
CGuildManager::_ZN13CGuildManager10GuildEnterEjR21ST_Notice_Guild_Enter
          (CGuildManager *this,uint param_1,ST_Notice_Guild_Enter *param_2)

{
  bool bVar1;
  char cVar2;
  CDNFException *pCVar3;
  uint uVar4;
  CGuild *this_00;
  string local_40 [7];
  allocator local_39;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  CServerHandler *local_28;
  CUser *local_24;
  CGuild *local_20;
  
  if (*(int *)this == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08095e7c to 08095e80 has its CatchHandler @ 08095ef6 */
    std::string::string(local_40,"CGuildManager::GuildEnter()\t0 == m_pclApp\n",&local_39);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095e9b to 08095e9f has its CatchHandler @ 08095ea2 */
    CDNFException::CDNFException(pCVar3,local_40);
                    /* try { // try from 08095ee1 to 08095ee5 has its CatchHandler @ 08095ee8 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  if (param_1 == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08095f62 to 08095f66 has its CatchHandler @ 08095fdc */
    std::string::string(local_38,"CGuildManager::GuildEnter()\t0 == dwGuildKey\n",&local_31);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08095f81 to 08095f85 has its CatchHandler @ 08095f88 */
    CDNFException::CDNFException(pCVar3,local_38);
                    /* try { // try from 08095fc7 to 08095fcb has its CatchHandler @ 08095fce */
    std::string::~string(local_38);
    std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
  if (local_28 == (CServerHandler *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809605d to 08096061 has its CatchHandler @ 080960d7 */
    std::string::string(local_30,"CGuildManager::GuildEnter() pclServerHandler == NULL\n",&local_29)
    ;
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809607c to 08096080 has its CatchHandler @ 08096083 */
    CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 080960c2 to 080960c6 has its CatchHandler @ 080960c9 */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  uVar4 = CApplication::Get_UserManager(*(CApplication **)this);
  local_24 = (CUser *)CUserManager::FindUser_CharNo(uVar4);
  if (local_24 != (CUser *)0x0) {
    CUser::SendSetGuildKeyToUser(local_24,param_1,*(uint *)(param_2 + 8));
  }
  uVar4 = param_1;
  local_20 = (CGuild *)FindGuild((uint)this);
  if (local_20 != (CGuild *)0x0) {
    if (local_24 == (CUser *)0x0) {
      cVar2 = CGuild::IsSetGuildDBFlag(local_20,4);
      if ((cVar2 == '\0') || (cVar2 = CGuild::IsSetGuildDBFlag(local_20,0x10), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CGuild::QueryUnconnGuildMemberProxy(local_20,local_28,*(uint *)(param_2 + 8));
      }
      return local_20;
    }
    CUser::QueryGuildMember(local_24,local_28);
    uVar4 = CUser::GetUniqCharNo(local_24);
    CGuild::InsertGuildMember(local_20,uVar4,local_24);
    cVar2 = CGuild::LoadGuildOneMemberProxy(local_20,local_24);
    if (cVar2 != '\x01') {
      CGuild::IncTotalCnt_Of_GuildDBInfo(local_20);
    }
    CGuild::SendGuildInfoToMembers(local_20,false);
    CUser::MakeGameServerSendUserInfoPacket(local_24,param_1);
    return local_20;
  }
  if (local_24 == (CUser *)0x0) {
    return (CGuild *)0x0;
  }
  this_00 = CGuild::operator_new((CGuild *)0x6718,uVar4);
                    /* try { // try from 0809628e to 08096292 has its CatchHandler @ 08096295 */
  CGuild::CGuild(this_00,param_1);
  local_20 = this_00;
  uVar4 = CUser::GetUniqCharNo(local_24);
  CGuild::QueryGuild(local_20,local_28,uVar4);
  InsertGuild(this,param_1,local_20);
  CUser::QueryGuildMember(local_24,local_28);
  uVar4 = CUser::GetUniqCharNo(local_24);
  CGuild::InsertGuildMember(local_20,uVar4,local_24);
  CUser::MakeGameServerSendUserInfoPacket(local_24,param_1);
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 417 行）：

```cpp
CGuild* CGuildManager::GuildEnter(unsigned int guildKey, ST_Notice_Guild_Enter& info)
{
    if (m_app == 0)
    {
        throw CDNFException("CGuildManager::GuildEnter()\t0 == m_pclApp\n");
    }
    if (guildKey == 0)
    {
        throw CDNFException("CGuildManager::GuildEnter()\t0 == dwGuildKey\n");
    }
    CServerHandler* handler;
    if (!(handler = m_app->Get_ServerHandler()))
    {
        throw CDNFException("CGuildManager::GuildEnter() pclServerHandler == NULL\n");
    }
    CUser* user = m_app->Get_UserManager()->FindUser_CharNo(((ST_Notice_Guild_Enter_Layout*)&info)->m8);
    if (user != 0)
    {
        user->SendSetGuildKeyToUser(guildKey, ((ST_Notice_Guild_Enter_Layout*)&info)->m8);
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        if (user != 0)
        {
            user->QueryGuildMember(handler);
            guild->InsertGuildMember(user->GetUniqCharNo(), user);
            if (!guild->LoadGuildOneMemberProxy(user))
            {
                guild->IncTotalCnt_Of_GuildDBInfo();
            }
            guild->SendGuildInfoToMembers(false);
            user->MakeGameServerSendUserInfoPacket(guildKey);
        }
        else if (guild->IsSetGuildDBFlag(4) && guild->IsSetGuildDBFlag(0x10))
        {
            guild->QueryUnconnGuildMemberProxy(handler, ((ST_Notice_Guild_Enter_Layout*)&info)->m8);
        }
    }
    else if (user != 0)
    {
        guild = new CGuild(guildKey);
        guild->QueryGuild(handler, user->GetUniqCharNo());
        InsertGuild(guildKey, guild);
        user->QueryGuildMember(handler);
        guild->InsertGuildMember(user->GetUniqCharNo(), user);
        user->MakeGameServerSendUserInfoPacket(guildKey);
    }
    return guild;
}
```
