# _ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi

`AuctionDictionary::makeSuccessfulBid(unsigned long long, AuctionDictionary::AuctionDictionaryData*, bool, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x8052fd8` | `0x1616` | `0x80580dc` | `0x15d8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,1409 +1,1403 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x81c,%esp
+sub    $0x80c,%esp
 mov    0x18(%ebp),%eax
 mov    0xc(%ebp),%edx
-mov    %edx,-0x7b0(%ebp)
+mov    %edx,-0x7a0(%ebp)
 mov    0x10(%ebp),%edx
-mov    %edx,-0x7ac(%ebp)
-mov    %al,-0x7b4(%ebp)
-movl   $0x0,-0x88(%ebp)
+mov    %edx,-0x79c(%ebp)
+mov    %al,-0x7a4(%ebp)
 movl   $0x0,-0x84(%ebp)
-movzbl -0x7b4(%ebp),%eax
+movl   $0x0,-0x80(%ebp)
+movzbl -0x7a4(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9d>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9a>
 mov    0x14(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9d>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9a>
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
 mov    0x14(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
-mov    %eax,-0x88(%ebp)
-cmpl   $0x0,-0x88(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9d>
-mov    -0x88(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x160b>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
+mov    %eax,-0x84(%ebp)
+cmpl   $0x0,-0x84(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9a>
+mov    -0x84(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15cd>
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
 mov    0x14(%ebp),%ecx
 mov    0x8(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3114,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
-mov    %eax,-0x88(%ebp)
-cmpl   $0x0,-0x88(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x12e>
-movzbl -0x7b4(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+cmpl   $0x0,-0x84(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x12d>
+movzbl -0x7a4(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x123>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15c7>
 mov    0x14(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x123>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15c7>
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
 mov    0x14(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12AddAuctionIdEiy>
-mov    -0x88(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x160b>
-lea    -0xa5(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15c7>
+lea    -0xa1(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25tagAUCTION_DB_DELETE_ITEMC1Ev>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
-mov    %eax,-0x90(%ebp)
-mov    %edx,-0x8c(%ebp)
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
+mov    %eax,-0x8c(%ebp)
+mov    %edx,-0x88(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
-mov    %eax,-0x74(%ebp)
-mov    -0x74(%ebp),%eax
+mov    %eax,-0x70(%ebp)
+mov    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x70(%ebp)
-lea    -0xa5(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x70(%ebp),%eax
+mov    %eax,-0x6c(%ebp)
+lea    -0xa1(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x74(%ebp),%edx
+mov    -0x70(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-movl   $0x0,-0x80(%ebp)
+movl   $0x0,-0x7c(%ebp)
 mov    0x14(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xe8f>
-cmpb   $0x0,-0x7b4(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1f5>
-mov    0x14(%ebp),%eax
-mov    0x4(%eax),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1fa>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xe4d>
+cmpb   $0x0,-0x7a4(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1f4>
+mov    0x14(%ebp),%eax
+mov    0x4(%eax),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1f9>
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x6c(%ebp)
+mov    %eax,-0x68(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x8(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18IsPrivateStoreOpenEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x2c6>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x2c5>
 mov    0x14(%ebp),%eax
 movzbl 0x49(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x277>
-fildl  -0x6c(%ebp)
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x276>
+fildl  -0x68(%ebp)
 fldl   &data#69d7849f(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x7e0(%ebp)
+fstpl  -0x7d0(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16GetVIPCommissionEv>
-fmull  -0x7e0(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+fmull  -0x7d0(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x631>
-fildl  -0x6c(%ebp)
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fildl  -0x68(%ebp)
 fldl   &data#69d7849f(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x7d8(%ebp)
+fstpl  -0x7c8(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13GetCommissionEv>
-fmull  -0x7d8(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+fmull  -0x7c8(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x631>
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x590>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x560>
 fldl   &data#f86f0aa7(.rodata)
-fstpl  -0x60(%ebp)
+fstpl  -0x50(%ebp)
 fldl   &data#8f688ce4(.rodata)
-fstpl  -0x58(%ebp)
-movl   $0x0,-0xc4(%ebp)
-lea    -0xdc(%ebp),%eax
+fstpl  -0x48(%ebp)
+movl   $0x0,-0xc0(%ebp)
+lea    -0xd8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
-movb   $0x0,-0x49(%ebp)
-movzbl -0x49(%ebp),%eax
+movb   $0x0,-0x39(%ebp)
+movzbl -0x39(%ebp),%eax
 movzbl %al,%esi
 mov    0x14(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15GetUpgradeValueEv>
 movzbl %al,%ebx
 mov    0x14(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
-lea    -0xc4(%ebp),%edx
+lea    -0xc0(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %esi,0x10(%esp)
-lea    -0xdc(%ebp),%edx
+lea    -0xd8(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary15GetAveragePriceEmhRK14ROI_AverageKeyhPi>
-mov    -0xc4(%ebp),%eax
+mov    -0xc0(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x3cf>
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x3e0>
 mov    0x14(%ebp),%eax
 movzbl 0x49(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x3a2>
-fldl   -0x58(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x3a7>
+fldl   -0x48(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fldl   -0x60(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7ac(%ebp)
+fldcw  -0x7a6(%ebp)
+mov    -0x7ac(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x3d8>
+fldl   -0x50(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fildl  -0x6c(%ebp)
-mov    -0xc4(%ebp),%eax
-mov    %eax,-0x7bc(%ebp)
-fildl  -0x7bc(%ebp)
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7ac(%ebp)
+fldcw  -0x7a6(%ebp)
+mov    -0x7ac(%ebp),%eax
+mov    %eax,-0x7c(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fildl  -0x68(%ebp)
+mov    -0xc0(%ebp),%eax
+mov    %eax,-0x7ac(%ebp)
+fildl  -0x7ac(%ebp)
 fdivrp %st,%st(1)
-fstpl  -0x48(%ebp)
-fldl   -0x48(%ebp)
+fstpl  -0x38(%ebp)
+fldl   -0x38(%ebp)
 fldl   &data#dd58a0f3(.rodata)
 fucompp
 fnstsw %ax
 test   $0x45,%ah
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x465>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x476>
 mov    0x14(%ebp),%eax
 movzbl 0x49(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x438>
-fldl   -0x58(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x449>
+fldl   -0x48(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fldl   -0x60(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fldl   -0x50(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fldl   -0x48(%ebp)
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fldl   -0x38(%ebp)
 fldl   &data#dd58a0f3(.rodata)
 fxch   %st(1)
 fucompp
 fnstsw %ax
 sahf
 setae  %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x4b5>
-fldl   -0x48(%ebp)
-fldl   "슇솛솛�?333333�?蠱儆儆�?"
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fldl   -0x38(%ebp)
+fldl   "슇솛솛�?333333�?蠱儆儆�?蠱儆儆�?"
 fucompp
 fnstsw %ax
 test   $0x45,%ah
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x4b5>
-movl   $0x32,-0x80(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fldl   -0x48(%ebp)
-fldl   "슇솛솛�?333333�?蠱儆儆�?"
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x4b1>
+movl   $0x32,-0x7c(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x526>
+fldl   -0x38(%ebp)
+fldl   "슇솛솛�?333333�?蠱儆儆�?蠱儆儆�?"
 fxch   %st(1)
 fucompp
 fnstsw %ax
 sahf
 setae  %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x502>
-fldl   -0x48(%ebp)
-fldl   "333333�?蠱儆儆�?"
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x4e8>
+fldl   -0x38(%ebp)
+fldl   "333333�?蠱儆儆�?蠱儆儆�?"
 fucompp
 fnstsw %ax
 test   $0x45,%ah
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x502>
-movl   $0x32,-0x80(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-fldl   -0x48(%ebp)
-fldl   "333333�?蠱儆儆�?"
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x4e8>
+movl   $0x32,-0x7c(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x526>
+fldl   -0x38(%ebp)
+fldl   "333333�?蠱儆儆�?蠱儆儆�?"
 fxch   %st(1)
 fucompp
 fnstsw %ax
 sahf
 setae  %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x54f>
-fldl   -0x48(%ebp)
-fldl   "蠱儆儆�?"
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x51f>
+fldl   -0x38(%ebp)
+fldl   "蠱儆儆�?蠱儆儆�?"
 fucompp
 fnstsw %ax
 test   $0x45,%ah
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x54f>
-movl   $0x32,-0x80(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x56c>
-movl   $0x50,-0x80(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
-mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fildl  -0x6c(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x51f>
+movl   $0x32,-0x7c(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x526>
+movl   $0x50,-0x7c(%ebp)
+fildl  -0x68(%ebp)
 fldl   &data#69d7849f(.rodata)
 fdivrp %st,%st(1)
-fildl  -0x80(%ebp)
+fildl  -0x7c(%ebp)
 fmulp  %st,%st(1)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x631>
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
+mov    $0xc,%ah
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
 mov    0x14(%ebp),%eax
 movzbl 0x49(%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x5e7>
-fildl  -0x6c(%ebp)
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x5b7>
+fildl  -0x68(%ebp)
 fldl   &data#69d7849f(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x7d0(%ebp)
+fstpl  -0x7c0(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16GetVIPCommissionEv>
-fmull  -0x7d0(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+fmull  -0x7c0(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x631>
-fildl  -0x6c(%ebp)
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x601>
+fildl  -0x68(%ebp)
 fldl   &data#69d7849f(.rodata)
 fdivrp %st,%st(1)
-fstpl  -0x7c8(%ebp)
+fstpl  -0x7b8(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13GetCommissionEv>
-fmull  -0x7c8(%ebp)
-fnstcw -0x7b6(%ebp)
-movzwl -0x7b6(%ebp),%eax
+fmull  -0x7b8(%ebp)
+fnstcw -0x7a6(%ebp)
+movzwl -0x7a6(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x7b8(%ebp)
-fldcw  -0x7b8(%ebp)
-fistpl -0x80(%ebp)
-fldcw  -0x7b6(%ebp)
-movl   $0x0,-0x68(%ebp)
+mov    %ax,-0x7a8(%ebp)
+fldcw  -0x7a8(%ebp)
+fistpl -0x7c(%ebp)
+fldcw  -0x7a6(%ebp)
+movl   $0x0,-0x64(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x660>
-mov    -0x80(%ebp),%eax
-mov    -0x6c(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x630>
+mov    -0x7c(%ebp),%eax
+mov    -0x68(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x68(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x674>
-mov    -0x80(%ebp),%eax
-mov    -0x6c(%ebp),%edx
+mov    %eax,-0x64(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x644>
+mov    -0x7c(%ebp),%eax
+mov    -0x68(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 add    $0x2710,%eax
-mov    %eax,-0x68(%ebp)
+mov    %eax,-0x64(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x6a3>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x673>
 mov    0x14(%ebp),%eax
 lea    0x14(%eax),%edx
 movl   $0x7f,0x8(%esp)
-lea    -0x15c(%ebp),%eax
+lea    -0x158(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci>
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33tagGAME_DB_SEND_PACKAGE_BY_EXPIREC1Ev>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
-mov    %eax,-0x48f(%ebp)
-mov    %edx,-0x48b(%ebp)
-cmpb   $0x0,-0x7b4(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x6d9>
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
+mov    %eax,-0x48b(%ebp)
+mov    %edx,-0x487(%ebp)
+cmpb   $0x0,-0x7a4(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x6a9>
 mov    $0x1,%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x6de>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x6ae>
 mov    $0x0,%eax
-mov    %al,-0x4a6(%ebp)
-movb   $0x1,-0x4a5(%ebp)
+mov    %al,-0x4a2(%ebp)
+movb   $0x1,-0x4a1(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x323(%ebp)
+mov    %eax,-0x31f(%ebp)
 mov    0x14(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x31f(%ebp)
-movl   $0x0,-0x31b(%ebp)
+mov    %eax,-0x31b(%ebp)
+movl   $0x0,-0x317(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x14(%eax),%edx
-mov    %edx,-0x317(%ebp)
+mov    %edx,-0x313(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0x313(%ebp)
+mov    %edx,-0x30f(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0x30f(%ebp)
+mov    %edx,-0x30b(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0x30b(%ebp)
+mov    %edx,-0x307(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0x307(%ebp)
+mov    %edx,-0x303(%ebp)
 mov    0x28(%eax),%edx
-mov    %edx,-0x303(%ebp)
+mov    %edx,-0x2ff(%ebp)
 mov    0x2c(%eax),%edx
-mov    %edx,-0x2ff(%ebp)
+mov    %edx,-0x2fb(%ebp)
 mov    0x30(%eax),%edx
-mov    %edx,-0x2fb(%ebp)
+mov    %edx,-0x2f7(%ebp)
 mov    0x34(%eax),%edx
-mov    %edx,-0x2f7(%ebp)
+mov    %edx,-0x2f3(%ebp)
 mov    0x38(%eax),%edx
-mov    %edx,-0x2f3(%ebp)
+mov    %edx,-0x2ef(%ebp)
 mov    0x3c(%eax),%edx
-mov    %edx,-0x2ef(%ebp)
+mov    %edx,-0x2eb(%ebp)
 mov    0x40(%eax),%edx
-mov    %edx,-0x2eb(%ebp)
+mov    %edx,-0x2e7(%ebp)
 mov    0x44(%eax),%edx
-mov    %edx,-0x2e7(%ebp)
+mov    %edx,-0x2e3(%ebp)
 movzbl 0x48(%eax),%eax
-mov    %al,-0x2e3(%ebp)
+mov    %al,-0x2df(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x3c(%ebp)
+mov    %eax,-0x60(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x85a>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x82a>
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x801>
-mov    -0x311(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x7d1>
+mov    -0x30d(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x806>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x7d6>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x316(%ebp),%edx
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x1fe,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x8fa>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x8ca>
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x88f>
-mov    -0x311(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x85f>
+mov    -0x30d(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x894>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x864>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x8ab>
-lea    -0x15c(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x8ce>
-mov    -0x316(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x87b>
+lea    -0x158(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x89e>
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x1fe,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-mov    -0x316(%ebp),%eax
-mov    %eax,-0x1e0(%ebp)
-lea    -0x4bb(%ebp),%eax
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%eax
+mov    %eax,-0x1dc(%ebp)
+lea    -0x4b7(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x2e2(%ebp)
-mov    0x14(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x487(%ebp)
+mov    %ax,-0x2de(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x483(%ebp)
-mov    -0x68(%ebp),%eax
+mov    0x14(%ebp),%eax
+mov    0x8(%eax),%eax
 mov    %eax,-0x47f(%ebp)
-movb   $0x0,-0x47b(%ebp)
-movl   $0x0,-0x47a(%ebp)
+mov    -0x64(%ebp),%eax
+mov    %eax,-0x47b(%ebp)
+movb   $0x0,-0x477(%ebp)
+movl   $0x0,-0x476(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x973>
-movl   $0x0,-0x47f(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x943>
+movl   $0x0,-0x47b(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x99f>
-mov    -0x68(%ebp),%eax
-mov    %eax,-0x47f(%ebp)
-movl   $0x28eba2,-0x47a(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9a9>
-movl   $0x0,-0x47a(%ebp)
-movb   $0x0,-0x476(%ebp)
-movl   $0x0,-0x475(%ebp)
-movw   $0x0,-0x471(%ebp)
-movl   $0x0,-0x46f(%ebp)
-movb   $0x0,-0x46b(%ebp)
-movw   $0x0,-0x46a(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x96f>
+mov    -0x64(%ebp),%eax
+mov    %eax,-0x47b(%ebp)
+movl   $0x28eba2,-0x476(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x979>
+movl   $0x0,-0x476(%ebp)
+movb   $0x0,-0x472(%ebp)
+movl   $0x0,-0x471(%ebp)
+movw   $0x0,-0x46d(%ebp)
+movl   $0x0,-0x46b(%ebp)
+movb   $0x0,-0x467(%ebp)
+movw   $0x0,-0x466(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb08>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xad8>
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa2d>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x9fd>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%esi
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa32>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa02>
 mov    $&LETTER_TEXT+0x6f9,%esi
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,%edi
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa8c>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa5c>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa91>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xa61>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x7f8,%edx
-mov    -0x68(%ebp),%ecx
+mov    -0x64(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    %esi,0x20(%esp)
 mov    %edi,0x1c(%esp)
-mov    -0x80(%ebp),%ecx
+mov    -0x7c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
-mov    -0x6c(%ebp),%ecx
+mov    -0x68(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
 mov    0x1c(%ebp),%eax
-mov    -0x68(%ebp),%edx
+mov    -0x64(%ebp),%edx
 mov    %edx,(%eax)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xc41>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xc11>
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb3d>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb0d>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%edi
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb42>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb12>
 mov    $&LETTER_TEXT+0x6f9,%edi
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb59>
-lea    -0x15c(%ebp),%esi
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb7e>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb29>
+lea    -0x158(%ebp),%esi
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb4e>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,%esi
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x3c(%ebp),%edx
+mov    -0x60(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xbb3>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb83>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xbb8>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb88>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xbcf>
-lea    -0x15c(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xbf2>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xb9f>
+lea    -0x158(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xbc2>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0xff,%edx
-mov    -0x68(%ebp),%ecx
+mov    -0x64(%ebp),%ecx
 mov    %ecx,0x28(%esp)
 mov    %edi,0x24(%esp)
 mov    %esi,0x20(%esp)
-mov    -0x80(%ebp),%ecx
+mov    -0x7c(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
 movl   $0x2710,0x18(%esp)
-mov    -0x6c(%ebp),%ecx
+mov    -0x68(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x4bb(%ebp),%eax
+lea    -0x4b7(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x446(%ebp)
+mov    %ax,-0x442(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%eax
-mov    %eax,-0x344(%ebp)
+mov    %eax,-0x340(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x5c(%ebp)
+mov    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x34(%ebp)
-lea    -0x4bb(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x58(%ebp)
+lea    -0x4b7(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x38(%ebp),%edx
+mov    -0x5c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-cmpb   $0x0,-0x7b4(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xcf0>
-mov    0x14(%ebp),%eax
-mov    0x4(%eax),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xcf5>
+cmpb   $0x0,-0x7a4(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xcc0>
+mov    0x14(%ebp),%eax
+mov    0x4(%eax),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xcc5>
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x84(%ebp)
+mov    %eax,-0x80(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x64(%ebp)
-mov    -0x64(%ebp),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x54(%ebp),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction19IsStackableCategoryEt>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd79>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd3a>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd66>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd2d>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%eax
-mov    %eax,-0x7ec(%ebp)
-mov    -0x84(%ebp),%eax
+mov    %eax,-0x7dc(%ebp)
+mov    -0x80(%ebp),%eax
 mov    %eax,%edx
 sar    $0x1f,%edx
-idivl  -0x7ec(%ebp)
-mov    %eax,-0x84(%ebp)
-cmpl   $0x0,-0x84(%ebp)
-jg     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd79>
-movl   $0x1,-0x84(%ebp)
-lea    -0xc0(%ebp),%eax
+idivl  -0x7dc(%ebp)
+mov    %eax,-0x80(%ebp)
+cmpl   $0x0,-0x80(%ebp)
+jg     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd3a>
+movl   $0x1,-0x80(%ebp)
+lea    -0xbc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
 mov    0x14(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
-mov    %eax,-0xc0(%ebp)
+mov    %eax,-0xbc(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x54(%eax),%edx
-mov    %edx,-0xbc(%ebp)
+mov    %edx,-0xb8(%ebp)
 mov    0x58(%eax),%edx
-mov    %edx,-0xb8(%ebp)
+mov    %edx,-0xb4(%ebp)
 mov    0x5c(%eax),%eax
-mov    %eax,-0xb4(%ebp)
-movl   $0x0,-0x30(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xded>
-mov    -0x30(%ebp),%ecx
-mov    -0x30(%ebp),%edx
+mov    %eax,-0xb0(%ebp)
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xdae>
+mov    -0x2c(%ebp),%ecx
+mov    -0x2c(%ebp),%edx
 mov    0x14(%ebp),%ebx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 lea    (%ebx,%eax,1),%eax
 add    $0x20,%eax
 movzbl 0x11(%eax),%eax
 movzbl %al,%eax
 lea    0x8(%ecx),%edx
-mov    %ax,-0xc0(%ebp,%edx,2)
-addl   $0x1,-0x30(%ebp)
-cmpl   $0x2,-0x30(%ebp)
+mov    %ax,-0xbc(%ebp,%edx,2)
+addl   $0x1,-0x2c(%ebp)
+cmpl   $0x2,-0x2c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xdc2>
-lea    -0xc0(%ebp),%eax
+jne    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xd83>
+lea    -0xbc(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,0x4(%esp)
-lea    -0xc0(%ebp),%eax
+lea    -0xbc(%ebp),%eax
 add    $0x10,%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIPsEvT_S1_>
 mov    0x14(%ebp),%eax
 add    $0x3f,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 movzbl %al,%esi
 mov    0x14(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15GetUpgradeValueEv>
 movzbl %al,%ebx
 mov    0x14(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
 mov    0x8(%ebp),%edx
 mov    0x4(%edx),%edx
 movl   $0x0,0x1c(%esp)
 mov    %esi,0x18(%esp)
-lea    -0xc0(%ebp),%ecx
+lea    -0xbc(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 movl   $0x0,0x10(%esp)
-mov    -0x84(%ebp),%ecx
+mov    -0x80(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN7Auction19AddItemAveragePriceEmhijRK14ROI_AverageKeyhb>
-mov    %eax,-0x88(%ebp)
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1211>
+mov    %eax,-0x84(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x11cf>
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xebe>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xe7c>
 mov    0x14(%ebp),%eax
 lea    0x14(%eax),%edx
 movl   $0x7f,0x8(%esp)
-lea    -0x15c(%ebp),%eax
+lea    -0x158(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci>
-lea    -0x79a(%ebp),%eax
+lea    -0x796(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33tagGAME_DB_SEND_PACKAGE_BY_EXPIREC1Ev>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
-mov    %eax,-0x76e(%ebp)
-mov    %edx,-0x76a(%ebp)
-movb   $0x0,-0x785(%ebp)
-movb   $0x0,-0x784(%ebp)
-mov    0x14(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x766(%ebp)
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
+mov    %eax,-0x76a(%ebp)
+mov    %edx,-0x766(%ebp)
+movb   $0x0,-0x781(%ebp)
+movb   $0x0,-0x780(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x762(%ebp)
-movl   $0x2710,-0x75e(%ebp)
+mov    0x14(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x75e(%ebp)
+movl   $0x2710,-0x75a(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x14(%eax),%edx
-mov    %edx,-0x75a(%ebp)
+mov    %edx,-0x756(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0x756(%ebp)
+mov    %edx,-0x752(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0x752(%ebp)
+mov    %edx,-0x74e(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0x74e(%ebp)
+mov    %edx,-0x74a(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0x74a(%ebp)
+mov    %edx,-0x746(%ebp)
 mov    0x28(%eax),%edx
-mov    %edx,-0x746(%ebp)
+mov    %edx,-0x742(%ebp)
 mov    0x2c(%eax),%edx
-mov    %edx,-0x742(%ebp)
+mov    %edx,-0x73e(%ebp)
 mov    0x30(%eax),%edx
-mov    %edx,-0x73e(%ebp)
+mov    %edx,-0x73a(%ebp)
 mov    0x34(%eax),%edx
-mov    %edx,-0x73a(%ebp)
+mov    %edx,-0x736(%ebp)
 mov    0x38(%eax),%edx
-mov    %edx,-0x736(%ebp)
+mov    %edx,-0x732(%ebp)
 mov    0x3c(%eax),%edx
-mov    %edx,-0x732(%ebp)
+mov    %edx,-0x72e(%ebp)
 mov    0x40(%eax),%edx
-mov    %edx,-0x72e(%ebp)
+mov    %edx,-0x72a(%ebp)
 mov    0x44(%eax),%edx
-mov    %edx,-0x72a(%ebp)
+mov    %edx,-0x726(%ebp)
 movzbl 0x48(%eax),%eax
-mov    %al,-0x726(%ebp)
+mov    %al,-0x722(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x28(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x105f>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x2c(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x101d>
+mov    -0x28(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1008>
-mov    -0x5f0(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xfc6>
+mov    -0x5ec(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x100d>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0xfcb>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x759(%ebp),%edx
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x2fd,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x79a(%ebp),%eax
+lea    -0x796(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x10fd>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x2c(%ebp),%edx
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x10bb>
+mov    -0x28(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1094>
-mov    -0x5f0(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1052>
+mov    -0x5ec(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1099>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1057>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    0x14(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x10b0>
-lea    -0x15c(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x10d3>
-mov    -0x759(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x106e>
+lea    -0x158(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1091>
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x2fd,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x79a(%ebp),%eax
+lea    -0x796(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-mov    -0x759(%ebp),%eax
-mov    %eax,-0x623(%ebp)
-lea    -0x79a(%ebp),%eax
+mov    0x14(%ebp),%eax
+mov    0x15(%eax),%eax
+mov    %eax,-0x61f(%ebp)
+lea    -0x796(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x725(%ebp)
+mov    %ax,-0x721(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x115c>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x111a>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%eax
 cmp    $0x28d287,%eax
-jbe    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x115c>
+jbe    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x111a>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%eax
 cmp    $0x28d293,%eax
-ja     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x115c>
-movl   $0x0,-0x75e(%ebp)
+ja     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x111a>
+movl   $0x0,-0x75a(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1197>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1155>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%eax
 cmp    $0x28d287,%eax
-jbe    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1197>
+jbe    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1155>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%eax
 cmp    $0x28d299,%eax
-ja     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1197>
-movl   $0x0,-0x75e(%ebp)
+ja     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1155>
+movl   $0x0,-0x75a(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x24(%ebp)
-lea    -0x79a(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+lea    -0x796(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x28(%ebp),%edx
+mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-lea    -0x1dc(%ebp),%eax
+lea    -0x1d8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28tagAUCTION_DB_EXPIRE_HISTORYC1Ev>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
-mov    %eax,-0x1c7(%ebp)
-mov    %edx,-0x1c3(%ebp)
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
+mov    %eax,-0x1c3(%ebp)
+mov    %edx,-0x1bf(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x1bf(%ebp)
-cmpb   $0x0,-0x7b4(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1253>
+mov    %eax,-0x1bb(%ebp)
+cmpb   $0x0,-0x7a4(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1211>
 mov    $0x1,%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1258>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1216>
 mov    $0x0,%eax
-mov    %al,-0x1bb(%ebp)
+mov    %al,-0x1b7(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x1ba(%ebp)
+mov    %eax,-0x1b6(%ebp)
 mov    0x14(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x1b6(%ebp)
-cmpb   $0x0,-0x7b4(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1287>
-mov    0x14(%ebp),%eax
-mov    0x4(%eax),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x128c>
+mov    %eax,-0x1b2(%ebp)
+cmpb   $0x0,-0x7a4(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1245>
+mov    0x14(%ebp),%eax
+mov    0x4(%eax),%eax
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x124a>
 mov    0x14(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x1b2(%ebp)
+mov    %eax,-0x1ae(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x14(%eax),%edx
-mov    %edx,-0x1ae(%ebp)
+mov    %edx,-0x1aa(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0x1aa(%ebp)
+mov    %edx,-0x1a6(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0x1a6(%ebp)
+mov    %edx,-0x1a2(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0x1a2(%ebp)
+mov    %edx,-0x19e(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0x19e(%ebp)
+mov    %edx,-0x19a(%ebp)
 mov    0x28(%eax),%edx
-mov    %edx,-0x19a(%ebp)
+mov    %edx,-0x196(%ebp)
 mov    0x2c(%eax),%edx
-mov    %edx,-0x196(%ebp)
+mov    %edx,-0x192(%ebp)
 mov    0x30(%eax),%edx
-mov    %edx,-0x192(%ebp)
+mov    %edx,-0x18e(%ebp)
 mov    0x34(%eax),%edx
-mov    %edx,-0x18e(%ebp)
+mov    %edx,-0x18a(%ebp)
 mov    0x38(%eax),%edx
-mov    %edx,-0x18a(%ebp)
+mov    %edx,-0x186(%ebp)
 mov    0x3c(%eax),%edx
-mov    %edx,-0x186(%ebp)
+mov    %edx,-0x182(%ebp)
 mov    0x40(%eax),%edx
-mov    %edx,-0x182(%ebp)
+mov    %edx,-0x17e(%ebp)
 mov    0x44(%eax),%edx
-mov    %edx,-0x17e(%ebp)
+mov    %edx,-0x17a(%ebp)
 movzbl 0x48(%eax),%eax
-mov    %al,-0x17a(%ebp)
+mov    %al,-0x176(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x50(%eax),%eax
-mov    %eax,-0x171(%ebp)
+mov    %eax,-0x16d(%ebp)
 mov    0x14(%ebp),%eax
 mov    0x54(%eax),%edx
-mov    %edx,-0x16d(%ebp)
+mov    %edx,-0x169(%ebp)
 mov    0x58(%eax),%edx
-mov    %edx,-0x169(%ebp)
+mov    %edx,-0x165(%ebp)
 mov    0x5c(%eax),%eax
-mov    %eax,-0x165(%ebp)
+mov    %eax,-0x161(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x136b>
-mov    -0x80(%ebp),%eax
-mov    %eax,-0x161(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1329>
+mov    -0x7c(%ebp),%eax
+mov    %eax,-0x15d(%ebp)
 mov    0x14(%ebp),%eax
 movzbl 0x49(%eax),%eax
-mov    %al,-0x15d(%ebp)
-movl   $0x0,-0x179(%ebp)
+mov    %al,-0x159(%ebp)
 movl   $0x0,-0x175(%ebp)
+movl   $0x0,-0x171(%ebp)
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
 movl   $0x3,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x78(%ebp)
+mov    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x1c(%ebp)
-lea    -0x1dc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x74(%ebp)
+lea    -0x1d8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x74(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x20(%ebp),%edx
+mov    -0x78(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-mov    -0x7b0(%ebp),%eax
-mov    -0x7ac(%ebp),%edx
+mov    -0x7a0(%ebp),%eax
+mov    -0x79c(%ebp),%edx
 mov    0x8(%ebp),%ecx
 mov    0x4(%ecx),%ecx
 add    $0x51d8,%ecx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN6Search6DeleteEy>
-mov    %eax,-0x88(%ebp)
-mov    -0x7b0(%ebp),%ebx
-mov    -0x7ac(%ebp),%esi
-mov    -0x88(%ebp),%eax
+mov    %eax,-0x84(%ebp)
+mov    -0x7a0(%ebp),%ebx
+mov    -0x79c(%ebp),%esi
+mov    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%edi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 mov    %esi,0x14(%esp)
 mov    %edi,0xc(%esp)
 movl   $"Delete at Search module result:%s, auction_id:%llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-cmpl   $0x0,-0x88(%ebp)
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x14b1>
-mov    -0x88(%ebp),%eax
+cmpl   $0x0,-0x84(%ebp)
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1469>
+mov    -0x84(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
 mov    %eax,%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"Error occured while delete auction info from search module, %s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x88(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x160b>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15c7>
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
-lea    -0x7b0(%ebp),%eax
+lea    -0x7a0(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE5eraseERS6_>
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x14dc>
-mov    $0xb,%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x160b>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1499>
+movl   $0xb,-0x84(%ebp)
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15c7>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edi
-mov    -0x7b0(%ebp),%ebx
-mov    -0x7ac(%ebp),%esi
+mov    -0x7a0(%ebp),%ebx
+mov    -0x79c(%ebp),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %edi,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"makeSuccessfulBid, Auction ID : %llu, Item ID : %hu is deleted.",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13CheckItemTypeEm>
-mov    %eax,-0x7c(%ebp)
-mov    -0x7c(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1544>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1501>
 cmp    $0x3,%eax
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1566>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1523>
 cmp    $0x1,%eax
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1586>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1543>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction31UnregistChkMapForAvatarCreatureEbi>
-jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1586>
+jmp    <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x1543>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction31UnregistChkMapForAvatarCreatureEbi>
 mov    0x14(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
-movzwl %ax,%eax
-mov    %eax,-0x78(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x78(%ebp),%edx
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15f1>
+je     <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi+0x15a8>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19SubAvatarEmblemInfoEi>
 mov    0x14(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22SubAvatarExpansionInfoEi>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolIN17AuctionDictionary21AuctionDictionaryDataEiiiE4freeEPS2_>
-mov    $0x0,%eax
-add    $0x81c,%esp
+movl   $0x0,-0x84(%ebp)
+mov    -0x84(%ebp),%eax
+add    $0x80c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: int makeSuccessfulBid(AuctionDictionary * this, __int64 auctionId,
   AuctionDictionaryData * pAucDicData, bool isInstantBuying, int * charge_point) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi
          (AuctionDictionary *this,__int64 auctionId,AuctionDictionaryData *pAucDicData,
          bool isInstantBuying,int *charge_point)

{
  double dVar1;
  bool bVar2;
  uchar uVar3;
  uchar itemUpgradeValue;
  CommonDataPool *pCVar4;
  NSLDBThread *pNVar5;
  Auction *pAVar6;
  PAY_TYPE PVar7;
  STItemInfo *pSVar8;
  char (*pacVar9) [255];
  undefined4 uVar10;
  size_t sVar11;
  char (*pacVar12) [255];
  undefined4 uVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  TraceLog *pTVar17;
  size_t sVar18;
  int in_GS_OFFSET;
  double dVar19;
  __int64 _Var20;
  undefined8 local_7b4;
  tagGAME_DB_SEND_PACKAGE_BY_EXPIRE local_79e;
  tagGAME_DB_SEND_PACKAGE_BY_EXPIRE local_4bf;
  tagAUCTION_DB_EXPIRE_HISTORY local_1e0;
  char local_160 [128];
  ROI_AverageKey local_e0;
  int local_c8;
  ROI_AverageKey local_c4;
  tagAUCTION_DB_DELETE_ITEM local_a9;
  DWORD local_8c;
  int local_88;
  int local_84;
  EnumAuctionItemType local_80;
  uint local_7c;
  Message *local_78;
  CMsgCell *local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  double local_64;
  double local_5c;
  undefined1 local_4d;
  double local_4c;
  uint local_40;
  Message *local_3c;
  CMsgCell *local_38;
  int local_34;
  uint local_30;
  Message *local_2c;
  CMsgCell *local_28;
  Message *local_24;
  CMsgCell *local_20;
  
                    /* Unresolved local var: int error_code@[???]
                       Unresolved local var: int price@[???]
                       Unresolved local var: int commission@[???]
                       Unresolved local var: EnumAuctionItemType item_type@[???]
                       Unresolved local var: int item_category@[???] */
  local_8c = 0;
  local_88 = 0;
  if ((!isInstantBuying) && (pAucDicData->buyer_id != -1)) {
    local_7b4 = auctionId;
    local_8c = CharacterDictionary::SubAuctionId(&this->mBidderDic,pAucDicData->buyer_id,auctionId);
    auctionId = local_7b4;
    if (local_8c != 0) {
      return local_8c;
    }
  }
  local_7b4 = auctionId;
  local_8c = CharacterDictionary::SubAuctionId(&this->mRegisterDic,pAucDicData->owner_id,auctionId);
  if (local_8c == 0) {
                    /* Unresolved local var: DBTR_AUCTION_DB_DELETE_ITEM dbtr_delete_item@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
    tagAUCTION_DB_DELETE_ITEM::tagAUCTION_DB_DELETE_ITEM(&local_a9);
    local_a9.auction_id = local_7b4;
    pCVar4 = nsl::DataPools::getCommonDataPool
                       (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_78 = nsl::CommonDataPool::createMessage(pCVar4,3);
    local_74 = nsl::Message::getCellFromMessage(local_78);
    nsl::CMsgCell::operator<<(local_74,&local_a9.super_DBTR_HEADER);
    pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    nsl::NSLDBThread::PushTransaction(pNVar5,local_78);
    local_84 = 0;
    if (pAucDicData->buyer_id == -1) {
                    /* Unresolved local var: char[128] _itemName@[???] */
      if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 != 0 ||
          *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) != 0) {
        GetRandomOptionName(&pAucDicData->item_info,local_160,0x7f);
      }
                    /* Unresolved local var: DBTR_GAME_DB_SEND_PACKAGE_BY_EXPIRE
                       dbtr_expire_package@[???]
                       Unresolved local var: int item_category@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
      tagGAME_DB_SEND_PACKAGE_BY_EXPIRE::tagGAME_DB_SEND_PACKAGE_BY_EXPIRE(&local_79e);
      local_79e.package_type = '\0';
      local_79e.b_exist_buyer = false;
      local_79e.send_to_owner.owner_id = pAucDicData->owner_id;
      local_79e.send_to_owner.receiver = pAucDicData->owner_id;
      local_79e.send_to_owner.money = 10000;
      local_79e.send_to_owner.item_info._0_4_ = *(undefined4 *)&pAucDicData->item_info;
      local_79e.send_to_owner.item_info._4_4_ =
           *(undefined4 *)((int)&(pAucDicData->item_info).item_id + 3);
      local_79e.send_to_owner.item_info._8_4_ =
           *(undefined4 *)((int)&(pAucDicData->item_info).add_info + 2);
      local_79e.send_to_owner.item_info.extendInfo = (pAucDicData->item_info).extendInfo;
      local_79e.send_to_owner.item_info.abilityType_ = (pAucDicData->item_info).abilityType_;
      local_79e.send_to_owner.item_info.abilityValue_ = (pAucDicData->item_info).abilityValue_;
      local_79e.send_to_owner.item_info.guid_.data_[0] = (pAucDicData->item_info).guid_.data_[0];
      local_79e.send_to_owner.item_info.guid_.data_._1_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 1);
      local_79e.send_to_owner.item_info.guid_.data_._5_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 5);
      local_79e.send_to_owner.item_info._28_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 9);
      local_79e.send_to_owner.item_info.random_option_.option_._3_4_ =
           *(undefined4 *)((pAucDicData->item_info).random_option_.option_ + 1);
      local_79e.send_to_owner.item_info.random_option_._7_4_ =
           *(undefined4 *)&(pAucDicData->item_info).random_option_.option_[2].first_value_;
      local_79e.send_to_owner.item_info._40_4_ =
           *(undefined4 *)&(pAucDicData->item_info).random_option_.modify_option_.first_value_;
      local_79e.send_to_owner.item_info.reserved_capacity.reserved_1[0] =
           (pAucDicData->item_info).reserved_capacity.reserved_1[0];
      local_79e.send_to_owner.item_info.reserved_capacity.reserved_1[1] =
           (pAucDicData->item_info).reserved_capacity.reserved_1[1];
      local_79e.send_to_owner.item_info.reserved_capacity.reserved_2 =
           (pAucDicData->item_info).reserved_capacity.reserved_2;
      local_79e.send_to_owner.auction_id = local_7b4;
      pSVar8 = Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
      local_30 = (uint)pSVar8->category_;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_30);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName
                              (this->mpAuction,local_79e.send_to_buyer.item_info.add_info);
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        Auction::GetItemInfo
                  (this->mpAuction,
                   CONCAT22((short)(CONCAT13(local_79e.send_to_owner.item_info.item_id._3_1_,
                                             (undefined3)local_79e.send_to_owner.item_info.item_id)
                                   >> 0x10),(short)local_79e.send_to_owner.item_info.item_id));
        uVar10 = std::string::c_str();
        snprintf(local_79e.send_to_owner.letter_text,0xff,LETTER_TEXT[3],0xff,uVar10,pacVar9);
      }
      else {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_30);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName
                              (this->mpAuction,local_79e.send_to_buyer.item_info.add_info);
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
            *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
          Auction::GetItemInfo
                    (this->mpAuction,
                     CONCAT22((short)(CONCAT13(local_79e.send_to_owner.item_info.item_id._3_1_,
                                               (undefined3)local_79e.send_to_owner.item_info.item_id
                                              ) >> 0x10),
                              (short)local_79e.send_to_owner.item_info.item_id));
          pcVar16 = (char *)std::string::c_str();
        }
        else {
          pcVar16 = local_160;
        }
        snprintf(local_79e.send_to_owner.letter_text,0xff,LETTER_TEXT[3],0xff,pcVar16,pacVar9);
      }
      local_79e.send_to_owner.temp_item_id =
           CONCAT13(local_79e.send_to_owner.item_info.item_id._3_1_,
                    (undefined3)local_79e.send_to_owner.item_info.item_id);
      sVar11 = strlen(local_79e.send_to_owner.letter_text);
      local_79e.send_to_owner.letter_text_length = (ushort)sVar11;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (((PVar7 == PAY_TYPE_POINT) && (0x28d287 < (pAucDicData->item_info).item_id)) &&
         ((pAucDicData->item_info).item_id < 0x28d294)) {
        local_79e.send_to_owner.money = 0;
      }
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (((PVar7 == PAY_TYPE_POINT) && (0x28d287 < (pAucDicData->item_info).item_id)) &&
         ((pAucDicData->item_info).item_id < 0x28d29a)) {
        local_79e.send_to_owner.money = 0;
      }
      pCVar4 = nsl::DataPools::getCommonDataPool
                         (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_2c = nsl::CommonDataPool::createMessage(pCVar4,3);
      local_28 = nsl::Message::getCellFromMessage(local_2c);
      nsl::CMsgCell::operator<<(local_28,&local_79e.super_DBTR_HEADER);
      pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
      nsl::NSLDBThread::PushTransaction(pNVar5,local_2c);
    }
    else {
                    /* Unresolved local var: int money@[???]
                       Unresolved local var: int send_money@[???]
                       Unresolved local var: int category@[???]
                       Unresolved local var: ROI_AverageKey _temp_roi_average_key@[???] */
      if (isInstantBuying) {
        local_70 = pAucDicData->instant_price;
      }
      else {
        local_70 = pAucDicData->price;
      }
      bVar2 = Auction::IsPrivateStoreOpen(this->mpAuction,pAucDicData->owner_id);
      if (bVar2) {
        if (pAucDicData->owner_type == '\x01') {
          dVar1 = (double)local_70 / _DAT_08151c68;
          dVar19 = Auction::GetVIPCommission(this->mpAuction);
          local_84 = (int)ROUND(dVar19 * dVar1);
        }
        else {
          dVar1 = (double)local_70 / _DAT_08151c68;
          dVar19 = Auction::GetCommission(this->mpAuction);
          local_84 = (int)ROUND(dVar19 * dVar1);
        }
      }
      else {
        pAVar6 = G_Auction();
        PVar7 = Auction::GetPayType(pAVar6);
        if (PVar7 == PAY_TYPE_POINT) {
                    /* Unresolved local var: double BasicCommission@[???]
                       Unresolved local var: double VipCommission@[???]
                       Unresolved local var: int AvePrice@[???]
                       Unresolved local var: ROI_AverageKey roiAverageKey@[???]
                       Unresolved local var: char itemRefineValue@[???] */
          local_64 = _DAT_08151c70;
          local_5c = _DAT_08151c78;
          local_c8 = 0;
          ROI_AverageKey::ROI_AverageKey(&local_e0);
          local_4d = 0;
          uVar3 = DnfItemInfo::GetUpgradeValue(&pAucDicData->item_info);
          uVar15 = DnfItemInfo::GetItemId(&pAucDicData->item_info);
          GetAveragePrice(this,uVar15,uVar3,&local_e0,'\0',&local_c8);
          if (local_c8 == 0) {
            if (pAucDicData->owner_type == '\x01') {
              local_84 = (int)ROUND(local_5c);
            }
            else {
              local_84 = (int)ROUND(local_64);
            }
          }
          else {
                    /* Unresolved local var: double PriceRate@[???] */
            local_4c = (double)local_70 / (double)local_c8;
            if (_DAT_08151c80 <= local_4c) {
              if ((local_4c < _DAT_08151c80) || (_DAT_08151c88 <= local_4c)) {
                if ((local_4c < _DAT_08151c88) || (_DAT_08151c90 <= local_4c)) {
                  if ((local_4c < _DAT_08151c90) || (_DAT_08151c98 <= local_4c)) {
                    local_84 = 0x50;
                  }
                  else {
                    local_84 = 0x32;
                  }
                }
                else {
                  local_84 = 0x32;
                }
              }
              else {
                local_84 = 0x32;
              }
            }
            else if (pAucDicData->owner_type == '\x01') {
              local_84 = (int)ROUND(local_5c);
            }
            else {
              local_84 = (int)ROUND(local_64);
            }
          }
          local_84 = (int)ROUND((double)local_84 * ((double)local_70 / _DAT_08151c68));
        }
        else if (pAucDicData->owner_type == '\x01') {
          dVar1 = (double)local_70 / _DAT_08151c68;
          dVar19 = Auction::GetVIPCommission(this->mpAuction);
          local_84 = (int)ROUND(dVar19 * dVar1);
        }
        else {
          dVar1 = (double)local_70 / _DAT_08151c68;
          dVar19 = Auction::GetCommission(this->mpAuction);
          local_84 = (int)ROUND(dVar19 * dVar1);
        }
      }
      local_6c = 0;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        local_6c = local_70 - local_84;
      }
      else {
        local_6c = (local_70 - local_84) + 10000;
      }
                    /* Unresolved local var: char[128] _itemName@[???]
                       Unresolved local var: DBTR_GAME_DB_SEND_PACKAGE_BY_EXPIRE
                       dbtr_expire_package@[???]
                       Unresolved local var: int item_category@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
      if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 != 0 ||
          *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) != 0) {
        GetRandomOptionName(&pAucDicData->item_info,local_160,0x7f);
      }
      tagGAME_DB_SEND_PACKAGE_BY_EXPIRE::tagGAME_DB_SEND_PACKAGE_BY_EXPIRE(&local_4bf);
      local_4bf.package_type = isInstantBuying;
      local_4bf.b_exist_buyer = true;
      local_4bf.send_to_buyer.owner_id = pAucDicData->owner_id;
      local_4bf.send_to_buyer.receiver = pAucDicData->buyer_id;
      local_4bf.send_to_buyer.money = 0;
      local_4bf.send_to_buyer.item_info._0_4_ = *(undefined4 *)&pAucDicData->item_info;
      uVar10 = *(undefined4 *)((int)&(pAucDicData->item_info).item_id + 3);
      local_4bf.send_to_buyer.item_info.item_id._3_1_ = (undefined1)uVar10;
      local_4bf.send_to_buyer.item_info.field_2.uniItemAttr = (uchar)((uint)uVar10 >> 8);
      local_4bf.send_to_buyer.item_info.add_info._0_2_ = (undefined2)((uint)uVar10 >> 0x10);
      uVar10 = *(undefined4 *)((int)&(pAucDicData->item_info).add_info + 2);
      local_4bf.send_to_buyer.item_info.add_info._2_2_ = (undefined2)uVar10;
      local_4bf.send_to_buyer.item_info.endurance = (ushort)((uint)uVar10 >> 0x10);
      local_4bf.send_to_buyer.item_info.extendInfo = (pAucDicData->item_info).extendInfo;
      local_4bf.send_to_buyer.item_info.abilityType_ = (pAucDicData->item_info).abilityType_;
      local_4bf.send_to_buyer.item_info.abilityValue_ = (pAucDicData->item_info).abilityValue_;
      local_4bf.send_to_buyer.item_info.guid_.data_[0] = (pAucDicData->item_info).guid_.data_[0];
      local_4bf.send_to_buyer.item_info.guid_.data_._1_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 1);
      local_4bf.send_to_buyer.item_info.guid_.data_._5_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 5);
      local_4bf.send_to_buyer.item_info._28_4_ =
           *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 9);
      local_4bf.send_to_buyer.item_info.random_option_.option_._3_4_ =
           *(undefined4 *)((pAucDicData->item_info).random_option_.option_ + 1);
      local_4bf.send_to_buyer.item_info.random_option_._7_4_ =
           *(undefined4 *)&(pAucDicData->item_info).random_option_.option_[2].first_value_;
      local_4bf.send_to_buyer.item_info._40_4_ =
           *(undefined4 *)&(pAucDicData->item_info).random_option_.modify_option_.first_value_;
      local_4bf.send_to_buyer.item_info.reserved_capacity.reserved_1[0] =
           (pAucDicData->item_info).reserved_capacity.reserved_1[0];
      local_4bf.send_to_buyer.item_info.reserved_capacity.reserved_1[1] =
           (pAucDicData->item_info).reserved_capacity.reserved_1[1];
      local_4bf.send_to_buyer.item_info.reserved_capacity.reserved_2 =
           (pAucDicData->item_info).reserved_capacity.reserved_2;
      local_4bf.send_to_owner.auction_id = local_7b4;
      pSVar8 = Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
      local_40 = (uint)pSVar8->category_;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName
                              (this->mpAuction,
                               CONCAT22(local_4bf.send_to_buyer.item_info.add_info._2_2_,
                                        (undefined2)local_4bf.send_to_buyer.item_info.add_info));
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        Auction::GetItemInfo
                  (this->mpAuction,
                   CONCAT22((short)(CONCAT13(local_4bf.send_to_buyer.item_info.item_id._3_1_,
                                             (undefined3)local_4bf.send_to_buyer.item_info.item_id)
                                   >> 0x10),(short)local_4bf.send_to_buyer.item_info.item_id));
        uVar10 = std::string::c_str();
        snprintf(local_4bf.send_to_buyer.letter_text,0xff,LETTER_TEXT[2],0xff,uVar10,pacVar9);
      }
      else {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName
                              (this->mpAuction,
                               CONCAT22(local_4bf.send_to_buyer.item_info.add_info._2_2_,
                                        (undefined2)local_4bf.send_to_buyer.item_info.add_info));
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
            *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
          Auction::GetItemInfo
                    (this->mpAuction,
                     CONCAT22((short)(CONCAT13(local_4bf.send_to_buyer.item_info.item_id._3_1_,
                                               (undefined3)local_4bf.send_to_buyer.item_info.item_id
                                              ) >> 0x10),
                              (short)local_4bf.send_to_buyer.item_info.item_id));
          pcVar16 = (char *)std::string::c_str();
        }
        else {
          pcVar16 = local_160;
        }
        snprintf(local_4bf.send_to_buyer.letter_text,0xff,LETTER_TEXT[2],0xff,pcVar16,pacVar9);
      }
      local_4bf.send_to_buyer.temp_item_id =
           CONCAT13(local_4bf.send_to_buyer.item_info.item_id._3_1_,
                    (undefined3)local_4bf.send_to_buyer.item_info.item_id);
      sVar11 = strlen(local_4bf.send_to_buyer.letter_text);
      local_4bf.send_to_buyer.letter_text_length = (ushort)sVar11;
      local_4bf.send_to_owner.owner_id = pAucDicData->owner_id;
      local_4bf.send_to_owner.receiver = pAucDicData->owner_id;
      local_4bf.send_to_owner.money = local_6c;
      local_4bf.send_to_owner.item_info.seal = false;
      local_4bf.send_to_owner.item_info.item_id = 0;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        local_4bf.send_to_owner.money = 0;
      }
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        local_4bf.send_to_owner.money = local_6c;
        local_4bf.send_to_owner.item_info.item_id = 0x28eba2;
      }
      else {
        local_4bf.send_to_owner.item_info.item_id = 0;
      }
      local_4bf.send_to_owner.item_info.field_2.uniItemAttr = '\0';
      local_4bf.send_to_owner.item_info.add_info = 0;
      local_4bf.send_to_owner.item_info.endurance = 0;
      local_4bf.send_to_owner.item_info.extendInfo = 0;
      local_4bf.send_to_owner.item_info.abilityType_ = '\0';
      local_4bf.send_to_owner.item_info.abilityValue_ = 0;
      pAVar6 = G_Auction();
      PVar7 = Auction::GetPayType(pAVar6);
      if (PVar7 == PAY_TYPE_POINT) {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
        uVar10 = std::string::c_str();
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar12 = (char (*) [255])
                     Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
        }
        else {
          pacVar12 = LETTER_TEXT + 7;
        }
        Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
        uVar13 = std::string::c_str();
        snprintf(local_4bf.send_to_owner.letter_text,0xff,LETTER_TEXT[8],0xff,uVar13,pacVar12,
                 local_70,local_84,uVar10,pacVar9,local_6c);
        *charge_point = local_6c;
      }
      else {
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar9 = (char (*) [255])
                    Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
        }
        else {
          pacVar9 = LETTER_TEXT + 7;
        }
        if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
            *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
          Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
          pcVar16 = (char *)std::string::c_str();
        }
        else {
          pcVar16 = local_160;
        }
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_40);
        if (bVar2) {
          pacVar12 = (char (*) [255])
                     Auction::GetAvatarColorName(this->mpAuction,(pAucDicData->item_info).add_info);
        }
        else {
          pacVar12 = LETTER_TEXT + 7;
        }
        if (*(int *)&(pAucDicData->_reg_roi_category_key).field_0 == 0 &&
            *(int *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4) == 0) {
          Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
          pcVar14 = (char *)std::string::c_str();
        }
        else {
          pcVar14 = local_160;
        }
        snprintf(local_4bf.send_to_owner.letter_text,0xff,LETTER_TEXT[1],0xff,pcVar14,pacVar12,
                 local_70,10000,local_84,pcVar16,pacVar9,local_6c);
      }
      sVar11 = strlen(local_4bf.send_to_owner.letter_text);
      local_4bf.send_to_owner.letter_text_length = (ushort)sVar11;
      local_4bf.send_to_owner.temp_item_id = (pAucDicData->item_info).item_id;
      pCVar4 = nsl::DataPools::getCommonDataPool
                         (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
      local_3c = nsl::CommonDataPool::createMessage(pCVar4,3);
      local_38 = nsl::Message::getCellFromMessage(local_3c);
      nsl::CMsgCell::operator<<(local_38,&local_4bf.super_DBTR_HEADER);
      pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
      nsl::NSLDBThread::PushTransaction(pNVar5,local_3c);
      if (isInstantBuying) {
        local_88 = pAucDicData->instant_price;
      }
      else {
        local_88 = pAucDicData->price;
      }
      pSVar8 = Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
      local_68 = (uint)pSVar8->category_;
      bVar2 = Auction::IsStackableCategory(this->mpAuction,pSVar8->category_);
      if (bVar2) {
        if ((pAucDicData->item_info).add_info != 0) {
          local_88 = local_88 / (pAucDicData->item_info).add_info;
        }
        if (local_88 < 1) {
          local_88 = 1;
        }
      }
      ROI_AverageKey::ROI_AverageKey(&local_c4);
      local_c4.baseItem_index = DnfItemInfo::GetItemId(&pAucDicData->item_info);
      local_c4.option_category.field_0._high_category_key._0_4_ =
           *(undefined4 *)&(pAucDicData->_reg_roi_category_key).field_0;
      local_c4.option_category.field_0._high_category_key._4_4_ =
           *(undefined4 *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4);
      local_c4.option_category.field_1 = (pAucDicData->_reg_roi_category_key).field_1;
                    /* Unresolved local var: int i@[???] */
      for (local_34 = 0; local_34 < 3; local_34 = local_34 + 1) {
        *(ushort *)((int)&local_c4.field_2 + local_34 * 2) =
             (ushort)(pAucDicData->item_info).random_option_.option_[local_34].option_index_;
      }
      std::sort<short_int*>
                ((short *)&local_c4.field_2.option_index_key,(short *)((int)&local_c4.field_2 + 6));
      uVar3 = UpgradeSeparateInfo::GetUpgradeSeparate(&(pAucDicData->item_info).separate_info);
      itemUpgradeValue = DnfItemInfo::GetUpgradeValue(&pAucDicData->item_info);
      uVar15 = DnfItemInfo::GetItemId(&pAucDicData->item_info);
      local_8c = Auction::AddItemAveragePrice
                           (this->mpAuction,uVar15,itemUpgradeValue,local_88,0,&local_c4,uVar3,false
                           );
    }
                    /* Unresolved local var: DBTR_AUCTION_DB_EXPIRE_HISTORY dbtr_history@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
    tagAUCTION_DB_EXPIRE_HISTORY::tagAUCTION_DB_EXPIRE_HISTORY(&local_1e0);
    local_1e0.expire_time = pAucDicData->expire_time;
    local_1e0.event_type = isInstantBuying;
    local_1e0.owner_id = pAucDicData->owner_id;
    local_1e0.buyer_id = pAucDicData->buyer_id;
    if (isInstantBuying) {
      local_1e0.price = pAucDicData->instant_price;
    }
    else {
      local_1e0.price = pAucDicData->price;
    }
    local_1e0.item_info._0_4_ = *(undefined4 *)&pAucDicData->item_info;
    local_1e0.item_info._4_4_ = *(undefined4 *)((int)&(pAucDicData->item_info).item_id + 3);
    local_1e0.item_info._8_4_ = *(undefined4 *)((int)&(pAucDicData->item_info).add_info + 2);
    local_1e0.item_info.extendInfo = (pAucDicData->item_info).extendInfo;
    local_1e0.item_info.abilityType_ = (pAucDicData->item_info).abilityType_;
    local_1e0.item_info.abilityValue_ = (pAucDicData->item_info).abilityValue_;
    local_1e0.item_info.guid_.data_[0] = (pAucDicData->item_info).guid_.data_[0];
    local_1e0.item_info.guid_.data_._1_4_ =
         *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 1);
    local_1e0.item_info.guid_.data_._5_4_ =
         *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 5);
    local_1e0.item_info._28_4_ = *(undefined4 *)((pAucDicData->item_info).guid_.data_ + 9);
    local_1e0.item_info.random_option_.option_._3_4_ =
         *(undefined4 *)((pAucDicData->item_info).random_option_.option_ + 1);
    local_1e0.item_info.random_option_._7_4_ =
         *(undefined4 *)&(pAucDicData->item_info).random_option_.option_[2].first_value_;
    local_1e0.item_info._40_4_ =
         *(undefined4 *)&(pAucDicData->item_info).random_option_.modify_option_.first_value_;
    local_1e0.item_info.reserved_capacity.reserved_1[0] =
         (pAucDicData->item_info).reserved_capacity.reserved_1[0];
    local_1e0.item_info.reserved_capacity.reserved_1[1] =
         (pAucDicData->item_info).reserved_capacity.reserved_1[1];
    local_1e0.item_info.reserved_capacity.reserved_2 =
         (pAucDicData->item_info).reserved_capacity.reserved_2;
    local_1e0.unit_price = pAucDicData->unit_price;
    local_1e0._reg_roi_category_key.field_0._high_category_key._0_4_ =
         *(undefined4 *)&(pAucDicData->_reg_roi_category_key).field_0;
    local_1e0._reg_roi_category_key.field_0._high_category_key._4_4_ =
         *(undefined4 *)((int)&(pAucDicData->_reg_roi_category_key).field_0 + 4);
    local_1e0._reg_roi_category_key.field_1 = (pAucDicData->_reg_roi_category_key).field_1;
    local_1e0.auction_id = local_7b4;
    pAVar6 = G_Auction();
    PVar7 = Auction::GetPayType(pAVar6);
    if (PVar7 == PAY_TYPE_POINT) {
      local_1e0.commission = local_84;
      local_1e0.owner_type = pAucDicData->owner_type;
    }
    local_1e0.owner_postal_id = 0;
    local_1e0.buyer_postal_id = 0;
    pCVar4 = nsl::DataPools::getCommonDataPool
                       (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_24 = nsl::CommonDataPool::createMessage(pCVar4,3);
    local_20 = nsl::Message::getCellFromMessage(local_24);
    nsl::CMsgCell::operator<<(local_20,&local_1e0.super_DBTR_HEADER);
    pNVar5 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
    nsl::NSLDBThread::PushTransaction(pNVar5,local_24);
    local_8c = Search::Delete(&this->mpAuction->mSearch,local_7b4);
    _Var20 = local_7b4;
    uVar13 = local_7b4._4_4_;
    uVar10 = (undefined4)local_7b4;
    pcVar16 = nsl::GetErrorStr(local_8c);
    pTVar17 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar17,5,"Delete at Search module result:%s, auction_id:%llu",5,pcVar16,uVar10,
               uVar13);
    if (local_8c == 0) {
      sVar18 = std::
               map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
               ::erase(&this->mAuctionDicTable,&local_7b4);
      uVar13 = local_7b4._4_4_;
      uVar10 = (undefined4)local_7b4;
      if (sVar18 == 0) {
        local_8c = 0xb;
      }
      else {
        uVar15 = (pAucDicData->item_info).item_id;
        pTVar17 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar17,5,"makeSuccessfulBid, Auction ID : %llu, Item ID : %hu is deleted.",5,
                   uVar10,uVar13,uVar15);
        local_80 = Auction::CheckItemType(this->mpAuction,(pAucDicData->item_info).item_id);
        if (local_80 == AUCTION_ITEM_TYPE_CREATURE) {
          Auction::UnregistChkMapForAvatarCreature
                    (this->mpAuction,false,(pAucDicData->item_info).add_info);
        }
        else if (local_80 == AUCTION_ITEM_TYPE_AVATAR) {
          Auction::UnregistChkMapForAvatarCreature
                    (this->mpAuction,true,(pAucDicData->item_info).add_info);
        }
        pSVar8 = Auction::GetItemInfo(this->mpAuction,(pAucDicData->item_info).item_id);
        local_7c = (uint)pSVar8->category_;
        bVar2 = Auction::IsAvatarCategory(this->mpAuction,(uint)pSVar8->category_);
        if (bVar2) {
          Auction::SubAvatarEmblemInfo(this->mpAuction,(pAucDicData->item_info).add_info);
          Auction::SubAvatarExpansionInfo(this->mpAuction,(pAucDicData->item_info).add_info);
        }
        nsl::object_pool_by_boost_pool<AuctionDictionary::AuctionDictionaryData,_int,_int,_int>::
        free(&this->mAuctionDicDataPool,pAucDicData);
        local_8c = 0;
      }
    }
    else {
      pcVar16 = nsl::GetErrorStr(local_8c);
      pTVar17 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog
                (pTVar17,7,"Error occured while delete auction info from search module, %s",7,
                 pcVar16,(int)_Var20,(int)(_Var20 >> 0x20));
    }
  }
  else if ((!isInstantBuying) && (pAucDicData->buyer_id != -1)) {
    CharacterDictionary::AddAuctionId(&this->mBidderDic,pAucDicData->buyer_id,local_7b4);
  }
  return local_8c;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/CharacterDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ExpireTimeDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h 等 590 个文件*
