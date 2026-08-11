# _ZN12CTcpDBServer13SendHeartbeatEv

`CTcpDBServer::SendHeartbeat()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c04e` | `0x4b` | `0x804fd30` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0xb,0x8(%esp)
 movl   $0x106a,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer16makePacketHeaderEtt>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN12CTcpDBServer13SendHeartbeatEv+0x49>
+je     <T> <_ZN12CTcpDBServer13SendHeartbeatEv+0x45>
 mov    -0xc(%ebp),%eax
-movb   $0x9,0xa(%eax)
+add    $0xa,%eax
+movb   $0x9,(%eax)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CTcpDBServer12SendToServerEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpDBServer::SendHeartbeat() */

void __thiscall CTcpDBServer::_ZN12CTcpDBServer13SendHeartbeatEv(CTcpDBServer *this)

{
  char *pcVar1;
  
  pcVar1 = (char *)makePacketHeader(this,0x106a,0xb);
  if (pcVar1 != (char *)0x0) {
    pcVar1[10] = '\t';
    SendToServer(this,pcVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFDBServer.cpp](source/DNFServer/GameServer/Guild/DNFDBServer.cpp)（约第 156 行）：

```cpp
void CTcpDBServer::SendHeartbeat()
{
    char* pkt = makePacketHeader(0x106a, 0xb);
    if (pkt != 0)
    {
        pkt[10] = '\t';
        SendToServer(pkt);
    }
}
```
