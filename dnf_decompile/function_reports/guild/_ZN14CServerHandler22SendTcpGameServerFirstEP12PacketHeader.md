# _ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader

`CServerHandler::SendTcpGameServerFirst(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806d76c` | `0xce` | `0x8081b10` | `0xc1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xc8>
-movl   $0x0,-0x10(%ebp)
-movl   $0x0,-0xc(%ebp)
+je     <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xbf>
 mov    0x8(%ebp),%eax
 lea    0x24(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP14CTcpGameServerSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP14CTcpGameServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer13IsValidServerEv>
 test   %al,%al
-je     <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xcb>
+je     <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xbf>
 mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%eax
-lea    -0xa(%eax),%ecx
-mov    0xc(%ebp),%eax
-lea    0xa(%eax),%edx
-mov    -0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+sub    $0xa,%eax
+mov    0xc(%ebp),%edx
+lea    0xa(%edx),%ecx
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+mov    %eax,0x8(%esp)
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-jmp    <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xcc>
-nop
-jmp    <T> <_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader+0xcc>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendTcpGameServerFirst(PacketHeader*) */

void __thiscall
CServerHandler::_ZN14CServerHandler22SendTcpGameServerFirstEP12PacketHeader
          (CServerHandler *this,PacketHeader *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
  local_18 [4];
  CTcpGameServer *local_14;
  char *local_10;
  
  cVar1 = std::
          map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
          ::empty((map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
                   *)(this + 0x24));
  if (cVar1 == '\0') {
    local_14 = (CTcpGameServer *)0x0;
    local_10 = (char *)0x0;
    std::
    map<unsigned_int,CTcpGameServer*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CTcpGameServer*>>>
    ::begin(local_18);
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CTcpGameServer*>> *)local_18)
    ;
    local_14 = *(CTcpGameServer **)(iVar2 + 4);
    cVar1 = CTcpGameServer::IsValidServer(local_14);
    if (cVar1 != '\0') {
      local_10 = (char *)CTcpGameServer::makePacketHeader
                                   (local_14,*(ushort *)param_1,*(ushort *)(param_1 + 2));
      memcpy(local_10 + 10,param_1 + 10,*(ushort *)(param_1 + 2) - 10);
      CTcpGameServer::SendToGameServer(local_14,local_10);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFServerHandler.cpp](source/DNFServer/GameServer/Guild/DNFServerHandler.cpp)（约第 335 行）：

```cpp
void CServerHandler::SendTcpGameServerFirst(PacketHeader* pkt)
{
    if (!m_tcpGameServers.empty())
    {
        CTcpGameServer* tgs = m_tcpGameServers.begin()->second;
        if (tgs->IsValidServer())
        {
            char* buf = tgs->makePacketHeader(*(unsigned short*)pkt,
                                              *(unsigned short*)((char*)pkt + 2));
            memcpy(buf + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
            tgs->SendToGameServer(buf);
        }
    }
}
```
