# _ZN14CServerHandler4LoadEP13ST_ServerInfo

`CServerHandler::Load(ST_ServerInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x808f392` | `0x624` | `0x80df432` | `0x624` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,496 +1,496 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
-movl   $0x0,-0x1c(%ebp)
+movl   $0x0,-0x20(%ebp)
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x60a>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x1,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x18f>
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
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x12b>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGameServerHandler::Load() Server Table Exception Break!",0x4(%esp)
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
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
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
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
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
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x39(%ebp),%eax
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
 movzbl %al,%edx
-movzbl -0x1d(%ebp),%eax
+movzbl -0x19(%ebp),%eax
 shl    $0x4,%eax
 add    0x8(%ebp),%eax
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %edx,0x4(%esp)
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
 cmp    $0x3,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x30e>
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
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x1cf>
-cmpb   $0xc9,-0x1d(%ebp)
+cmpb   $0xc9,-0x19(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x2ab>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Monitor Server Table Exception Break!",0x4(%esp)
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x24e>
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x248>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x26d>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x26d>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x288>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x26d>
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
 add    $0xff0,%edx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CMonitorServer4InitEhRSsth>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x5,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x48d>
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
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x34e>
-cmpb   $0xcb,-0x1d(%ebp)
+cmpb   $0xcb,-0x19(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x42a>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Guild Server Table Exception Break!",0x4(%esp)
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3cd>
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3c7>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3ec>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3ec>
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x407>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x3ec>
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
 add    $0x1018,%edx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN12CGuildServer4InitEhRSsth>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x7,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x606>
-mov    -0x1c(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 add    0xc(%ebp),%eax
 movzbl 0x2(%eax),%eax
-mov    %al,-0x1d(%ebp)
-cmpb   $0xcd,-0x1d(%ebp)
+mov    %al,-0x19(%ebp)
+cmpb   $0xcd,-0x19(%ebp)
 je     <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x5a3>
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1e(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CServerHandler::Load() Statistics Server Table Exception Break!",0x4(%esp)
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x546>
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
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x540>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x565>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x565>
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x580>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x565>
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
 add    $0x1030,%edx
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN17CStatisticsServer4InitEhRSsth>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0xfe,-0x1c(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0xfe,-0x20(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandler4LoadEP13ST_ServerInfo+0x15>
 add    $0x5c,%esp
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
  string local_40 [7];
  allocator local_39;
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
                    /* try { // try from 0808f401 to 0808f405 has its CatchHandler @ 0808f47b */
        std::string::string(local_40,"CGameServerHandler::Load() Server Table Exception Break!",
                            &local_39);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f420 to 0808f424 has its CatchHandler @ 0808f427 */
        CDNFException::CDNFException(pCVar1,local_40);
                    /* try { // try from 0808f466 to 0808f46a has its CatchHandler @ 0808f46d */
        std::string::~string(local_40);
        std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CGameServer::Init((CGameServer *)(this + (uint)(byte)local_21 * 0x10),
                        (uchar)param_1[local_20 * 0xc + 1],(string *)(param_1 + local_20 * 0xc + 4),
                        *(ushort *)(param_1 + local_20 * 0xc + 8),(uchar)local_21);
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x3) {
      local_21 = param_1[local_20 * 0xc + 2];
      if ((local_21 == (ST_ServerInfo)0xff) || (local_21 != (ST_ServerInfo)0xc9)) {
        std::allocator<char>::allocator();
                    /* try { // try from 0808f581 to 0808f585 has its CatchHandler @ 0808f5fb */
        std::string::string(local_38,"CServerHandler::Load() Monitor Server Table Exception Break!",
                            &local_31);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f5a0 to 0808f5a4 has its CatchHandler @ 0808f5a7 */
        CDNFException::CDNFException(pCVar1,local_38);
                    /* try { // try from 0808f5e6 to 0808f5ea has its CatchHandler @ 0808f5ed */
        std::string::~string(local_38);
        std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CMonitorServer::Init
                ((CMonitorServer *)(this + 0xff0),(uchar)param_1[local_20 * 0xc + 1],
                 (string *)(param_1 + local_20 * 0xc + 4),*(ushort *)(param_1 + local_20 * 0xc + 8),
                 0xc9);
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x5) {
      local_21 = param_1[local_20 * 0xc + 2];
      if ((local_21 == (ST_ServerInfo)0xff) || (local_21 != (ST_ServerInfo)0xcb)) {
        std::allocator<char>::allocator();
                    /* try { // try from 0808f700 to 0808f704 has its CatchHandler @ 0808f77a */
        std::string::string(local_30,"CServerHandler::Load() Guild Server Table Exception Break!",
                            &local_29);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f71f to 0808f723 has its CatchHandler @ 0808f726 */
        CDNFException::CDNFException(pCVar1,local_30);
                    /* try { // try from 0808f765 to 0808f769 has its CatchHandler @ 0808f76c */
        std::string::~string(local_30);
        std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CGuildServer::Init((CGuildServer *)(this + 0x1018),(uchar)param_1[local_20 * 0xc + 1],
                         (string *)(param_1 + local_20 * 0xc + 4),
                         *(ushort *)(param_1 + local_20 * 0xc + 8),0xcb);
    }
    if (param_1[local_20 * 0xc] == (ST_ServerInfo)0x7) {
      local_21 = param_1[local_20 * 0xc + 2];
      if (local_21 != (ST_ServerInfo)0xcd) {
        std::allocator<char>::allocator();
                    /* try { // try from 0808f879 to 0808f87d has its CatchHandler @ 0808f8f3 */
        std::string::string(local_28,
                            "CServerHandler::Load() Statistics Server Table Exception Break!",
                            &local_22);
        pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0808f898 to 0808f89c has its CatchHandler @ 0808f89f */
        CDNFException::CDNFException(pCVar1,local_28);
                    /* try { // try from 0808f8de to 0808f8e2 has its CatchHandler @ 0808f8e5 */
        std::string::~string(local_28);
        std::allocator<char>::~allocator((allocator<char> *)&local_22);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
      }
      CStatisticsServer::Init
                ((CStatisticsServer *)(this + 0x1030),(uchar)param_1[local_20 * 0xc + 1],
                 (string *)(param_1 + local_20 * 0xc + 4),*(ushort *)(param_1 + local_20 * 0xc + 8),
                 0xcd);
    }
    local_20 = local_20 + 1;
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 44 行）：

```cpp
void CServerHandler::Load(ST_ServerInfo* infos)
{
    for (int i = 0; i <= 0xfe; i++)
    {
        unsigned char idx;
        if (infos[i].m_type == 1)
        {
            idx = infos[i].m_idx;
            if (idx == 0xff)
                throw CDNFException("CGameServerHandler::Load() Server Table Exception Break!");
            m_gameServers[idx].Init(infos[i].m_flag, infos[i].m_name,
                                    infos[i].m_port, idx);
        }
        if (infos[i].m_type == 3)
        {
            idx = infos[i].m_idx;
            if (idx == 0xff || idx != 0xc9)
                throw CDNFException("CServerHandler::Load() Monitor Server Table Exception Break!");
            m_monitorServer.Init(infos[i].m_flag, infos[i].m_name,
                                 infos[i].m_port, idx);
        }
        if (infos[i].m_type == 5)
        {
            idx = infos[i].m_idx;
            if (idx == 0xff || idx != 0xcb)
                throw CDNFException("CServerHandler::Load() Guild Server Table Exception Break!");
            m_guildServer.Init(infos[i].m_flag, infos[i].m_name,
                               infos[i].m_port, idx);
        }
        if (infos[i].m_type == 7)
        {
            idx = infos[i].m_idx;
            if (idx != 0xcd)
                throw CDNFException("CServerHandler::Load() Statistics Server Table Exception Break!");
            m_statisticsServer.Init(infos[i].m_flag, infos[i].m_name,
                                    infos[i].m_port, idx);
        }
    }
}
```
