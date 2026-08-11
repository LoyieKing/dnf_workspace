# _ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_ASK_AVERAGE_PRICE_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80741a2` | `0x39c` | `0x8072768` | `0x3c4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,237 +1,253 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x215c,%esp
-movl   $0x0,-0x38(%ebp)
-lea    -0x86(%ebp),%eax
+movl   $0x0,-0x34(%ebp)
+lea    -0x82(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32PCK_AUCTION_ASK_AVERAGE_PRICE_AGC1Ev>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_ASK_AVERAGE_PRICE_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x77>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_AVERAGE_PRICE_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x391>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3b9>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    %eax,-0x34(%ebp)
-lea    -0x50(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x22(%eax),%edx
-mov    %edx,-0x4c(%ebp)
-mov    0x26(%eax),%edx
-mov    %edx,-0x48(%ebp)
-mov    0x2a(%eax),%eax
-mov    %eax,-0x44(%ebp)
+mov    %eax,-0x4c(%ebp)
+mov    -0x30(%ebp),%eax
+add    $0x22,%eax
+mov    0x4(%eax),%edx
+mov    (%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    %edx,-0x44(%ebp)
+mov    -0x30(%ebp),%eax
+add    $0x2a,%eax
+mov    (%eax),%eax
+mov    %eax,-0x40(%ebp)
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xd4>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xdb>
 mov    -0x24(%ebp),%ecx
 mov    -0x24(%ebp),%eax
-mov    -0x34(%ebp),%edx
+mov    -0x30(%ebp),%edx
 movzbl 0x1f(%edx,%eax,1),%eax
 movzbl %al,%eax
 lea    0x8(%ecx),%edx
-mov    %ax,-0x50(%ebp,%edx,2)
+mov    %ax,-0x4c(%ebp,%edx,2)
 addl   $0x1,-0x24(%ebp)
 cmpl   $0x2,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xb7>
-lea    -0x50(%ebp),%eax
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0xbe>
+lea    -0x4c(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIPsEvT_S1_>
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 movzbl 0x2e(%eax),%eax
 movzbl %al,%edi
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 movzbl 0x1e(%eax),%eax
 movzbl %al,%esi
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
-lea    -0x86(%ebp),%edx
+lea    -0x82(%ebp),%edx
 add    $0x1a,%edx
 mov    %edx,0x14(%esp)
 mov    %edi,0x10(%esp)
-lea    -0x50(%ebp),%edx
+lea    -0x4c(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction15GetAveragePriceEmhRK14ROI_AverageKeyhPi>
-mov    %eax,-0x38(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x30(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x74(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%eax
-mov    %eax,-0x70(%ebp)
-lea    -0x107(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+lea    -0x103(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32PCK_AUCTION_SEARCH_BY_ITEMKEY_GAC1Ev>
-lea    -0x2144(%ebp),%eax
+lea    -0x2140(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN24PCK_AUCTION_ITEM_LIST_AGC1Ev>
-movw   $0x0,-0xe6(%ebp)
-movb   $0x1,-0xe7(%ebp)
-movl   $0x0,-0xed(%ebp)
-mov    -0x34(%ebp),%eax
+movl   $0x0,-0xe9(%ebp)
+movb   $0x1,-0xe3(%ebp)
+movw   $0x0,-0xe2(%ebp)
+mov    -0x30(%ebp),%eax
 movzbl 0x1e(%eax),%eax
-mov    %al,-0xe9(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %al,-0xe5(%ebp)
+mov    -0x30(%ebp),%eax
 movzbl 0x1e(%eax),%eax
-mov    %al,-0xe8(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %al,-0xe4(%ebp)
+mov    -0x30(%ebp),%eax
 mov    0x1a(%eax),%eax
-mov    %eax,-0xd6(%ebp)
-mov    -0x34(%ebp),%eax
-mov    0x22(%eax),%edx
-mov    %edx,-0xe4(%ebp)
-mov    0x26(%eax),%edx
-mov    %edx,-0xe0(%ebp)
-mov    0x2a(%eax),%eax
-mov    %eax,-0xdc(%ebp)
+mov    %eax,-0xd2(%ebp)
+lea    -0x103(%ebp),%eax
+lea    0x23(%eax),%edx
+mov    -0x30(%ebp),%eax
+add    $0x22,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x103(%ebp),%eax
+add    $0x23,%eax
+lea    0x4(%eax),%edx
+mov    -0x30(%ebp),%eax
+add    $0x22,%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x103(%ebp),%eax
+lea    0x2b(%eax),%edx
+mov    -0x30(%ebp),%eax
+add    $0x2a,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
 call   <T> <_Z9G_Auctionv>
-lea    -0x2144(%ebp),%edx
+lea    -0x2140(%ebp),%edx
 add    $0x21,%edx
 mov    %edx,0x14(%esp)
-lea    -0x2144(%ebp),%edx
+lea    -0x2140(%ebp),%edx
 add    $0x1f,%edx
 mov    %edx,0x10(%esp)
-lea    -0x2144(%ebp),%edx
+lea    -0x2140(%ebp),%edx
 add    $0x1b,%edx
 mov    %edx,0xc(%esp)
-lea    -0x107(%ebp),%edx
+lea    -0x103(%ebp),%edx
 add    $0x31,%edx
 mov    %edx,0x8(%esp)
-lea    -0x107(%ebp),%edx
+lea    -0x103(%ebp),%edx
 add    $0x1a,%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction14SearchByItemIdEP16TSearchByItemId_PmPjPtP15AuctionItemInfo>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x22c>
-mov    -0x30(%ebp),%eax
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x391>
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
+je     <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x254>
+mov    -0x34(%ebp),%eax
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3b9>
 movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x27b>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2a3>
 mov    -0x20(%ebp),%edx
 mov    -0x20(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x18(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
-sub    $0x208c,%eax
+sub    $0x2088,%eax
 mov    0x6(%eax),%eax
 add    $0x4,%edx
-mov    %eax,-0x78(%ebp,%edx,4)
+mov    %eax,-0x74(%ebp,%edx,4)
 mov    -0x20(%ebp),%edx
 mov    -0x20(%ebp),%eax
 imul   $0x89,%eax,%eax
 lea    -0x18(%ebp),%ecx
 lea    (%ecx,%eax,1),%eax
-sub    $0x20ec,%eax
+sub    $0x20e8,%eax
 mov    0x11(%eax),%eax
 add    $0x8,%edx
-mov    %eax,-0x7c(%ebp,%edx,4)
+mov    %eax,-0x78(%ebp,%edx,4)
 addl   $0x1,-0x20(%ebp)
-movzwl -0x2125(%ebp),%eax
+movzwl -0x2121(%ebp),%eax
 movzwl %ax,%eax
 cmp    -0x20(%ebp),%eax
-jle    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x297>
+jle    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2bf>
 cmpl   $0x2,-0x20(%ebp)
-jg     <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x297>
+jg     <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2bf>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x29c>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x2c4>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x235>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x25d>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 mov    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool14getSendMessageEPNS_7TCPUserE>
 mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x28(%ebp)
-lea    -0x86(%ebp),%eax
+lea    -0x82(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x364>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x38c>
 mov    -0x1c(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
-mov    -0x34(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x360>
-mov    -0x34(%ebp),%eax
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x388>
+mov    -0x30(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK ASK_AVERAGE_PRICE_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x36f>
+jmp    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x397>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x4,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x31b>
+jne    <T> <_ZN14HandlerFor_GA_30onAUCTION_ASK_AVERAGE_PRICE_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x343>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_ASK_AVERAGE_PRICE_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x215c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c
/* DECOMPILE FAILED */
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp)（约第 67 行）：

```cpp
unsigned int HandlerFor_GA_::onAUCTION_ASK_AVERAGE_PRICE_GA(nsl::CMsgCell* pCell, nsl::TCPUser* u)
{
    int result = 0;
    PCK_AUCTION_ASK_AVERAGE_PRICE_AG packet;

    G_TraceLog()->sysLog(5, "In  onAUCTION_ASK_AVERAGE_PRICE_GA");
    if (!IsGoldServer())
    {
        G_TraceLog()->sysLog(7, "Out onAUCTION_ASK_AVERAGE_PRICE_GA:this is not gold server");
        return 1;
    }
    PCK_AUCTION_ASK_AVERAGE_PRICE_GA* pPck =
        (PCK_AUCTION_ASK_AVERAGE_PRICE_GA*)pCell->GetPacket();
    ROI_AverageKey _temp_roi_average;
    _temp_roi_average.baseItem_index = pPck->item_id;
    _temp_roi_average.option_category.field_0._high_category_key =
        *(unsigned long long*)&pPck->roi_search_key;
    _temp_roi_average.option_category.field_1._low_category_key =
        *(int*)((char*)&pPck->roi_search_key + 8);
    for (int i = 0; i <= 2; i = i + 1)
    {
        _temp_roi_average._oiv.option_index_value[i] = (short)pPck->randomOption_index[i];
    }
    std::sort(_temp_roi_average._oiv.option_index_value,
              _temp_roi_average._oiv.option_index_value + 3);
    result = G_Auction()->GetAveragePrice(pPck->item_id, pPck->item_upgrade_value,
                                          _temp_roi_average, pPck->item_refine_value,
                                          &packet.average_price);
    packet.char_idx = pPck->char_idx;
    packet.character_id = pPck->character_id;
    PCK_AUCTION_SEARCH_BY_ITEMKEY_GA searchPck;
    PCK_AUCTION_ITEM_LIST_AG listPck;
    searchPck.tSearchByItemId.startIndex = 0;
    searchPck.tSearchByItemId.itemIdNum = 1;
    searchPck.tSearchByItemId.category = 0;
    searchPck.tSearchByItemId.upgradeStart = pPck->item_upgrade_value;
    searchPck.tSearchByItemId.upgradeEnd = pPck->item_upgrade_value;
    searchPck.item_id_array[0] = pPck->item_id;
    *(int*)((char*)&searchPck.tSearchByItemId.ROI_Search_category_key + 0) =
        *(int*)((char*)&pPck->roi_search_key + 0);
    *(int*)((char*)&searchPck.tSearchByItemId.ROI_Search_category_key + 4) =
        *(int*)((char*)&pPck->roi_search_key + 4);
    *(int*)((char*)&searchPck.tSearchByItemId.ROI_Search_category_key + 8) =
        *(int*)((char*)&pPck->roi_search_key + 8);
    result = G_Auction()->SearchByItemId(&searchPck.tSearchByItemId,
                                         searchPck.item_id_array,
                                         &listPck.total_item_num, &listPck.item_num,
                                         listPck.item_info);
    if (result != 0)
    {
        return result;
    }
    for (int i = 0; (i < (int)(unsigned int)listPck.item_num) && (i <= 2); i = i + 1)
    {
        // ORIG: reads unit_price (+0x85) and item_info.add_info (+0x30),
        // NOT average_price/price (DWARF: AuctionItemInfo.unit_price@133,
        // DnfItemInfo.add_info@6; verified in both auction and point ORIG).
        packet.min_pirce[i] = listPck.item_info[i].unit_price;
        packet.min_count[i] = listPck.item_info[i].item_info.add_info;
    }
    // ORIG：getCommonDataPool 结果直喂 getSendMessage（无 pPool 命名局部）
    Message* msg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
    CMsgCell* cell = msg->getCellFromMessage();
    *cell << &packet;
    cell->PAD();
    sendTCP_->PushSendMsg(msg);
    for (int i = 0; i < 5; i = i + 1)
    {
        if (gmList[i] == pPck->character_id)
        {
            G_TraceLog()->sysLog(5, "Trace Auction Delay, %s(%d)",
                                 "ACK ASK_AVERAGE_PRICE_GA", pPck->character_id);
            break;
        }
    }
    G_TraceLog()->sysLog(5, "Out onAUCTION_ASK_AVERAGE_PRICE_GA");
    return 0;
}
```
