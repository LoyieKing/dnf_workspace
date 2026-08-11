# _ZN14CServerHandlerC2Ev

`CServerHandler::CServerHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8067dd0` | `0xd2` | `0x805d9dc` | `0xd3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,73 +1,74 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%ebx
 mov    %ebx,%edi
 mov    $0x64,%esi
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x23>
 mov    %edi,(%esp)
 call   <T> <_ZN14CMonitorServerC1Ev>
 add    $0x14,%edi
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN14CServerHandlerC1Ev+0x15>
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x6c>
 mov    %edx,%edi
 mov    %eax,-0x1c(%ebp)
 test   %ebx,%ebx
 je     <T> <_ZN14CServerHandlerC1Ev+0x5f>
 mov    $0x64,%eax
 sub    %esi,%eax
 mov    %eax,%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
 lea    (%ebx,%eax,1),%esi
 cmp    %ebx,%esi
 je     <T> <_ZN14CServerHandlerC1Ev+0x5f>
 sub    $0x14,%esi
 mov    %esi,(%esp)
 call   <T> <_ZN14CMonitorServerD1Ev>
 jmp    <T> <_ZN14CServerHandlerC1Ev+0x4e>
 mov    -0x1c(%ebp),%eax
 mov    %edi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x7e4(%eax)
 mov    0x8(%ebp),%eax
 add    $0x7e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x800(%eax)
+add    $0x800,%eax
+movl   $0x0,(%eax)
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 mov    %edx,%esi
 mov    %eax,%edi
 mov    0x8(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN14CServerHandlerC1Ev+0xc6>
+je     <T> <_ZN14CServerHandlerC1Ev+0xc7>
 mov    0x8(%ebp),%eax
 lea    0x7e4(%eax),%ebx
 mov    0x8(%ebp),%eax
 cmp    %eax,%ebx
-je     <T> <_ZN14CServerHandlerC1Ev+0xc6>
+je     <T> <_ZN14CServerHandlerC1Ev+0xc7>
 sub    $0x14,%ebx
 mov    %ebx,(%esp)
 call   <T> <_ZN14CMonitorServerD1Ev>
-jmp    <T> <_ZN14CServerHandlerC1Ev+0xb2>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0xb3>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::CServerHandler() */

void __thiscall CServerHandler::_ZN14CServerHandlerC2Ev(CServerHandler *this)

{
  int iVar1;
  CServerHandler *this_00;
  
  this_00 = this;
  for (iVar1 = 100; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08067de8 to 08067dec has its CatchHandler @ 08067dff */
    CMonitorServer::_ZN14CMonitorServerC2Ev((CMonitorServer *)this_00);
    this_00 = this_00 + 0x14;
  }
  *(undefined4 *)(this + 0x7e4) = 0;
                    /* try { // try from 08067e54 to 08067e58 has its CatchHandler @ 08067e6e */
  std::
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  ::map((map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
         *)(this + 0x7e8));
  *(undefined4 *)(this + 0x800) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 14 行）：

```cpp
CServerHandler::CServerHandler() : m_app(0)
{
    *(unsigned int*)m_pad = 0;
}
```
