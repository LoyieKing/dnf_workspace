# _ZN28Packet_Notice_Power_War_RankC2Ev

`Packet_Notice_Power_War_Rank::Packet_Notice_Power_War_Rank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a5920` | `0x41` | `0x809bcc8` | `0x41` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x16,0x8(%esp)
 movl   $0x6d8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-add    $0xa,%eax
+add    $0x10,%eax
 movl   $0xc,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Notice_Power_War_Rank::Packet_Notice_Power_War_Rank() */

void __thiscall
Packet_Notice_Power_War_Rank::_ZN28Packet_Notice_Power_War_RankC2Ev
          (Packet_Notice_Power_War_Rank *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x6d8,0x16);
  memset(this + 10,0,0xc);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 786 行）：

```cpp
Packet_Notice_Power_War_Rank::Packet_Notice_Power_War_Rank()
    : PacketHeader(0x6d8, 0x16)
{
    memset((char*)this + 0x10, 0, 0xc);
}
```
