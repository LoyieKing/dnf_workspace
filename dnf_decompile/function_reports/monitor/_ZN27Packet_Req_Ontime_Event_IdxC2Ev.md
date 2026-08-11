# _ZN27Packet_Req_Ontime_Event_IdxC2Ev

`Packet_Req_Ontime_Event_Idx::Packet_Req_Ontime_Event_Idx()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a4e9e` | `0x23` | `0x809a2f0` | `0x23` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xa,0x8(%esp)
-movl   $0x2340,0x4(%esp)
+movl   $0x2346,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Req_Ontime_Event_Idx::Packet_Req_Ontime_Event_Idx() */

void __thiscall
Packet_Req_Ontime_Event_Idx::_ZN27Packet_Req_Ontime_Event_IdxC2Ev(Packet_Req_Ontime_Event_Idx *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x2340,10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h)（约第 951 行）：

```cpp
    Packet_Req_Ontime_Event_Idx() : PacketHeader(0x2346, 0xa) {}
```
