# _ZN31Packet_Response_D_IPCounterListC1Ev

`Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a2042` | `0x31` | `0x8053478` | `0x35` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xe1c,0x8(%esp)
 movl   $0x103a,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0xb(%eax)
+add    $0xb,%eax
+movb   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList() */

void __thiscall
Packet_Response_D_IPCounterList::_ZN31Packet_Response_D_IPCounterListC1Ev
          (Packet_Response_D_IPCounterList *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x103a,0xe1c);
  this[10] = (Packet_Response_D_IPCounterList)0x0;
  this[0xb] = (Packet_Response_D_IPCounterList)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1875 行）：

```cpp
Packet_Response_D_IPCounterList::Packet_Response_D_IPCounterList()
    : PacketHeader(0x103a, 0xe1c)
{
    *(char*)((char*)this + 0xa) = 0;
    *(char*)((char*)this + 0xb) = 0;
}
```
