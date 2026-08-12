# _ZN14CServerHandler16SendAllTcpServerEP12PacketHeader

`CServerHandler::SendAllTcpServer(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808fe08` | `0xfa` | `0x80dfe48` | `0xfa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,71 +1,71 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE5beginEv>
 sub    $0x4,%esp
 jmp    <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader+0xc3>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer13IsValidServerEv>
 test   %al,%al
 je     <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader+0xb8>
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer16makePacketHeaderEtt>
 mov    %eax,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
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
 call   <T> <_ZN10CTcpServer12SendToServerEPc>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1000(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIhP10CTcpServerSt4lessIhESaISt4pairIKhS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKhP10CTcpServerEEneERKS5_>
 test   %al,%al
 jne    <T> <_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader+0x34>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CServerHandler::SendAllTcpServer(PacketHeader*) */

void __thiscall
CServerHandler::_ZN14CServerHandler16SendAllTcpServerEP12PacketHeader
          (CServerHandler *this,PacketHeader *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  local_1c [4];
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  local_18 [4];
  CTcpServer *local_14;
  char *local_10;
  
  local_14 = (CTcpServer *)0x0;
  local_10 = (char *)0x0;
  std::
  map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_char,CTcpServer*,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,CTcpServer*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_1c);
    local_14 = *(CTcpServer **)(iVar2 + 4);
    cVar1 = CTcpServer::IsValidServer(local_14);
    if (cVar1 != '\0') {
      local_10 = (char *)CTcpServer::_ZN10CTcpServer16makePacketHeaderEtt
                                   (local_14,*(ushort *)param_1,*(ushort *)(param_1 + 2));
      memcpy(local_10 + 10,param_1 + 10,*(ushort *)(param_1 + 2) - 10);
      CTcpServer::SendToServer(local_14,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,CTcpServer*>> *)local_1c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp](source/DNFServer/GameServer/DBMW/DNFServerHandler.cpp)（约第 153 行）：

```cpp
void CServerHandler::SendAllTcpServer(PacketHeader* header)
{
    CTcpServer* server = 0;
    char* buf = 0;
    for (std::map<unsigned char, CTcpServer*>::iterator it = m_tcpServers.begin();
         it != m_tcpServers.end(); ++it)
    {
        server = it->second;
        if (server->IsValidServer())
        {
            buf = (char*)server->makePacketHeader(header->packetId, header->packetSize);
            memcpy((char*)buf + 0xa, (char*)header + 0xa, header->packetSize - 0xa);
            server->SendToServer(buf);
        }
    }
}
```
