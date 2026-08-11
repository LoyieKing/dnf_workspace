# _ZN39Packet_Monitor_Notice_MemberExp_LevelUpC2Ev

`Packet_Monitor_Notice_MemberExp_LevelUp::Packet_Monitor_Notice_MemberExp_LevelUp()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80996b6` | `0x23` | `0x8060ec4` | `0x44` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x13,0x8(%esp)
 movl   $0x642,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
+mov    0x8(%ebp),%eax
+add    $0xa,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0xe,%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+add    $0x12,%eax
+movb   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_MemberExp_LevelUp::Packet_Monitor_Notice_MemberExp_LevelUp() */

void __thiscall
Packet_Monitor_Notice_MemberExp_LevelUp::_ZN39Packet_Monitor_Notice_MemberExp_LevelUpC2Ev
          (Packet_Monitor_Notice_MemberExp_LevelUp *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x642,0x13);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h)（约第 986 行）：

```cpp
    Packet_Monitor_Notice_MemberExp_LevelUp() : PacketHeader(0x642, 0x13)
    {
        *(unsigned int*)((char*)this + 0xa) = 0;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(char*)((char*)this + 0x12) = 0;
    }
```
