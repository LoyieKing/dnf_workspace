# _ZN14CServerHandler22GetAlivedMonitorServerEv

`CServerHandler::GetAlivedMonitorServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8068ac4` | `0xad` | `0x805e57a` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,51 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x7e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x24>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0xab>
+jmp    <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0xb0>
 movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x77>
+jmp    <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x7c>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CTcpServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer13IsValidServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x6c>
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x71>
 addl   $0x1,-0x10(%ebp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP10CTcpServerEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x7e8(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CTcpServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP10CTcpServerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CServerHandler22GetAlivedMonitorServerEv+0x48>
 mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetAlivedMonitorServer() */

int __thiscall CServerHandler::_ZN14CServerHandler22GetAlivedMonitorServerEv(CServerHandler *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  local_1c [4];
  map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
  local_18 [4];
  int local_14;
  CTcpServer *local_10;
  
  cVar1 = std::
          map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
          ::empty((map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
                   *)(this + 0x7e8));
  if (cVar1 == '\0') {
    local_14 = 0;
    std::
    map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<unsigned_int,CTcpServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpServer*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>> *)local_1c);
      local_10 = *(CTcpServer **)(iVar2 + 4);
      cVar1 = CTcpServer::IsValidServer(local_10);
      if (cVar1 != '\0') {
        local_14 = local_14 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpServer*>> *)local_1c);
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFServerHandler.cpp](source/DNFServer/GameServer/Manager/DNFServerHandler.cpp)（约第 165 行）：

```cpp
int CServerHandler::GetAlivedMonitorServer()
{
    if (m_tcpServers.empty())
        return 0;
    int count = 0;
    for (std::map<unsigned int, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        CTcpServer* server = it->second;
        if (server->IsValidServer())
            count++;
    }
    return count;
}
```
