# _ZN32Packet_Monitor_Notice_Guild_InfoC1Ev

`Packet_Monitor_Notice_Guild_Info::Packet_Monitor_Notice_Guild_Info()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092f8a` | `0x5b` | `0x80589bc` | `0x73` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x139,0x8(%esp)
 movl   $0x40a,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x12(%eax)
+add    $0x12,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x16,%eax
+mov    %eax,0x4(%esp)
+movl   $0xbd,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev+0x51>
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildDBInfoOnlyC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xd4,%eax
 movl   $0x65,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_Notice_Guild_Info::Packet_Monitor_Notice_Guild_Info() */

void __thiscall
Packet_Monitor_Notice_Guild_Info::_ZN32Packet_Monitor_Notice_Guild_InfoC1Ev
          (Packet_Monitor_Notice_Guild_Info *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x40a,0x139);
  *(undefined4 *)(this + 0x12) = 0;
  STGuildDBInfoOnly::_ZN17STGuildDBInfoOnlyC2Ev((STGuildDBInfoOnly *)(this + 0x16));
  memset(this + 0xd4,0,0x65);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2325 行）：

```cpp
Packet_Monitor_Notice_Guild_Info::Packet_Monitor_Notice_Guild_Info()
    : PacketHeader(0x40a, 0x139)
{
    *(unsigned int*)((char*)this + 0x12) = 0;
    new ((char*)this + 0x16) STGuildDBInfoOnly;
    memset((char*)this + 0xd4, 0, 0x65);
}
```
