# _ZN31Packet_VillageAttackedCountdownC1Ev

`Packet_VillageAttackedCountdown::Packet_VillageAttackedCountdown()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80aa1c6` | `0x2d` | `0x80a8800` | `0x2f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xe,0x8(%esp)
 movl   $0x1776,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_VillageAttackedCountdown::Packet_VillageAttackedCountdown() */

void __thiscall
Packet_VillageAttackedCountdown::_ZN31Packet_VillageAttackedCountdownC1Ev
          (Packet_VillageAttackedCountdown *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1776,0xe);
  *(undefined4 *)(this + 10) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h)（约第 1039 行）：

```cpp
    Packet_VillageAttackedCountdown() : PacketHeader(0x1776, 0xe)
    {
        *(int*)((char*)this + 0xa) = 0;
    }
```
