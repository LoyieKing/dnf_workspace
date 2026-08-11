# _ZN39Packet_Monitor_Notice_Guild_Member_InfoC2Ev

`Packet_Monitor_Notice_Guild_Member_Info::Packet_Monitor_Notice_Guild_Member_Info()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806787a` | `0x4f` | `0x8089e6e` | `0x65` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x2c,0x8(%esp)
 movl   $0x431,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
+mov    %eax,0x4(%esp)
+movl   $0x1a,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN39Packet_Monitor_Notice_Guild_Member_InfoC1Ev+0x45>
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildMemerDBInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
 movl   $0x1a,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_Guild_Member_Info::Packet_Monitor_Notice_Guild_Member_Info() */

void __thiscall
Packet_Monitor_Notice_Guild_Member_Info::_ZN39Packet_Monitor_Notice_Guild_Member_InfoC2Ev
          (Packet_Monitor_Notice_Guild_Member_Info *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x431,0x2c);
  STGuildMemerDBInfo::_ZN18STGuildMemerDBInfoC2Ev((STGuildMemerDBInfo *)(this + 0x12));
  memset(this + 0x12,0,0x1a);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 536 行）：

```cpp
Packet_Monitor_Notice_Guild_Member_Info::Packet_Monitor_Notice_Guild_Member_Info()
    : PacketHeader(0x431, 0x2c)
{
    new ((char*)this + 0x12) STGuildMemerDBInfo;
    memset((char*)this + 0x12, 0, 0x1a);
}
```
