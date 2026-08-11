# _ZN14CServerHandler15DeleteTcpServerEh

`CServerHandler::DeleteTcpServer(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80685e4` | `0xe8` | `0x805e090` | `0xf8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x44,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 movzbl -0x2c(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%ecx
-lea    -0x1c(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CTcpServerEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xde>
-lea    -0x1c(%ebp),%eax
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xee>
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CTcpServerEEptEv>
-mov    0x4(%eax),%ebx
+mov    0x4(%eax),%eax
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x99>
+mov    -0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x89>
+je     <T> <_ZN14CServerHandler15DeleteTcpServerEh+0x99>
 mov    %ebx,(%esp)
 call   <T> <_ZN10CTcpServerD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 movl   $0x113,0x8(%esp)
-movl   $&_ZZN14CServerHandler15DeleteTcpServerEhE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+movl   $"DeleteTcpServer",0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"TcpMonitorServer Delete !",0x8(%esp)
 movl   $"./log/Tcp",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x1,%eax
-jmp    <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xe3>
+jmp    <T> <_ZN14CServerHandler15DeleteTcpServerEh+0xf3>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::DeleteTcpServer(unsigned char) */

undefined4 __thiscall
CServerHandler::_ZN14CServerHandler15DeleteTcpServerEh(CServerHandler *this,uchar param_1)

{
  CTcpServer *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  uint local_1c;
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  local_18 [4];
  CMyFileLog local_14 [12];
  
  local_1c = (uint)param_1;
  std::
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  ::find(&local_20);
  std::
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>> *)&local_20,
                     (_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>> *)&local_20);
    this_00 = *(CTcpServer **)(iVar2 + 4);
    if (this_00 != (CTcpServer *)0x0) {
      CTcpServer::~CTcpServer(this_00);
      ::operator_delete(this_00);
    }
    std::
    map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
    ::erase((map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
             *)(this + 0x7e8),local_20);
    CMyFileLog::CMyFileLog(local_14,"DeleteTcpServer",0x113);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Tcp","TcpMonitorServer Delete !");
    uVar3 = 1;
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 112 行）：

```cpp
char CServerHandler::DeleteTcpServer(unsigned char idx)
{
    std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.find(idx);
    if (it != m_tcpServers.end())
    {
        CTcpServer* server = it->second;
        if (server)
            delete server;
        m_tcpServers.erase(it);
        CMyFileLog log("DeleteTcpServer", 0x113);
        log("./log/Tcp", "TcpMonitorServer Delete !");
        return 1;
    }
    return 0;
}
```
