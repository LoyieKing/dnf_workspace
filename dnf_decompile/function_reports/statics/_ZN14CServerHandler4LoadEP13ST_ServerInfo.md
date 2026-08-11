# _ZN14CServerHandler4LoadEP13ST_ServerInfo

`CServerHandler::Load(ST_ServerInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8065818` | `0x4c6` | `0x805afbe` | `0x4c6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,385 +1,385 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x4ac>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x1,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x196>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0xff,-0x1d(%ebp)
+mov    %al,-0x1b(%ebp)
+cmpb   $0xff,-0x1b(%ebp)
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x12b>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Server Table Exception Break!",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xce>
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
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xc8>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xed>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xed>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x108>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0xed>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movzbl -0x1d(%ebp),%esi
-mov    -0x1c(%ebp),%edx
+movzbl -0x1b(%ebp),%esi
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzwl 0x8(%eax),%eax
 movzwl %ax,%ebx
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 lea    0x4(%eax),%edi
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
 movzbl %al,%ecx
-movzbl -0x1d(%ebp),%edx
+movzbl -0x1b(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0x8(%ebp),%eax
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %edi,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGameServer4InitEhRSsth>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x2,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x329>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0xff,-0x1d(%ebp)
+mov    %al,-0x1a(%ebp)
+cmpb   $0xff,-0x1a(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1d6>
-cmpb   $0xc8,-0x1d(%ebp)
+cmpb   $0xc8,-0x1a(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x2c6>
-movzbl -0x1d(%ebp),%eax
+movzbl -0x1a(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"*******%d",(%esp)
 call   <T> <printf>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() DB2 Server Table Exception Break!",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x269>
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
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x263>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x288>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x288>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x2a3>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x288>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movzbl -0x1d(%ebp),%ebx
-mov    -0x1c(%ebp),%edx
+movzbl -0x1a(%ebp),%ebx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzwl 0x8(%eax),%eax
 movzwl %ax,%ecx
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 lea    0x4(%eax),%esi
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
 movzbl %al,%eax
 mov    0x8(%ebp),%edx
 add    $0x13ec,%edx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN9CDBServer4InitEhRSsth>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x4,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x4a8>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0xff,-0x1d(%ebp)
+mov    %al,-0x19(%ebp)
+cmpb   $0xff,-0x19(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x369>
-cmpb   $0xca,-0x1d(%ebp)
+cmpb   $0xca,-0x19(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x445>
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Manager Server Table Exception Break!",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x24(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3e8>
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
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3e2>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x407>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x407>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x422>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x407>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-movzbl -0x1d(%ebp),%ebx
-mov    -0x1c(%ebp),%edx
+movzbl -0x19(%ebp),%ebx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzwl 0x8(%eax),%eax
 movzwl %ax,%ecx
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 lea    0x4(%eax),%esi
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x1(%eax),%eax
 movzbl %al,%eax
 mov    0x8(%ebp),%edx
 add    $0x1404,%edx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CManagerServer4InitEhRSsth>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0xfe,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0xfe,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x15>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::Load(ST_ServerInfo*) */

void __thiscall
CServerHandler::_ZN14CServerHandler4LoadEP13ST_ServerInfo
          (CServerHandler *this,ST_ServerInfo *param_1)

{
  CDNFException *pCVar1;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  string local_28 [6];
  allocator local_22;
  ST_ServerInfo local_21;
  int local_20;
  
  local_20 = 0;
  do {
    if (0xfe < local_20) {
      return;
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x1) {
      local_21 = param_1[local_20 * 0xc + 2];
      if (local_21 == (ST_ServerInfo)0xff) {
        std::allocator<char>::allocator();
                    /* try { // try from 08065887 to 0806588b has its CatchHandler @ 08065901 */
        std::string::string(local_38,"CServerHandler::Load() Server Table Exception Break!",
                            &local_31);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080658a6 to 080658aa has its CatchHandler @ 080658ad */
        CDNFException::CDNFException(pCVar1,local_38);
                    /* try { // try from 080658ec to 080658f0 has its CatchHandler @ 080658f3 */
        std::string::~string(local_38);
        std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CGameServer::Init((CGameServer *)(this + (uint)(byte)local_21 * 0x14),
                        (uchar)param_1[local_20 * 0xc + 1],(string *)(param_1 + local_20 * 0xc + 4),
                        *(ushort *)(param_1 + local_20 * 0xc + 8),(uchar)local_21);
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x2) {
      local_21 = param_1[local_20 * 0xc + 2];
      if ((local_21 == (ST_ServerInfo)0xff) || (local_21 != (ST_ServerInfo)0xc8)) {
        printf("*******%d",(uint)(byte)local_21);
        std::allocator<char>::allocator();
                    /* try { // try from 08065a22 to 08065a26 has its CatchHandler @ 08065a9c */
        std::string::string(local_30,"CServerHandler::Load() DB2 Server Table Exception Break!",
                            &local_29);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065a41 to 08065a45 has its CatchHandler @ 08065a48 */
        CDNFException::CDNFException(pCVar1,local_30);
                    /* try { // try from 08065a87 to 08065a8b has its CatchHandler @ 08065a8e */
        std::string::~string(local_30);
        std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CDBServer::Init((CDBServer *)(this + 0x13ec),(uchar)param_1[local_20 * 0xc + 1],
                      (string *)(param_1 + local_20 * 0xc + 4),
                      *(ushort *)(param_1 + local_20 * 0xc + 8),200);
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x4) {
      local_21 = param_1[local_20 * 0xc + 2];
      if ((local_21 == (ST_ServerInfo)0xff) || (local_21 != (ST_ServerInfo)0xca)) {
        std::allocator<char>::allocator();
                    /* try { // try from 08065ba1 to 08065ba5 has its CatchHandler @ 08065c1b */
        std::string::string(local_28,"CServerHandler::Load() Manager Server Table Exception Break!",
                            &local_22);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065bc0 to 08065bc4 has its CatchHandler @ 08065bc7 */
        CDNFException::CDNFException(pCVar1,local_28);
                    /* try { // try from 08065c06 to 08065c0a has its CatchHandler @ 08065c0d */
        std::string::~string(local_28);
        std::allocator<char>::~allocator((allocator<char> *)&local_22);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CManagerServer::Init
                ((CManagerServer *)(this + 0x1404),(uchar)param_1[local_20 * 0xc + 1],
                 (string *)(param_1 + local_20 * 0xc + 4),*(ushort *)(param_1 + local_20 * 0xc + 8),
                 0xca);
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFServerHandler.cpp](source/DNFServer/GameServer/Statics/DNFServerHandler.cpp)（约第 20 行）：

```cpp
void CServerHandler::Load(ST_ServerInfo* info)
{
    for (int i = 0; i < 0xff; i++)
    {
        if (info[i].m_field0 == 1)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff)
            {
                throw CDNFException("CServerHandler::Load() Server Table Exception Break!");
            }
            m_servers[index].Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
        if (info[i].m_field0 == 2)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff || index != 0xc8)
            {
                printf("*******%d", index);
                throw CDNFException("CServerHandler::Load() DB2 Server Table Exception Break!");
            }
            m_dbServer.Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
        if (info[i].m_field0 == 4)
        {
            unsigned char index = info[i].m_field2;
            if (index == 0xff || index != 0xca)
            {
                throw CDNFException("CServerHandler::Load() Manager Server Table Exception Break!");
            }
            m_mgrServer.Init(info[i].m_field1, info[i].m_string, info[i].m_ushort, index);
        }
    }
}
```
