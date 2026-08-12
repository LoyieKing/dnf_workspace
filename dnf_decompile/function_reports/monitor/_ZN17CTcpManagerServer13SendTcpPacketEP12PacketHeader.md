# _ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader

`CTcpManagerServer::SendTcpPacket(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8078d98` | `0x72` | `0x805d674` | `0x72` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer16makePacketHeaderEtt>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 je     <T> <_ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader+0x70>
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
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CTcpManagerServer12SendToServerEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpManagerServer::SendTcpPacket(PacketHeader*) */

void __thiscall
CTcpManagerServer::_ZN17CTcpManagerServer13SendTcpPacketEP12PacketHeader
          (CTcpManagerServer *this,PacketHeader *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)makePacketHeader(this,*(ushort *)param_1,*(ushort *)(param_1 + 2));
  if (pcVar1 != (char *)0x0) {
    memcpy(pcVar1 + 10,param_1 + 10,*(ushort *)(param_1 + 2) - 10);
    SendToServer(this,pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp](source/DNFServer/GameServer/Monitor/DNFManagerServer.cpp)（约第 265 行）：

```cpp
void CTcpManagerServer::SendTcpPacket(PacketHeader* pkt)
{
    char* buf = makePacketHeader(*(unsigned short*)pkt, ((RA_U16<2>*)pkt)->v);
    if (buf != 0)
    {
        memcpy(buf + 10, (char*)pkt + 10, (int)(((RA_U16<2>*)pkt)->v - 10));
        SendToServer(buf);
    }
}
```
