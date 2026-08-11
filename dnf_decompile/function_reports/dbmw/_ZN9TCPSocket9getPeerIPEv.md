# _ZN9TCPSocket9getPeerIPEv

`TCPSocket::getPeerIP()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8058bf6` | `0x5e` | `0x80e434a` | `0x6f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
-movzbl 0x17(%eax),%eax
+add    $0x14,%eax
+add    $0x3,%eax
+movzbl (%eax),%eax
 movzbl %al,%ebx
 mov    0x8(%ebp),%eax
-movzbl 0x16(%eax),%eax
+add    $0x14,%eax
+add    $0x2,%eax
+movzbl (%eax),%eax
 movzbl %al,%ecx
 mov    0x8(%ebp),%eax
-movzbl 0x15(%eax),%eax
+add    $0x14,%eax
+add    $0x1,%eax
+movzbl (%eax),%eax
 movzbl %al,%edx
 mov    0x8(%ebp),%eax
-movzbl 0x14(%eax),%eax
+add    $0x14,%eax
+movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %ebx,0x14(%esp)
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"%d.%d.%d.%d",0x4(%esp)
 movl   $&_ZZN9TCPSocket9getPeerIPEvE2ip,(%esp)
 call   <T> <sprintf>
 mov    $&_ZZN9TCPSocket9getPeerIPEvE2ip,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::getPeerIP() */

undefined1 * __thiscall TCPSocket::_ZN9TCPSocket9getPeerIPEv(TCPSocket *this)

{
  sprintf(getPeerIP()::ip,"%d.%d.%d.%d",(uint)(byte)this[0x14],(uint)(byte)this[0x15],
          (uint)(byte)this[0x16],(uint)(byte)this[0x17]);
  return getPeerIP()::ip;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp](source/DNFServer/GameServer/DBMW/DNFTcpSocket.cpp)（约第 166 行）：

```cpp
char* TCPSocket::getPeerIP()
{
    static char ip[0x20];
    sprintf(ip, "%d.%d.%d.%d",
            (unsigned char)((char*)&m_addr)[0],
            (unsigned char)((char*)&m_addr)[1],
            (unsigned char)((char*)&m_addr)[2],
            (unsigned char)((char*)&m_addr)[3]);
    return ip;
}
```
