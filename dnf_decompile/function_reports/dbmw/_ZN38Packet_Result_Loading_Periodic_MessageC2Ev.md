# _ZN38Packet_Result_Loading_Periodic_MessageC2Ev

`Packet_Result_Loading_Periodic_Message::Packet_Result_Loading_Periodic_Message()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a2098` | `0x5b` | `0x80538b4` | `0x5d` |

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
 movl   $0x212,0x8(%esp)
 movl   $0x1f49,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0xa,%eax
 movl   $0x200,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x20a(%eax)
+add    $0x20a,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x20e(%eax)
+add    $0x20e,%eax
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Result_Loading_Periodic_Message::Packet_Result_Loading_Periodic_Message() */

void __thiscall
Packet_Result_Loading_Periodic_Message::_ZN38Packet_Result_Loading_Periodic_MessageC2Ev
          (Packet_Result_Loading_Periodic_Message *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1f49,0x212);
  memset(this + 10,0,0x200);
  *(undefined4 *)(this + 0x20a) = 0;
  *(undefined4 *)(this + 0x20e) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 1960 行）：

```cpp
Packet_Result_Loading_Periodic_Message::Packet_Result_Loading_Periodic_Message()
    : PacketHeader(0x1f49, 0x212)
{
    memset((char*)this + 0xa, 0, 0x200);
    *(int*)((char*)this + 0x20a) = 0;
    *(int*)((char*)this + 0x20e) = 0;
}
```
