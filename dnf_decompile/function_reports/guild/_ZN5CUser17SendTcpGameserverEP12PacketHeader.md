# _ZN5CUser17SendTcpGameserverEP12PacketHeader

`CUser::SendTcpGameserver(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066bfa` | `0x82` | `0x808924c` | `0x86` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,44 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x80>
+je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x84>
 mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
+add    $0x2,%eax
+movzwl (%eax),%eax
 movzwl %ax,%ecx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x80>
+je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x84>
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
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SendTcpGameserver(PacketHeader*) */

void __thiscall
CUser::_ZN5CUser17SendTcpGameserverEP12PacketHeader(CUser *this,PacketHeader *param_1)

{
  char *pcVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    pcVar1 = (char *)CTcpGameServer::_ZN14CTcpGameServer16makePacketHeaderEtt
                               (*(CTcpGameServer **)(this + 0xc),*(ushort *)param_1,
                                *(ushort *)(param_1 + 2));
    if (pcVar1 != (char *)0x0) {
      memcpy(pcVar1 + 10,param_1 + 10,*(ushort *)(param_1 + 2) - 10);
      CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc
                (*(CTcpGameServer **)(this + 0xc),pcVar1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 243 行）：

```cpp
void CUser::SendTcpGameserver(PacketHeader* pkt)
{
    if (m_tcpGameServer != 0)
    {
        char* out = m_tcpGameServer->makePacketHeader(
            *(unsigned short*)pkt, *(unsigned short*)((char*)pkt + 2));
        if (out != 0)
        {
            memcpy(out + 10, (char*)pkt + 10, *(unsigned short*)((char*)pkt + 2) - 10);
            m_tcpGameServer->SendToGameServer(out);
        }
    }
}
```
