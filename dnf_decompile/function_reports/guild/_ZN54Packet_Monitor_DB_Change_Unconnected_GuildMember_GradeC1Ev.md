# _ZN54Packet_Monitor_DB_Change_Unconnected_GuildMember_GradeC1Ev

`Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8089b12` | `0x59` | `0x807f416` | `0x59` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x33,0x8(%esp)
 movl   $0x42b,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 movb   $0x0,0xa(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x32(%eax)
 mov    0x8(%ebp),%eax
-add    $0x14,%eax
+add    $0x15,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade()
    */

void __thiscall
Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::
_ZN54Packet_Monitor_DB_Change_Unconnected_GuildMember_GradeC1Ev
          (Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x42b,0x33);
  this[10] = (Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  this[0x32] = (Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade)0xff;
  memset(this + 0x14,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5911 行）：

```cpp
    Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade()
    : PacketHeader(0x42b, 0x33)
{
    ma = 0;
    mb = 0;
    m32 = 255;
    memset(m_name, 0, 0x1e);
}
```
