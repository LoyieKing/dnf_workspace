# _ZN14CServerHandler19CreateTcpGameServerEj

`CServerHandler::CreateTcpGameServer(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d96e` | `0xe5` | `0x8081b2c` | `0xe8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 movl   $0xc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServerC1Ev>
 jmp    <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0x3b>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-mov    %eax,-0x34(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
 mov    0xc(%ebp),%ecx
-mov    -0x34(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN14CTcpGameServer4InitEjP13CTcpNetSystem>
 lea    -0x20(%ebp),%eax
-lea    -0x34(%ebp),%edx
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP14CTcpGameServerESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP14CTcpGameServerEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%ecx
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x2c(%ebp),%eax
+movzbl -0x30(%ebp),%eax
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0xbe>
-mov    -0x34(%ebp),%eax
-jmp    <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0xda>
-mov    -0x34(%ebp),%ebx
+je     <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0xda>
+mov    -0x2c(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0xd5>
+je     <T> <_ZN14CServerHandler19CreateTcpGameServerEj+0xd3>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CTcpGameServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
-mov    $0x0,%eax
+movl   $0x0,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::CreateTcpGameServer(unsigned int) */

CTcpGameServer * __thiscall
CServerHandler::_ZN14CServerHandler19CreateTcpGameServerEj(CServerHandler *this,uint param_1)

{
  CTcpGameServer *this_00;
  CTcpNetSystem *pCVar1;
  pair local_34 [4];
  char local_30;
  pair<unsigned_int_const,CTcpGameServer*> local_2c [8];
  uint local_24 [5];
  
  this_00 = operator_new(0xc);
                    /* try { // try from 0806d98a to 0806d98e has its CatchHandler @ 0806d991 */
  CTcpGameServer::CTcpGameServer(this_00);
  pCVar1 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(*(CApplication **)(this + 0x3c));
  CTcpGameServer::Init(this_00,param_1,pCVar1);
  std::make_pair<unsigned_int&,CTcpGameServer*&>(local_24,(CTcpGameServer **)&param_1);
  std::pair<unsigned_int_const,CTcpGameServer*>::pair<unsigned_int,CTcpGameServer*>
            (local_2c,(pair *)local_24);
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::insert(local_34);
  if (local_30 == '\0') {
    if (this_00 != (CTcpGameServer *)0x0) {
      CTcpGameServer::~CTcpGameServer(this_00);
      ::operator_delete(this_00);
    }
    this_00 = (CTcpGameServer *)0x0;
  }
  return this_00;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 423 行）：

```cpp
CTcpGameServer* CServerHandler::CreateTcpGameServer(unsigned int group)
{
    CTcpGameServer* server = new CTcpGameServer();
    server->Init(group, m_app->Get_TcpNetSystem());
    std::pair<std::map<unsigned int, CTcpGameServer*>::iterator, bool> result =
        m_tcpGameServers.insert(std::make_pair(group, server));
    if (result.second == 0)
    {
        delete server;
        return 0;
    }
    return server;
}
```
