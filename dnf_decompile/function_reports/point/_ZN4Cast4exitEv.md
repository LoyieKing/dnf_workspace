# _ZN4Cast4exitEv

`Cast::exit()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x806937c` | `0x14` | `0x80633ea` | `0x14` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-movl   $&data#06843823(.rodata),(%esp)
+movl   $&data#83b5891d(.rodata),(%esp)
 call   <T> <puts>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void exit(Cast * this) */

void __thiscall Cast::_ZN4Cast4exitEv(Cast *this)

{
  puts(&DAT_08153e56);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/IState.h)（约第 37 行）：

```cpp
    virtual void exit()
    {
        puts("\xbc\xad \xc0\xd6\xb4\xc2 \xb5\xbf\xc0\xdb\xc0\xbb \xb1\xd7\xb8\xb8\xc7\xcf\xb0\xed \xb4\xd9\xb8\xa5\xb0\xc9 \xc7\xd2\xb2\xa8\xb4\xd9.");
    }
```
