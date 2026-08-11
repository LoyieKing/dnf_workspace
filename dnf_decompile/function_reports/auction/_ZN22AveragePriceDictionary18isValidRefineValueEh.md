# _ZN22AveragePriceDictionary18isValidRefineValueEh

`AveragePriceDictionary::isValidRefineValue(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8065230` | `0x20` | `0x8061182` | `0x22` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,13 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-cmpb   $0x7f,-0x4(%ebp)
-jbe    <T> <_ZN22AveragePriceDictionary18isValidRefineValueEh+0x19>
+movzbl -0x4(%ebp),%eax
+test   %al,%al
+jns    <T> <_ZN22AveragePriceDictionary18isValidRefineValueEh+0x1b>
 mov    $0x0,%eax
-jmp    <T> <_ZN22AveragePriceDictionary18isValidRefineValueEh+0x1e>
+jmp    <T> <_ZN22AveragePriceDictionary18isValidRefineValueEh+0x20>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool isValidRefineValue(AveragePriceDictionary * this, uchar
   itemRefineValue) */

bool __thiscall
AveragePriceDictionary::_ZN22AveragePriceDictionary18isValidRefineValueEh
          (AveragePriceDictionary *this,uchar itemRefineValue)

{
  return itemRefineValue < 0x80;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h)（约第 49 行）：

```cpp
    bool isValidRefineValue(unsigned char itemRefineValue)
    {
        // POINT_SERVER may change refine max (0x07 vs 0x7f) — preserve macros.
        // Same false-first shape as isValidUpgradeValue. Note: auction's 0x7f
        // bound is folded by gcc4.4 to movzbl/test/jns (semantic == cmpb $0x7f).
#ifdef POINT_SERVER
        if (itemRefineValue > 0x07)
#else
        if (itemRefineValue > 0x7f)
#endif
        {
            return false;
        }
        else
        {
            return true;
        }
    }
```
