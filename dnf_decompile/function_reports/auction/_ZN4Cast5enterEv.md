# _ZN4Cast5enterEv

`Cast::enter()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x806935e` | `0x1e` | `0x80633ce` | `0x1e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,9 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x3,0x4(%eax)
-movl   $&data#1aa49691(.rodata),(%esp)
+movl   $&data#9c1309de(.rodata),(%esp)
 call   <T> <puts>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void enter(Cast * this) */

void __thiscall Cast::_ZN4Cast5enterEv(Cast *this)

{
  (this->super_IState).mCurState = 3;
  puts(&DAT_08153e4a);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h)（约第 32 行）：

```cpp
    virtual void enter()
    {
        mCurState = 0;
        puts("\xbc\xad \xc0\xd6\xb4\xc2\xb4\xd9.");
    }
```
