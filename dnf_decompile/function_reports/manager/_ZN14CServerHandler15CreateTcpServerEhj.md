# _ZN14CServerHandler15CreateTcpServerEhj

`CServerHandler::CreateTcpServer(unsigned char, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80684dc` | `0x107` | `0x805e0c2` | `0x109` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,83 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServerC1Ev>
 jmp    <T> <_ZN14CServerHandler15CreateTcpServerEhj+0x41>
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
 mov    0x7e4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_TcpNetSystemEv>
-mov    -0x34(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CTcpServer4InitEjP13CTcpNetSystem>
 movzbl -0x3c(%ebp),%eax
 movzbl %al,%edx
-mov    -0x34(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer14SetServerIndexEh>
 lea    -0x20(%ebp),%eax
-lea    -0x34(%ebp),%edx
+lea    -0x2c(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x3c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRhRP10CTcpServerESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP10CTcpServerEC1IhS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%ecx
-lea    -0x30(%ebp),%eax
+lea    -0x34(%ebp),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x2c(%ebp),%eax
+movzbl -0x30(%ebp),%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xe0>
-mov    -0x34(%ebp),%eax
-jmp    <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xfc>
-mov    -0x34(%ebp),%ebx
+je     <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xe2>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xfe>
+mov    -0x2c(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xf7>
+je     <T> <_ZN14CServerHandler15CreateTcpServerEhj+0xf9>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CTcpServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    $0x0,%eax
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

/* CServerHandler::CreateTcpServer(unsigned char, unsigned int) */

CTcpServer * __thiscall
CServerHandler::_ZN14CServerHandler15CreateTcpServerEhj
          (CServerHandler *this,uchar param_1,uint param_2)

{
  CTcpServer *pCVar1;
  CTcpNetSystem *pCVar2;
  uchar local_40 [8];
  CTcpServer *local_38;
  pair local_34 [4];
  char local_30;
  pair<unsigned_int_const,CTcpServer*> local_2c [8];
  uchar local_24 [20];
  
  local_40[0] = param_1;
  pCVar1 = operator_new(0x10);
                    /* try { // try from 080684fe to 08068502 has its CatchHandler @ 08068505 */
  CTcpServer::CTcpServer(pCVar1);
  local_38 = pCVar1;
  pCVar2 = (CTcpNetSystem *)CApplication::Get_TcpNetSystem(*(CApplication **)(this + 0x7e4));
  CTcpServer::Init(local_38,param_2,pCVar2);
  CTcpServer::SetServerIndex(local_38,local_40[0]);
  std::make_pair<unsigned_char&,CTcpServer*&>(local_24,(CTcpServer **)local_40);
  std::pair<unsigned_int_const,CTcpServer*>::pair<unsigned_char,CTcpServer*>(local_2c,local_24);
  std::
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  ::insert(local_34);
  pCVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (CTcpServer *)0x0) {
      CTcpServer::~CTcpServer(local_38);
      ::operator_delete(pCVar1);
    }
    local_38 = (CTcpServer *)0x0;
  }
  return local_38;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 110 行）：

```cpp
char CServerHandler::CreateTcpServer(unsigned char idx, unsigned int port)
{
    CTcpServer* server = new CTcpServer;
    server->Init(port, m_app->Get_TcpNetSystem());
    server->SetServerType(idx);
    if (m_tcpServers.insert(std::make_pair(idx, server)).second)
        return 1;
    delete server;
    return 0;
}
```
