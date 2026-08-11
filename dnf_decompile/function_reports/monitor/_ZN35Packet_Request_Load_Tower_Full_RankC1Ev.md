# _ZN35Packet_Request_Load_Tower_Full_RankC1Ev

`Packet_Request_Load_Tower_Full_Rank::Packet_Request_Load_Tower_Full_Rank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x807aa78` | `0x23` | `0x8081292` | `0x3b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x12,0x8(%esp)
 movl   $0x4cc,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Request_Load_Tower_Full_Rank::Packet_Request_Load_Tower_Full_Rank() */

void __thiscall
Packet_Request_Load_Tower_Full_Rank::_ZN35Packet_Request_Load_Tower_Full_RankC1Ev
          (Packet_Request_Load_Tower_Full_Rank *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x4cc,0x12);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h)（约第 1054 行）：

```cpp
    Packet_Request_Load_Tower_Full_Rank() : PacketHeader(0x4cc, 0x12)
    {
        *(int*)((char*)this + 0xa) = 0;
        *(int*)((char*)this + 0xe) = 0;
    }
```
