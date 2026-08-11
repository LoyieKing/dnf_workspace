# _ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER

`RandomOption::change_option(ENUM_RANDOM_OPTION_NUMBER)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80563a8` | `0x3d` | `0x805c296` | `0x3f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17RandomOptionField5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x36>
+je     <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x38>
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%eax
-and    $0x3,%eax
-movzbl %al,%edx
+movzbl %al,%eax
+mov    %eax,%edx
+and    $0x3,%edx
 mov    0xc(%ebp),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x36>
+jne    <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x38>
 mov    $0x1,%eax
-jmp    <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x3b>
+jmp    <T> <_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER+0x3d>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool change_option(RandomOption * this, ENUM_RANDOM_OPTION_NUMBER
   optionNumber) */

bool __thiscall
RandomOption::_ZN12RandomOption13change_optionE25ENUM_RANDOM_OPTION_NUMBER
          (RandomOption *this,ENUM_RANDOM_OPTION_NUMBER optionNumber)

{
  bool bVar1;
  
  bVar1 = RandomOptionField::empty(&this->modify_option_);
  if ((bVar1) || (((this->modify_seed_).field_0.seed_ & 3) != optionNumber)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h)（约第 71 行）：

```cpp
    bool change_option(ENUM_RANDOM_OPTION_NUMBER optionNumber)
    {
        return (modify_option_.empty() == false) && ((modify_seed_.seed_ & 3) == optionNumber);
    }
```
