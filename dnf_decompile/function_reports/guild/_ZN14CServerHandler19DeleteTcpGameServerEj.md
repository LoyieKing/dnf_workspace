# _ZN14CServerHandler19DeleteTcpGameServerEj

`CServerHandler::DeleteTcpGameServer(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806da54` | `0xd2` | `0x8081e02` | `0xe0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x24,%esp
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%ecx
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0xc8>
-lea    -0x18(%ebp),%eax
+jne    <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0xda>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0x86>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0x76>
+je     <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0x86>
 mov    %ebx,(%esp)
 call   <T> <_ZN14CTcpGameServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
-mov    -0x18(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
+mov    0xc(%ebp),%ebx
 movl   $0x33e,0x8(%esp)
 movl   $&_ZZN14CServerHandler19DeleteTcpGameServerEjE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"TcpGameServer Delete !",0x8(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"TcpGameServer unregist. Channel: %d",0x8(%esp)
 movl   $"./log/Tcp",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0xcd>
-mov    $0x0,%eax
+jmp    <T> <_ZN14CServerHandler19DeleteTcpGameServerEj+0xdb>
+nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::DeleteTcpGameServer(unsigned int) */

undefined4 CServerHandler::_ZN14CServerHandler19DeleteTcpGameServerEj(uint param_1)

{
  CTcpGameServer *this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_1c;
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::find(&local_1c);
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)&local_1c,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)&local_1c
                      );
    this = *(CTcpGameServer **)(iVar2 + 4);
    if (this != (CTcpGameServer *)0x0) {
      CTcpGameServer::~CTcpGameServer(this);
      ::operator_delete(this);
    }
    std::
    map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
    ::erase((map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
             *)(param_1 + 0x24),local_1c);
    CMyFileLog::CMyFileLog(local_14,"DeleteTcpGameServer",0x33e);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Tcp","TcpGameServer Delete !");
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 403 行）：

```cpp
void CServerHandler::DeleteTcpGameServer(unsigned int group)
{
    std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.find(group);
    if (it == m_tcpGameServers.end())
    {
        return;
    }
    CTcpGameServer* tgs = it->second;
    if (tgs != 0)
    {
        delete tgs;
    }
    m_tcpGameServers.erase(it);
    DNF_LOG_SCOPE_LINE(0x33e, "./log/Tcp", "TcpGameServer unregist. Channel: %d", group);
}
```
