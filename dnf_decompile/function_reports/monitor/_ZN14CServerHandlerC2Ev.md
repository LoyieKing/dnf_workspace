# _ZN14CServerHandlerC2Ev

`CServerHandler::CServerHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8078fe0` | `0xcb` | `0x807f930` | `0x91` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x18(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x20(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x24(%eax)
-mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServerC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x50(%eax)
-mov    0x8(%ebp),%eax
-add    $0x54,%eax
+add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServerC1Ev>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x64(%eax)
-add    $0x10,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+jmp    <T> <_ZN14CServerHandlerC1Ev+0x8a>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x40,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerC1Ev+0x98>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0x57>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x28,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN14CServerHandlerC1Ev+0xb0>
+jmp    <T> <_ZN14CServerHandlerC1Ev+0x6f>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::CServerHandler() */

void __thiscall CServerHandler::_ZN14CServerHandlerC2Ev(CServerHandler *this)

{
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::map((map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
         *)this);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
                    /* try { // try from 08079024 to 08079028 has its CatchHandler @ 08079090 */
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::map((map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
         *)(this + 0x28));
                    /* try { // try from 08079032 to 08079036 has its CatchHandler @ 08079078 */
  CTcpDBServer::CTcpDBServer((CTcpDBServer *)(this + 0x40));
  *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 0807904a to 0807904e has its CatchHandler @ 08079060 */
  CTcpManagerServer::CTcpManagerServer((CTcpManagerServer *)(this + 0x54));
  *(undefined4 *)(this + 100) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFServerHandler.cpp](source/DNFServer/GameServer/COServer/DNFServerHandler.cpp)（约第 10 行）：

```cpp
CServerHandler::CServerHandler()
{
    // m_servers 就地构造（与原始显式循环等价）
    m_app = 0;
}
```
