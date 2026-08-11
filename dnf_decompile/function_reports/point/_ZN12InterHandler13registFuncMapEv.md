# _ZN12InterHandler13registFuncMapEv

`InterHandler::registFuncMap()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x808b48c` | `0x2f` | `0x8094eda` | `0x2d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-mov    $&_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x1c(%eax)
+movl   $&_ZN12InterHandler25onINTER_DESTORY_CHARACTEREPN3nsl8CMsgCellE,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
-mov    $&_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
+movl   $&_ZN12InterHandler27onINTER_SERVICE_UNAVAILABLEEPN3nsl8CMsgCellE,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void registFuncMap(InterHandler * this) */

void __thiscall InterHandler::_ZN12InterHandler13registFuncMapEv(InterHandler *this)

{
  this->mArrayFunc[2].__pfn = onINTER_DESTORY_CHARACTER;
  this->mArrayFunc[2].__delta = 0;
  this->mArrayFunc[0].__pfn = onINTER_SERVICE_UNAVAILABLE;
  this->mArrayFunc[0].__delta = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.h)（约第 31 行）：

```cpp
    void registFuncMap()
    {
        for (int i = 0; i <= 0x3ff; i = i + 1)
        {
            mArrayFunc[i] = NULL;
        }
        mArrayFunc[0] = &HandlerFor_GA_::onAUCTION_REGIST_GA;
        mArrayFunc[1] = &HandlerFor_GA_::onAUCTION_ASK_AVERAGE_PRICE_GA;
        mArrayFunc[2] = &HandlerFor_GA_::onAUCTION_ASK_REGISTED_ITEM_NUM_GA;
        mArrayFunc[3] = &HandlerFor_GA_::onAUCTION_REGIST_ITEM_GA;
        mArrayFunc[4] = &HandlerFor_GA_::onAUCTION_REGIST_CANCEL_GA;
        mArrayFunc[5] = &HandlerFor_GA_::onAUCTION_BIDDING_GA;
        mArrayFunc[6] = &HandlerFor_GA_::onAUCTION_SEARCH_BY_ITEMKEY_GA;
        mArrayFunc[7] = &HandlerFor_GA_::onAUCTION_SEARCH_BY_NOITEMKEY_GA;
        mArrayFunc[8] = &HandlerFor_GA_::onAUCTION_MY_REGISTED_ITEM_INFO_GA;
        mArrayFunc[9] = &HandlerFor_GA_::onAUCTION_MY_BIDDING_INFO_GA;
        mArrayFunc[10] = &HandlerFor_GA_::onAUCTION_MY_AUCTION_HISTORY_GA;
        mArrayFunc[11] = &HandlerFor_GA_::onAUCTION_OPEN_PRIVATE_STORE_GA;
        mArrayFunc[12] = &HandlerFor_GA_::onAUCTION_CLOSE_PRIVATE_STORE_GA;
        mArrayFunc[13] = &HandlerFor_GA_::onAUCTION_CHECK_AUCION_READY_GA;
        mArrayFunc[14] = &HandlerFor_GA_::onAUCTION_BUY_ITEM_APIECE_GA;
    }
```
