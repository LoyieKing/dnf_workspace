# _ZN14HandlerFor_GA_13registFuncMapEv

`HandlerFor_GA_::registFuncMap()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x808b05c` | `0x17a` | `0x8094942` | `0x16b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,92 +1,77 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 movl   $0x0,-0x4(%ebp)
 jmp    <T> <_ZN14HandlerFor_GA_13registFuncMapEv+0x2c>
 mov    -0x4(%ebp),%eax
 mov    0x8(%ebp),%edx
 movl   $0x0,0xc(%edx,%eax,8)
 mov    0x8(%ebp),%edx
 movl   $0x0,0x10(%edx,%eax,8)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x3ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14HandlerFor_GA_13registFuncMapEv+0xf>
-mov    $&_ZN14HandlerFor_GA_19onAUCTION_REGIST_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
+movl   $&_ZN14HandlerFor_GA_19onAUCTION_REGIST_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
-mov    $"U됧WVS곸\\!",%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x14(%eax)
+movl   $"U됧WVS곸\\!",0x14(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x18(%eax)
-mov    $&_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x1c(%eax)
+movl   $&_ZN14HandlerFor_GA_34onAUCTION_ASK_REGISTED_ITEM_NUM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
-mov    $&_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x24(%eax)
+movl   $&_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x24(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x28(%eax)
-mov    $&_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x2c(%eax)
+movl   $&_ZN14HandlerFor_GA_26onAUCTION_REGIST_CANCEL_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x2c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x30(%eax)
-mov    $&_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x34(%eax)
+movl   $&_ZN14HandlerFor_GA_20onAUCTION_BIDDING_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x34(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x38(%eax)
-mov    $&_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x3c(%eax)
+movl   $&_ZN14HandlerFor_GA_30onAUCTION_SEARCH_BY_ITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x3c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x40(%eax)
-mov    $&_ZN14HandlerFor_GA_32onAUCTION_SEARCH_BY_NOITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x44(%eax)
+movl   $&_ZN14HandlerFor_GA_32onAUCTION_SEARCH_BY_NOITEMKEY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x44(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x48(%eax)
-mov    $&_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x4c(%eax)
+movl   $&_ZN14HandlerFor_GA_34onAUCTION_MY_REGISTED_ITEM_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x4c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x50(%eax)
-mov    $&_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x54(%eax)
+movl   $&_ZN14HandlerFor_GA_28onAUCTION_MY_BIDDING_INFO_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x54(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x58(%eax)
-mov    $&_ZN14HandlerFor_GA_31onAUCTION_MY_AUCTION_HISTORY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x5c(%eax)
+movl   $&_ZN14HandlerFor_GA_31onAUCTION_MY_AUCTION_HISTORY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x5c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x60(%eax)
-mov    $&_ZN14HandlerFor_GA_31onAUCTION_OPEN_PRIVATE_STORE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x64(%eax)
+movl   $&_ZN14HandlerFor_GA_31onAUCTION_OPEN_PRIVATE_STORE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x64(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x68(%eax)
-mov    $&_ZN14HandlerFor_GA_32onAUCTION_CLOSE_PRIVATE_STORE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x6c(%eax)
+movl   $&_ZN14HandlerFor_GA_32onAUCTION_CLOSE_PRIVATE_STORE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x6c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x70(%eax)
-mov    $&_ZN14HandlerFor_GA_31onAUCTION_CHECK_AUCION_READY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x74(%eax)
+movl   $&_ZN14HandlerFor_GA_31onAUCTION_CHECK_AUCION_READY_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE,0x74(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x78(%eax)
-mov    $"U됧WVS곸�",%edx
 mov    0x8(%ebp),%eax
-mov    %edx,0x7c(%eax)
+movl   $"U됧WVS곸�",0x7c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x80(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void registFuncMap(HandlerFor_GA_ * this) */

void __thiscall HandlerFor_GA_::_ZN14HandlerFor_GA_13registFuncMapEv(HandlerFor_GA_ *this)

{
  int local_8;
  
                    /* Unresolved local var: int i@[???] */
  for (local_8 = 0; local_8 < 0x400; local_8 = local_8 + 1) {
    this->mArrayFunc[local_8].__pfn =
         (_func___thiscall_DWORD_INetWorkHandler_ptr_CMsgCell_ptr_TCPUser_ptr *)0x0;
    this->mArrayFunc[local_8].__delta = 0;
  }
  this->mArrayFunc[0].__pfn = onAUCTION_REGIST_GA;
  this->mArrayFunc[0].__delta = 0;
  this->mArrayFunc[1].__pfn = onAUCTION_ASK_AVERAGE_PRICE_GA;
  this->mArrayFunc[1].__delta = 0;
  this->mArrayFunc[2].__pfn = onAUCTION_ASK_REGISTED_ITEM_NUM_GA;
  this->mArrayFunc[2].__delta = 0;
  this->mArrayFunc[3].__pfn = onAUCTION_REGIST_ITEM_GA;
  this->mArrayFunc[3].__delta = 0;
  this->mArrayFunc[4].__pfn = onAUCTION_REGIST_CANCEL_GA;
  this->mArrayFunc[4].__delta = 0;
  this->mArrayFunc[5].__pfn = onAUCTION_BIDDING_GA;
  this->mArrayFunc[5].__delta = 0;
  this->mArrayFunc[6].__pfn = onAUCTION_SEARCH_BY_ITEMKEY_GA;
  this->mArrayFunc[6].__delta = 0;
  this->mArrayFunc[7].__pfn = onAUCTION_SEARCH_BY_NOITEMKEY_GA;
  this->mArrayFunc[7].__delta = 0;
  this->mArrayFunc[8].__pfn = onAUCTION_MY_REGISTED_ITEM_INFO_GA;
  this->mArrayFunc[8].__delta = 0;
  this->mArrayFunc[9].__pfn = onAUCTION_MY_BIDDING_INFO_GA;
  this->mArrayFunc[9].__delta = 0;
  this->mArrayFunc[10].__pfn = onAUCTION_MY_AUCTION_HISTORY_GA;
  this->mArrayFunc[10].__delta = 0;
  this->mArrayFunc[0xb].__pfn = onAUCTION_OPEN_PRIVATE_STORE_GA;
  this->mArrayFunc[0xb].__delta = 0;
  this->mArrayFunc[0xc].__pfn = onAUCTION_CLOSE_PRIVATE_STORE_GA;
  this->mArrayFunc[0xc].__delta = 0;
  this->mArrayFunc[0xd].__pfn = onAUCTION_CHECK_AUCION_READY_GA;
  this->mArrayFunc[0xd].__delta = 0;
  this->mArrayFunc[0xe].__pfn = onAUCTION_BUY_ITEM_APIECE_GA;
  this->mArrayFunc[0xe].__delta = 0;
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
