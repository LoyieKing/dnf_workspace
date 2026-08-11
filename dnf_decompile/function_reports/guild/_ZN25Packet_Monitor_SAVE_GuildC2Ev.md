# _ZN25Packet_Monitor_SAVE_GuildC2Ev

`Packet_Monitor_SAVE_Guild::Packet_Monitor_SAVE_Guild()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8092f24` | `0x42` | `0x805893c` | `0x5c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,18 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0xd0,0x8(%esp)
 movl   $0x409,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movb   $0xff,0xa(%eax)
+add    $0x10,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xb(%eax)
+add    $0xb,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xf,%eax
+mov    %eax,0x4(%esp)
+movl   $0xbd,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN25Packet_Monitor_SAVE_GuildC1Ev+0x5a>
 mov    %eax,(%esp)
 call   <T> <_ZN17STGuildDBInfoOnlyC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_SAVE_Guild::Packet_Monitor_SAVE_Guild() */

void __thiscall
Packet_Monitor_SAVE_Guild::_ZN25Packet_Monitor_SAVE_GuildC2Ev(Packet_Monitor_SAVE_Guild *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x409,0xd0);
  this[10] = (Packet_Monitor_SAVE_Guild)0xff;
  *(undefined4 *)(this + 0xb) = 0;
  STGuildDBInfoOnly::_ZN17STGuildDBInfoOnlyC2Ev((STGuildDBInfoOnly *)(this + 0xf));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 2311 行）：

```cpp
Packet_Monitor_SAVE_Guild::Packet_Monitor_SAVE_Guild()
    : PacketHeader(0x409, 0xd0)
{
    *(unsigned char*)((char*)this + 0x10) = 0xff;
    *(unsigned int*)((char*)this + 0xb) = 0;
    new ((char*)this + 0xf) STGuildDBInfoOnly;
}
```
