# _ZN14CServerHandlerD2Ev

`CServerHandler::~CServerHandler()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x806c94c` | `0x113` | `0x8080c08` | `0x113` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,97 +1,97 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CServerHandlerD1Ev+0x4e>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x18(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14CServerHandlerD1Ev+0x44>
 mov    %ebx,(%esp)
 call   <T> <_ZN9CDBServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN14CServerHandlerD1Ev+0xae>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x1c(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%ebx
 test   %ebx,%ebx
 je     <T> <_ZN14CServerHandlerD1Ev+0x8a>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CManagerServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 jmp    <T> <_ZN14CServerHandlerD1Ev+0xae>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServerD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CServerHandlerD1Ev+0xbe>
 mov    0x8(%ebp),%eax
 add    $0x44,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServerD1Ev>
 jmp    <T> <_ZN14CServerHandlerD1Ev+0xd6>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN14CServerHandlerD1Ev+0xe6>
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 jmp    <T> <_ZN14CServerHandlerD1Ev+0x101>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP11CGameServerSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::~CServerHandler() */

void __thiscall CServerHandler::_ZN14CServerHandlerD2Ev(CServerHandler *this)

{
  CDBServer *this_00;
  CManagerServer *this_01;
  
  if (*(int *)(this + 0x18) != 0) {
                    /* try { // try from 0806c974 to 0806c9cd has its CatchHandler @ 0806c9e2 */
    (**(code **)(**(int **)(this + 0x18) + 4))(*(undefined4 *)(this + 0x18));
    this_00 = *(CDBServer **)(this + 0x18);
    if (this_00 != (CDBServer *)0x0) {
      CDBServer::~CDBServer(this_00);
      ::operator_delete(this_00);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))(*(undefined4 *)(this + 0x1c));
    this_01 = *(CManagerServer **)(this + 0x1c);
    if (this_01 != (CManagerServer *)0x0) {
      CManagerServer::_ZN14CManagerServerD2Ev(this_01);
      ::operator_delete(this_01);
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
                    /* try { // try from 0806ca03 to 0806ca07 has its CatchHandler @ 0806ca0a */
  CTcpDBServer::~CTcpDBServer((CTcpDBServer *)(this + 0x44));
                    /* try { // try from 0806ca2b to 0806ca2f has its CatchHandler @ 0806ca32 */
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::~map((map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
          *)(this + 0x24));
  std::
  map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
  ::~map((map<unsigned_int,CGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGameServer*>>>
          *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 83 行）：

```cpp
CServerHandler::~CServerHandler()
{
    if (m_dbServer != 0)
    {
        m_dbServer->Destroy();
        delete m_dbServer;
        m_dbServer = 0;
    }
    if (m_managerServer != 0)
    {
        m_managerServer->Destroy();
        delete m_managerServer;
        m_managerServer = 0;
    }
}
```
