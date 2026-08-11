# _ZN7Auction20GetAuctionServerNameEv

`Auction::GetAuctionServerName()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8059e0c` | `0xa` | `0x804fe06` | `0xa` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,5 @@
 push   %ebp
 mov    %esp,%ebp
-mov    $"Auction Server",%eax
+mov    $&_ZN7Auction19msAuctionServerNameE,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

char * Auction::_ZN7Auction20GetAuctionServerNameEv(void)

{
  return msAuctionServerName;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp)（约第 887 行）：

```cpp
char* Auction::GetAuctionServerName()
{
    return msAuctionServerName;
}
```
