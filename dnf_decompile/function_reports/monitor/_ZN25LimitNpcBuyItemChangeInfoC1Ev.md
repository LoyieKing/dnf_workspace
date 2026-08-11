# _ZN25LimitNpcBuyItemChangeInfoC1Ev

`LimitNpcBuyItemChangeInfo::LimitNpcBuyItemChangeInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8092f0a` | `0x37` | `0x809564c` | `0x3b` |

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
 movl   $0x12,0x8(%esp)
 movl   $0x27db,0x4(%esp)
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
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* LimitNpcBuyItemChangeInfo::LimitNpcBuyItemChangeInfo() */

void __thiscall
LimitNpcBuyItemChangeInfo::_ZN25LimitNpcBuyItemChangeInfoC1Ev(LimitNpcBuyItemChangeInfo *this)

{
  PacketHeader::PacketHeader((PacketHeader *)this,0x27db,0x12);
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)(this + 0xe) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp](source/DNFServer/GameServer/Monitor/LimitNpcBuyItem.cpp)（约第 118 行）：

```cpp
LimitNpcBuyItemChangeInfo::LimitNpcBuyItemChangeInfo() : PacketHeader(0x27db, 0x12)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(int*)((char*)this + 0xe) = 0;
}
```
