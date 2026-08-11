# _ZN30Packet_Channel_Guild_Agit_InfoC2Ev

`Packet_Channel_Guild_Agit_Info::Packet_Channel_Guild_Agit_Info()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809317c` | `0x6d` | `0x8058bda` | `0x89` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,35 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x17,0x8(%esp)
 movl   $0x6e2,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0x10,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
+mov    %eax,0x4(%esp)
+movl   $0x1,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN30Packet_Channel_Guild_Agit_InfoC1Ev+0x69>
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildAgitDBInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
 movl   $0x1,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Channel_Guild_Agit_Info::Packet_Channel_Guild_Agit_Info() */

void __thiscall
Packet_Channel_Guild_Agit_Info::_ZN30Packet_Channel_Guild_Agit_InfoC2Ev
          (Packet_Channel_Guild_Agit_Info *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x6e2,0x17);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  *(undefined4 *)(this + 0x12) = 0;
  STGuildAgitDBInfo::_ZN17STGuildAgitDBInfoC2Ev((STGuildAgitDBInfo *)(this + 0x16));
  memset(this + 0x16,0,1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2376 行）：

```cpp
Packet_Channel_Guild_Agit_Info::Packet_Channel_Guild_Agit_Info()
    : PacketHeader(0x6e2, 0x17)
{
    *(unsigned int*)((char*)this + 0x10) = 0;
    *(unsigned int*)((char*)this + 0xe) = 0;
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) STGuildAgitDBInfo;
    memset((char*)this + 0x16, 0, 1);
}
```
