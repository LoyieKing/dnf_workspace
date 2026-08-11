# _ZN12CTcpDBServer16makePacketHeaderEtt

`CTcpDBServer::makePacketHeader(unsigned short, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806c244` | `0x64` | `0x804ff1a` | `0x62` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,34 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dx,-0x1c(%ebp)
 mov    %ax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN12CTcpDBServer16makePacketHeaderEtt+0x5d>
+jne    <T> <_ZN12CTcpDBServer16makePacketHeaderEtt+0x25>
+mov    $0x0,%eax
+jmp    <T> <_ZN12CTcpDBServer16makePacketHeaderEtt+0x60>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem21Acquire_TcpSendBufferEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x10(%ebp),%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 movzwl -0x1c(%ebp),%edx
 mov    %dx,(%eax)
 mov    -0xc(%ebp),%eax
-movzwl -0x20(%ebp),%edx
-mov    %dx,0x2(%eax)
+lea    0x2(%eax),%edx
+movzwl -0x20(%ebp),%eax
+mov    %ax,(%edx)
+mov    -0xc(%ebp),%eax
+lea    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,%edx
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 mov    -0xc(%ebp),%eax
-mov    %edx,0x6(%eax)
-mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN12CTcpDBServer16makePacketHeaderEtt+0x62>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpDBServer::makePacketHeader(unsigned short, unsigned short) */

ushort * __thiscall
CTcpDBServer::_ZN12CTcpDBServer16makePacketHeaderEtt
          (CTcpDBServer *this,ushort param_1,ushort param_2)

{
  ushort *puVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)CTcpNetSystem::Acquire_TcpSendBuffer(*(CTcpNetSystem **)(this + 0xc));
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(this + 8);
  }
  return puVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFDBServer.cpp](source/DNFServer/GameServer/Guild/DNFDBServer.cpp)（约第 222 行）：

```cpp
char* CTcpDBServer::makePacketHeader(unsigned short id, unsigned short size)
{
    if (m_net == 0)
    {
        return 0;
    }
    char* buf = (char*)m_net->Acquire_TcpSendBuffer();
    *(unsigned short*)buf = id;
    *(unsigned short*)(buf + 2) = size;
    *(unsigned int*)(buf + 0xc) = *(unsigned int*)((char*)this + 8);
    return buf;
}
```
