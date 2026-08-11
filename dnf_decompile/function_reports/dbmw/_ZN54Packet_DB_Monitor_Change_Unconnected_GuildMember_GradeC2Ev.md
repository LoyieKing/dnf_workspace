# _ZN54Packet_DB_Monitor_Change_Unconnected_GuildMember_GradeC2Ev

`Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade::Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a1a3c` | `0x6d` | `0x80539ce` | `0x77` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,31 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x36,0x8(%esp)
 movl   $0x42b,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xe(%eax)
+add    $0xe,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x30(%eax)
+add    $0x30,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0x31(%eax)
+add    $0x31,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x32(%eax)
+add    $0x32,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x12,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade::Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade()
    */

void __thiscall
Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade::
_ZN54Packet_DB_Monitor_Change_Unconnected_GuildMember_GradeC2Ev
          (Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x42b,0x36);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  this[0x30] = (Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade)0xff;
  this[0x31] = (Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade)0x0;
  *(undefined4 *)(this + 0x32) = 0;
  memset(this + 0x12,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1984 行）：

```cpp
    Packet_DB_Monitor_Change_Unconnected_GuildMember_Grade()
    : PacketHeader(0x42b, 0x36)
{
    *(int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
    *(char*)((char*)this + 0x30) = 0xff;
    *(char*)((char*)this + 0x31) = 0;
    *(int*)((char*)this + 0x32) = 0;
    memset((char*)this + 0x12, 0, 0x1e);
}
```
