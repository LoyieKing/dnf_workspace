# _ZN28Packet_DBMW_Change_Char_NameC2Ev

`Packet_DBMW_Change_Char_Name::Packet_DBMW_Change_Char_Name()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092bf4` | `0x52` | `0x807efce` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,20 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x2d,0x8(%esp)
 movl   $0x451,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xb(%eax)
+add    $0xb,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xf,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DBMW_Change_Char_Name::Packet_DBMW_Change_Char_Name() */

void __thiscall
Packet_DBMW_Change_Char_Name::_ZN28Packet_DBMW_Change_Char_NameC2Ev
          (Packet_DBMW_Change_Char_Name *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x451,0x2d);
  this[10] = (Packet_DBMW_Change_Char_Name)0x0;
  *(undefined4 *)(this + 0xb) = 0;
  memset(this + 0xf,0,0x1e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacket.h](source/DNFServer/GameServer/DBMW/DNFPacket.h)（约第 1379 行）：

```cpp
    Packet_DBMW_Change_Char_Name() : PacketHeader(0x439, 0x34) {}
```
