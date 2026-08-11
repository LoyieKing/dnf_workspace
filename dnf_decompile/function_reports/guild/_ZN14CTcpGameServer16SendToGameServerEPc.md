# _ZN14CTcpGameServer16SendToGameServerEPc

`CTcpGameServer::SendToGameServer(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c43c` | `0x1d` | `0x8052566` | `0x27` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN14CTcpGameServer16SendToGameServerEPc+0x25>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem18PushTcpSendPacketQEPc>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpGameServer::SendToGameServer(char*) */

void __thiscall
CTcpGameServer::_ZN14CTcpGameServer16SendToGameServerEPc(CTcpGameServer *this,char *param_1)

{
  CTcpNetSystem::_ZN13CTcpNetSystem18PushTcpSendPacketQEPc(*(CTcpNetSystem **)(this + 4),param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGameServer.cpp](source/DNFServer/GameServer/Guild/DNFGameServer.cpp)（约第 124 行）：

```cpp
void CTcpGameServer::SendToGameServer(char* buf)
{
    if (m_net != 0)
    {
        m_net->PushTcpSendPacketQ(buf);
    }
}
```
