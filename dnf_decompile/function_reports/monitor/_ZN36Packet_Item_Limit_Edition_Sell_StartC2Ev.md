# _ZN36Packet_Item_Limit_Edition_Sell_StartC2Ev

`Packet_Item_Limit_Edition_Sell_Start::Packet_Item_Limit_Edition_Sell_Start()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092c8e` | `0x34` | `0x807ef96` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x7ef,0x8(%esp)
 movl   $0x1004,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xb(%eax)
+add    $0xb,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x0,0xa(%eax)
+add    $0xa,%eax
+movb   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Packet_Item_Limit_Edition_Sell_Start::Packet_Item_Limit_Edition_Sell_Start() */

void __thiscall
Packet_Item_Limit_Edition_Sell_Start::_ZN36Packet_Item_Limit_Edition_Sell_StartC2Ev
          (Packet_Item_Limit_Edition_Sell_Start *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x1004,0x7ef);
  *(undefined4 *)(this + 0xb) = 0;
  this[10] = (Packet_Item_Limit_Edition_Sell_Start)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/shared/packet/include/Packet_Item_Limit_Edition_Sell_Start.h](source/shared/packet/include/Packet_Item_Limit_Edition_Sell_Start.h)（约第 9 行）：

```cpp
    Packet_Item_Limit_Edition_Sell_Start() : PacketHeader(0x1004, 0x7ef)
    {
        *(int*)((char*)this + 0xb) = 0;
        *(char*)((char*)this + 0xa) = 0;
    }
```
