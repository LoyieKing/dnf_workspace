# _ZN14CServerHandler20GetTcpGameServerByChEh

`CServerHandler::GetTcpGameServerByCh(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807a4d8` | `0x98` | `0x8080540` | `0xa2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x63>
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x6d>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x57>
+je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x54>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer12GetChannelNoEv>
 cmp    -0x1c(%ebp),%al
-sete   %al
+jne    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x54>
+mov    $0x1,%eax
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x59>
+mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x58>
+je     <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x62>
 mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x96>
-nop
+jmp    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0xa0>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CServerHandler20GetTcpGameServerByChEh+0x26>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::GetTcpGameServerByCh(unsigned char) */

CTcpGameServer * __thiscall
CServerHandler::_ZN14CServerHandler20GetTcpGameServerByChEh(CServerHandler *this,uchar param_1)

{
  uchar uVar1;
  char cVar2;
  int iVar3;
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  local_18 [4];
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  local_14 [4];
  CTcpGameServer *local_10;
  
  std::
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
    ::end(local_14);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') {
      return (CTcpGameServer *)0x0;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)local_18)
    ;
    local_10 = *(CTcpGameServer **)(iVar3 + 4);
    if ((local_10 != (CTcpGameServer *)0x0) &&
       (uVar1 = CTcpGameServer::GetChannelNo(local_10), uVar1 == param_1)) break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)local_18);
  }
  return local_10;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp](source/DNFServer/GameServer/Monitor/DNFServerHandler.cpp)（约第 227 行）：

```cpp
CTcpGameServer* CServerHandler::GetTcpGameServerByCh(unsigned char channel)
{
    for (std::map<unsigned int, CTcpGameServer*>::iterator it = m_tcpGameServers.begin();
         it != m_tcpGameServers.end(); ++it)
    {
        CTcpGameServer* tcp = it->second;
        if (tcp != 0 && tcp->GetChannelNo() == channel)
        {
            return tcp;
        }
    }
    return 0;
}
```
