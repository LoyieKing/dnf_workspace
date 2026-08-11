# _ZN34Packet_MTG_OntimeEvent_RewardStartC1Ev

`Packet_MTG_OntimeEvent_RewardStart::Packet_MTG_OntimeEvent_RewardStart()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a4e2e` | `0x4b` | `0x807e75a` | `0x2d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x1a,0x8(%esp)
 movl   $0x17c0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x16(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_MTG_OntimeEvent_RewardStart::Packet_MTG_OntimeEvent_RewardStart() */

void __thiscall
Packet_MTG_OntimeEvent_RewardStart::_ZN34Packet_MTG_OntimeEvent_RewardStartC1Ev
          (Packet_MTG_OntimeEvent_RewardStart *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x17c0,0x1a);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  *(undefined4 *)(this + 0x16) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 5831 行）：

```cpp
Packet_MTG_OntimeEvent_RewardStart::Packet_MTG_OntimeEvent_RewardStart()
    : PacketHeader(0x17c0, 0x1a)
{
    m_eventIdx = 0;
}
```
