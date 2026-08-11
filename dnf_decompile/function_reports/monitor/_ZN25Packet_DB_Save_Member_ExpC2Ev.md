# _ZN25Packet_DB_Save_Member_ExpC2Ev

`Packet_DB_Save_Member_Exp::Packet_DB_Save_Member_Exp()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809b2f4` | `0x23` | `0x8062e10` | `0x47` |

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
 movl   $0x16,0x8(%esp)
 movl   $0x641,0x4(%esp)
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
+movl   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_DB_Save_Member_Exp::Packet_DB_Save_Member_Exp() */

void __thiscall
Packet_DB_Save_Member_Exp::_ZN25Packet_DB_Save_Member_ExpC2Ev(Packet_DB_Save_Member_Exp *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x641,0x16);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.h)（约第 972 行）：

```cpp
    Packet_DB_Save_Member_Exp() : PacketHeader(0x641, 0x16)
    {
        *(unsigned int*)((char*)this + 0xa) = 0;
        *(unsigned int*)((char*)this + 0xe) = 0;
        *(unsigned int*)((char*)this + 0x12) = 0;
    }
```
