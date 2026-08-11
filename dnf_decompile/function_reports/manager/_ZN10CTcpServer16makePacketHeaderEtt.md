# _ZN10CTcpServer16makePacketHeaderEtt

`CTcpServer::makePacketHeader(unsigned short, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8067ca8` | `0x62` | `0x8061cc8` | `0x66` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%edx
 mov    0x10(%ebp),%eax
 mov    %dx,-0x1c(%ebp)
 mov    %ax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN10CTcpServer16makePacketHeaderEtt+0x5b>
+jne    <T> <_ZN10CTcpServer16makePacketHeaderEtt+0x25>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CTcpServer16makePacketHeaderEtt+0x64>
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTcpNetSystem21Acquire_TcpSendBufferEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
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
+lea    0x6(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0x6(%eax)
-mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN10CTcpServer16makePacketHeaderEtt+0x60>
-mov    $0x0,%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTcpServer::makePacketHeader(unsigned short, unsigned short) */

ushort * __thiscall
CTcpServer::_ZN10CTcpServer16makePacketHeaderEtt(CTcpServer *this,ushort param_1,ushort param_2)

{
  ushort *puVar1;
  
  if (*(int *)(this + 8) == 0) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = (ushort *)CTcpNetSystem::Acquire_TcpSendBuffer(*(CTcpNetSystem **)(this + 8));
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(this + 4);
  }
  return puVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpServerInterface.cpp](source/DNFServer/GameServer/DBMW/DNFTcpServerInterface.cpp)（约第 65 行）：

```cpp
char* CTcpServer::makePacketHeader(unsigned short type, unsigned short size)
{
    if (!m_net)
        return 0;
    CTcpSendBuffer* buf = m_net->Acquire_TcpSendBuffer();
    char* p = (char*)buf;
    *(unsigned short*)p = type;
    *(unsigned short*)(p + 2) = size;
    *(int*)(p + 6) = (int)m_socket;
    return (char*)buf;
}
```
