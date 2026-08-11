# _ZN25LimitNpcBuyItemResultInfoC1Ev

`LimitNpcBuyItemResultInfo::LimitNpcBuyItemResultInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a23d0` | `0x79` | `0x807c19a` | `0x7b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x176,0x8(%esp)
 movl   $0x27dc,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12PacketHeaderC1Ett>
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
 mov    %eax,%ebx
-mov    $0x1d,%esi
+mov    $0x1c,%esi
 jmp    <T> <_ZN25LimitNpcBuyItemResultInfoC1Ev+0x40>
 mov    %ebx,(%esp)
 call   <T> <_ZN15NpcBuyLimitItemC1Ev>
 add    $0xc,%ebx
 sub    $0x1,%esi
 cmp    $0xffffffff,%esi
 setne  %al
 test   %al,%al
 jne    <T> <_ZN25LimitNpcBuyItemResultInfoC1Ev+0x32>
 mov    0x8(%ebp),%eax
-movl   $0x0,0xa(%eax)
+add    $0xa,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0xe,%eax
 movl   $0x168,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* LimitNpcBuyItemResultInfo::LimitNpcBuyItemResultInfo() */

void __thiscall
LimitNpcBuyItemResultInfo::_ZN25LimitNpcBuyItemResultInfoC1Ev(LimitNpcBuyItemResultInfo *this)

{
  NpcBuyLimitItem *this_00;
  int iVar1;
  
  PacketHeader::PacketHeader((PacketHeader *)this,0x27dc,0x176);
  this_00 = (NpcBuyLimitItem *)(this + 0xe);
  for (iVar1 = 0x1d; iVar1 != -1; iVar1 = iVar1 + -1) {
    NpcBuyLimitItem::NpcBuyLimitItem(this_00);
    this_00 = this_00 + 0xc;
  }
  *(undefined4 *)(this + 10) = 0;
  memset(this + 0xe,0,0x168);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 69 行）：

```cpp
LimitNpcBuyItemResultInfo::LimitNpcBuyItemResultInfo()
    : PacketHeader(0x27dc, 0x176)
{
    *(int*)((char*)this + 0xa) = 0;
    memset((char*)this + 0xe, 0, 0x168);
}
```
