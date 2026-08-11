# _ZN19StatisticsCollector18DataInitializationEb

`StatisticsCollector::DataInitialization(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | NEAR | `0x8091a32` | `0x77` | `0x80a07f0` | `0x77` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,37 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x18,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x1c(%ebp)
-cmpb   $0x0,-0x1c(%ebp)
+mov    %al,-0x14(%ebp)
+cmpb   $0x0,-0x14(%ebp)
 je     <T> <_ZN19StatisticsCollector18DataInitializationEb+0x43>
-movl   $0x0,-0x10(%ebp)
+movl   $0x0,-0x8(%ebp)
 jmp    <T> <_ZN19StatisticsCollector18DataInitializationEb+0x36>
-mov    -0x10(%ebp),%eax
+mov    -0x8(%ebp),%eax
 imul   $0xe4,%eax,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector6StData5resetEv>
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x2,-0x10(%ebp)
+addl   $0x1,-0x8(%ebp)
+cmpl   $0x2,-0x8(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN19StatisticsCollector18DataInitializationEb+0x1b>
 jmp    <T> <_ZN19StatisticsCollector18DataInitializationEb+0x75>
-movl   $0x0,-0xc(%ebp)
+movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN19StatisticsCollector18DataInitializationEb+0x69>
-mov    -0xc(%ebp),%eax
+mov    -0x4(%ebp),%eax
 imul   $0xe4,%eax,%eax
 add    $0x2b0,%eax
 add    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector6StData5resetEv>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x2,-0xc(%ebp)
+addl   $0x1,-0x4(%ebp)
+cmpl   $0x2,-0x4(%ebp)
 setbe  %al
 test   %al,%al
 jne    <T> <_ZN19StatisticsCollector18DataInitializationEb+0x4c>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void DataInitialization(StatisticsCollector * this, bool dayDateInit)
    */

void __thiscall
StatisticsCollector::_ZN19StatisticsCollector18DataInitializationEb
          (StatisticsCollector *this,bool dayDateInit)

{
  uint local_14;
  uint local_10;
  
  if (dayDateInit) {
                    /* Unresolved local var: size_t i@[???] */
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      StData::reset((StData *)(this->mStDataPerDay + local_14));
    }
  }
  else {
                    /* Unresolved local var: size_t i@[???] */
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      StData::reset((StData *)(this->mStDataPerSec + local_10));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/StatisticsCollector.cpp)（约第 132 行）：

```cpp
void StatisticsCollector::DataInitialization(bool dayDateInit)
{
    if (dayDateInit)
    {
        for (unsigned int i = 0; i < 3; i++)
        {
            mStDataPerDay[i].reset();
        }
    }
    else
    {
        for (unsigned int i = 0; i < 3; i++)
        {
            mStDataPerSec[i].reset();
        }
        // 原版 else 路径落在 leave 前有 1 字节 nop（day 路径 jmp 直接到 leave）
        __asm__ __volatile__("nop");
    }
}
```
