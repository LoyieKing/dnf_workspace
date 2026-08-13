# _ZN5CUser17SendTcpGameserverEP12PacketHeader

`CUser::SendTcpGameserver(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066bfa` | `0x82` | `0x808a02e` | `0x82` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,42 +1,34 @@
+add    $0x18,%eax
+movl   $0x1e,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+leave
+ret
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x80>
-mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%ecx
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
+mov    0xc(%ebp),%edx
+mov    %edx,0x44(%eax)
+pop    %ebp
+ret
+push   %ebp
+mov    %esp,%ebp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16makePacketHeaderEtt>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader+0x80>
-mov    0xc(%ebp),%eax
-movzwl 0x2(%eax),%eax
-movzwl %ax,%eax
-lea    -0xa(%eax),%ecx
-mov    0xc(%ebp),%eax
-lea    0xa(%eax),%edx
-mov    -0xc(%ebp),%eax
-add    $0xa,%eax
-mov    %ecx,0x8(%esp)
-mov    %edx,0x4(%esp)
+call   <T> <_ZN5CUser11DetachGuildEv>
+mov    0x8(%ebp),%eax
+add    $0x4a,%eax
+movl   $0x1a,0x8(%esp)
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <memcpy>
+call   <T> <memset>
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    -0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CTcpGameServer16SendToGameServerEPc>
-leave
-ret
+movw   $0x0,0x48(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x7f,0x7e(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x80(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x84(%eax)
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

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 279 行）：

```cpp
void CUser::SendTcpGameserver(PacketHeader* pkt)
{
    if (m_tcpGameServer != 0)
    {
        char* out = m_tcpGameServer->makePacketHeader(
            pkt->packetId, pkt->packetSize);
        if (out != 0)
        {
            memcpy(out + 10, (char*)pkt + 10, pkt->packetSize - 10);
            m_tcpGameServer->SendToGameServer(out);
        }
    }
}
```
