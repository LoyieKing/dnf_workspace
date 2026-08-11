# _ZN6Search13IsValidRefineEh

`Search::IsValidRefine(unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8082810` | `0x15` | `0x8087020` | `0x17` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x4(%ebp)
-cmpb   $0x7f,-0x4(%ebp)
-setbe  %al
+movzbl -0x4(%ebp),%eax
+not    %eax
+shr    $0x7,%al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: bool IsValidRefine(Search * this, BYTE refine) */

bool __thiscall Search::_ZN6Search13IsValidRefineEh(Search *this,BYTE refine)

{
  return refine < 0x80;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/Search.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h 等 568 个文件*
