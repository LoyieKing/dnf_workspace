# _ZN17AuctionDictionary7BiddingERKyiPKciPcRi

`AuctionDictionary::Bidding(unsigned long long const&, int, char const*, int, char*, int&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80525ec` | `0x820` | `0x8059cdc` | `0x809` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,541 +1,540 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x274,%esp
+sub    $0x2b4,%esp
 movl   $0x0,-0x38(%ebp)
 movl   $0xffffffff,-0x30(%ebp)
 movl   $0x0,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%ecx
 lea    -0x5c(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x58(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x58(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEneERKS6_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEeqERKS6_>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x8c>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x76>
+mov    $0x24,%eax
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEptEv>
 mov    0x8(%eax),%eax
 mov    %eax,-0x34(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%edx
 mov    0x10(%ebp),%eax
 cmp    %eax,%edx
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x96>
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xa0>
-mov    $0x24,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x9e>
 mov    $0x2d,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0x10(%ebp),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xd7>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xd5>
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xc2>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xc0>
 mov    $0x2e,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    0x18(%ebp),%eax
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xd7>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xd5>
 mov    $0x2e,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    -0x34(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xfa>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0xf8>
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    0x18(%ebp),%eax
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1c0>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1be>
 mov    $0x2f,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
-mov    -0x34(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,-0x24c(%ebp)
-fildl  -0x24c(%ebp)
-fldl   &data#b847e907(.rodata)
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
+mov    -0x34(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x28c(%ebp)
+fildl  -0x28c(%ebp)
+fldl   ""
 fmulp  %st,%st(1)
-fnstcw -0x24e(%ebp)
-movzwl -0x24e(%ebp),%eax
+fnstcw -0x28e(%ebp)
+movzwl -0x28e(%ebp),%eax
 mov    $0xc,%ah
-mov    %ax,-0x250(%ebp)
-fldcw  -0x250(%ebp)
-fistpl -0x28(%ebp)
-fldcw  -0x24e(%ebp)
-mov    -0x34(%ebp),%eax
-mov    (%eax),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x146>
-addl   $0x1,-0x28(%ebp)
+mov    %ax,-0x290(%ebp)
+fldcw  -0x290(%ebp)
+fistpl -0x20(%ebp)
+fldcw  -0x28e(%ebp)
+mov    -0x34(%ebp),%eax
+mov    (%eax),%eax
+cmp    -0x20(%ebp),%eax
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x144>
+addl   $0x1,-0x20(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x163>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x161>
 mov    0x18(%ebp),%eax
-cmp    -0x28(%ebp),%eax
-jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1c0>
+cmp    -0x20(%ebp),%eax
+jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1be>
 mov    $0x2f,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x185>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x183>
 mov    $0x25,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
-mov    -0x34(%ebp),%eax
-mov    0x4(%eax),%eax
-cmp    -0x28(%ebp),%eax
-jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x199>
-mov    -0x34(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x28(%ebp)
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
+mov    -0x34(%ebp),%eax
+mov    0x4(%eax),%eax
+cmp    -0x20(%ebp),%eax
+jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x197>
+mov    -0x34(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x20(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    0x18(%ebp),%eax
-jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1ae>
+jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1ac>
 mov    $0x25,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    0x18(%ebp),%eax
-cmp    -0x28(%ebp),%eax
-jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1c0>
+cmp    -0x20(%ebp),%eax
+jge    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x1be>
 mov    $0x2f,%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    0x8(%ebp),%eax
 lea    0x416c(%eax),%ecx
 lea    -0x60(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKiPN17AuctionDictionary19CharacterNameStructESt4lessIS0_ESaISt4pairIS0_S3_EEE4findERS0_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x416c(%eax),%edx
 lea    -0x54(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKiPN17AuctionDictionary19CharacterNameStructESt4lessIS0_ESaISt4pairIS0_S3_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x54(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17AuctionDictionary19CharacterNameStructEEEeqERKS6_>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x292>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x290>
 mov    0x8(%ebp),%eax
 add    $0x414c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolIN17AuctionDictionary19CharacterNameStructEiiiE6mallocEv>
 mov    %eax,-0x64(%ebp)
 mov    -0x64(%ebp),%eax
 movl   $0xc,0x8(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 lea    -0x40(%ebp),%eax
 lea    -0x64(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRKiRPN17AuctionDictionary19CharacterNameStructEESt4pairINSt17__decay_and_stripIT_E6__typeENS7_IT0_E6__typeEEOS8_OSB_>
 sub    $0x4,%esp
 lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKiPN17AuctionDictionary19CharacterNameStructEEC1IiS3_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x416c(%eax),%ecx
 lea    -0x50(%ebp),%eax
 lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIKiPN17AuctionDictionary19CharacterNameStructESt4lessIS0_ESaISt4pairIS0_S3_EEE6insertERKS7_>
 sub    $0x4,%esp
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x2b7>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x2b5>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN17AuctionDictionary19CharacterNameStructEEEptEv>
 mov    0x4(%eax),%eax
 movl   $0xc,0x8(%esp)
 mov    0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    -0x34(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x2c(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %eax,-0x30(%ebp)
 cmpl   $0xffffffff,-0x30(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x30a>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x308>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    -0x34(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
 mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x30a>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x308>
 mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3e7>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3e5>
 mov    -0x34(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    0x18(%ebp),%eax
-jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3e7>
+jne    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3e5>
 mov    -0x34(%ebp),%eax
 mov    0x80(%eax),%eax
 movl   $0x0,0x4(%eax)
 movl   $0x0,0x8(%eax)
 mov    0x10(%ebp),%edx
 mov    -0x34(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    0x20(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 movl   $0x1,0x10(%esp)
 mov    -0x34(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi>
 mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3bb>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3b9>
 cmpl   $0xffffffff,-0x30(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3b3>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x3b1>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    -0x34(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12AddAuctionIdEiy>
 mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
 mov    -0x34(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    -0x34(%ebp),%edx
 add    $0x60,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x530>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x52e>
 mov    0x10(%ebp),%edx
 mov    -0x34(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    -0x34(%ebp),%eax
 mov    0x18(%ebp),%edx
 mov    %edx,(%eax)
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    0x10(%ebp),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12AddAuctionIdEiy>
 mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x462>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x460>
 cmpl   $0xffffffff,-0x30(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x45a>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x458>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    -0x34(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12AddAuctionIdEiy>
 mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x81b>
-lea    -0xe4(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x804>
+lea    -0x115(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27tagAUCTION_DB_UPPER_BIDDINGC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
-mov    %eax,-0xcf(%ebp)
-mov    %edx,-0xcb(%ebp)
+mov    %eax,-0x100(%ebp)
+mov    %edx,-0xfc(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc7(%ebp)
+mov    %eax,-0xf8(%ebp)
 movl   $0xd,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0xe4(%ebp),%eax
+lea    -0x115(%ebp),%eax
 add    $0x21,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x18(%ebp),%eax
-mov    %eax,-0xb6(%ebp)
+mov    %eax,-0xe7(%ebp)
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
-mov    %eax,-0x24(%ebp)
-mov    -0x24(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x20(%ebp)
-lea    -0xe4(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+lea    -0x115(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x24(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-lea    -0xe4(%ebp),%eax
+lea    -0x95(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27tagAUCTION_DB_BUYER_HISTORYC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
-mov    %eax,-0xcf(%ebp)
-mov    %edx,-0xcb(%ebp)
+mov    %eax,-0x80(%ebp)
+mov    %edx,-0x7c(%ebp)
 mov    -0x30(%ebp),%eax
-mov    %eax,-0xc7(%ebp)
+mov    %eax,-0x78(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0xc3(%ebp)
+mov    %eax,-0x74(%ebp)
 mov    -0x2c(%ebp),%eax
-mov    %eax,-0xbf(%ebp)
+mov    %eax,-0x70(%ebp)
 mov    0x18(%ebp),%eax
-mov    %eax,-0xbb(%ebp)
-movl   $0x0,-0xb7(%ebp)
+mov    %eax,-0x6c(%ebp)
+movl   $0x0,-0x68(%ebp)
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
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x18(%ebp)
-lea    -0xe4(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x95(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x1c(%ebp),%edx
+mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
 cmpl   $0xffffffff,-0x30(%ebp)
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x816>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x7ff>
 mov    -0x34(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x633>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x61c>
 mov    -0x34(%ebp),%eax
 lea    0x14(%eax),%edx
 movl   $0x7f,0x8(%esp)
-lea    -0xe4(%ebp),%eax
+lea    -0x115(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci>
-lea    -0x248(%ebp),%eax
+lea    -0x279(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN23tagGAME_DB_SEND_PACKAGEC1Ev>
 mov    0xc(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
-mov    %eax,-0x233(%ebp)
-mov    %edx,-0x22f(%ebp)
+mov    %eax,-0x264(%ebp)
+mov    %edx,-0x260(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x22b(%ebp)
+mov    %eax,-0x25c(%ebp)
 mov    -0x30(%ebp),%eax
-mov    %eax,-0x227(%ebp)
+mov    %eax,-0x258(%ebp)
 mov    -0x2c(%ebp),%eax
-mov    %eax,-0x223(%ebp)
-movb   $0x0,-0x21f(%ebp)
-movl   $0x0,-0x21e(%ebp)
-movb   $0x0,-0x21a(%ebp)
-movl   $0x0,-0x219(%ebp)
-movw   $0x0,-0x215(%ebp)
-movl   $0x0,-0x213(%ebp)
-movb   $0x0,-0x20f(%ebp)
-movw   $0x0,-0x20e(%ebp)
+mov    %eax,-0x254(%ebp)
+movb   $0x0,-0x250(%ebp)
+movl   $0x0,-0x24f(%ebp)
+movb   $0x0,-0x24b(%ebp)
+movl   $0x0,-0x24a(%ebp)
+movw   $0x0,-0x246(%ebp)
+movl   $0x0,-0x244(%ebp)
+movb   $0x0,-0x240(%ebp)
+movw   $0x0,-0x23f(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,-0x14(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
 mov    -0x14(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x70f>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x6f8>
 mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x714>
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x6fd>
 mov    $&LETTER_TEXT+0x6f9,%ebx
 mov    -0x34(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x72b>
-lea    -0xe4(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x74e>
+je     <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x714>
+lea    -0x115(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary7BiddingERKyiPKciPcRi+0x737>
 mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x248(%ebp),%eax
+lea    -0x279(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x248(%ebp),%eax
+lea    -0x279(%ebp),%eax
 add    $0x60,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x1ea(%ebp)
+mov    %ax,-0x21b(%ebp)
 mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%eax
-mov    %eax,-0xe8(%ebp)
+mov    %eax,-0x119(%ebp)
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
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0xc(%ebp)
-lea    -0x248(%ebp),%eax
+lea    -0x279(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: int Bidding(AuctionDictionary * this, __int64 * auctionId, int buyerId,
   char * buyerName, int price, char * owner_id, int * charge_point) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary7BiddingERKyiPKciPcRi
          (AuctionDictionary *this,__int64 *auctionId,int buyerId,char *buyerName,int price,
          char *owner_id,int *charge_point)

{
  ExpireTimeDictionaryData *pEVar1;
  bool bVar2;
  pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*> *ppVar3;
  PAY_TYPE PVar4;
  pair<const_int,_AuctionDictionary::CharacterNameStruct*> *ppVar5;
  size_t sVar6;
  CommonDataPool *pCVar7;
  NSLDBThread *pNVar8;
  STItemInfo *pSVar9;
  char (*pacVar10) [255];
  tagAUCTION_DB_UPPER_BIDDING *ptVar11;
  int in_GS_OFFSET;
  tagGAME_DB_SEND_PACKAGE local_24c;
  tagAUCTION_DB_UPPER_BIDDING local_e8 [2];
  CharacterNameStruct *local_68;
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [16];
  pair<int,_AuctionDictionary::CharacterNameStruct*> local_44;
  int local_3c;
  AuctionDictionaryData *local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  Message *local_28;
  CMsgCell *local_24;
  Message *local_20;
  CMsgCell *local_1c;
  uint local_18;
  Message *local_14;
  CMsgCell *local_10;
  
                    /* Unresolved local var: int error_code@[???]
                       Unresolved local var: AuctionDictionaryData * ptr_data@[???]
                       Unresolved local var: int prev_buyer_id@[???]
                       Unresolved local var: int prev_bidding_price@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                       iter@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
                       char_name_iter@[???] */
  local_3c = 0;
  local_34 = 0xffffffff;
  local_30 = 0;
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::find((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
          *)(local_64 + 4),(ulonglong *)&this->mAuctionDicTable);
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::end((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
         *)local_5c);
  bVar2 = std::
          _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
          ::operator!=((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)(local_64 + 4),
                       (_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)local_5c);
  if (bVar2) {
    ppVar3 = std::
             _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
             ::operator->((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                           *)(local_64 + 4));
    local_38 = ppVar3->second;
    if (local_38->owner_id == buyerId) {
      local_3c = 0x2d;
    }
    else {
      if (local_38->buyer_id == buyerId) {
        if (local_38->instant_price == -1) {
          return 0x2e;
        }
        if (local_38->instant_price != price) {
          return 0x2e;
        }
      }
      if (local_38->price == -1) {
        if (local_38->instant_price != price) {
          return 0x2f;
        }
      }
      else {
                    /* Unresolved local var: int minimum_bidding_price@[???] */
        local_2c = (int)ROUND(_DAT_08151c60 * (double)local_38->price);
        if (local_38->price == local_2c) {
          local_2c = local_2c + 1;
        }
        if (local_38->instant_price == -1) {
          if (price < local_2c) {
            return 0x2f;
          }
        }
        else {
          PVar4 = Auction::GetPayType(this->mpAuction);
          if (PVar4 == PAY_TYPE_POINT) {
            return 0x25;
          }
          if (local_38->instant_price < local_2c) {
            local_2c = local_38->instant_price;
          }
          if (local_38->instant_price < price) {
            return 0x25;
          }
          if (price < local_2c) {
            return 0x2f;
          }
        }
      }
      std::
      map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
      ::find((map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
              *)local_64,(int *)&this->mCharacterNameTable);
      std::
      map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
      ::end((map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
             *)(local_5c + 4));
      bVar2 = std::_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
              ::operator==((_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
                            *)local_64,
                           (_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
                            *)(local_5c + 4));
      if (bVar2) {
                    /* Unresolved local var: CharacterNameStruct * new_character_name@[???] */
        local_68 = nsl::
                   object_pool_by_boost_pool<AuctionDictionary::CharacterNameStruct,_int,_int,_int>
                   ::malloc(&this->mCharacterNamePool);
        strncpy(local_68->char_name,buyerName,0xc);
        std::make_pair<const_int&,_AuctionDictionary::CharacterNameStruct*&>
                  (&local_44,&buyerId,&local_68);
        std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>::
        pair<int,_AuctionDictionary::CharacterNameStruct*>
                  ((pair<const_int,_AuctionDictionary::CharacterNameStruct*> *)(local_54 + 8),
                   &local_44);
        std::
        map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
        ::insert((map<const_int,_AuctionDictionary::CharacterNameStruct*,_std::less<const_int>,_std::allocator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>_>
                  *)local_54,
                 (pair<const_int,_AuctionDictionary::CharacterNameStruct*> *)
                 &this->mCharacterNameTable);
      }
      else {
        ppVar5 = std::
                 _Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>::
                 operator->((_Rb_tree_iterator<std::pair<const_int,_AuctionDictionary::CharacterNameStruct*>_>
                             *)local_64);
        strncpy(ppVar5->second->char_name,buyerName,0xc);
      }
      local_30 = local_38->price;
      local_34 = local_38->buyer_id;
      if ((local_34 == 0xffffffff) ||
         (local_3c = CharacterDictionary::SubAuctionId
                               (&this->mBidderDic,local_38->buyer_id,*auctionId), local_3c == 0)) {
        if ((local_38->instant_price == -1) || (local_38->instant_price != price)) {
          local_38->buyer_id = buyerId;
          local_38->price = price;
          local_3c = CharacterDictionary::AddAuctionId(&this->mBidderDic,buyerId,*auctionId);
          if (local_3c != 0) {
            if (local_34 == 0xffffffff) {
              return local_3c;
            }
            CharacterDictionary::AddAuctionId(&this->mBidderDic,local_38->buyer_id,*auctionId);
            return local_3c;
          }
                    /* Unresolved local var: DBTR_AUCTION_DB_UPPER_BIDDING dbtr_upper_bidding@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          tagAUCTION_DB_UPPER_BIDDING::tagAUCTION_DB_UPPER_BIDDING(local_e8);
          local_e8[0].auction_id._4_4_ = *(undefined4 *)((int)auctionId + 4);
          local_e8[0].auction_id._0_4_ = (undefined4)*auctionId;
          local_e8[0].buyer_id = buyerId;
          strncpy(local_e8[0].buyer_name,buyerName,0xd);
          local_e8[0].price._0_3_ = (undefined3)price;
          local_e8[0].price._3_1_ = (undefined1)((uint)price >> 0x18);
          pCVar7 = nsl::DataPools::getCommonDataPool
                             (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_28 = nsl::CommonDataPool::createMessage(pCVar7,3);
          local_24 = nsl::Message::getCellFromMessage(local_28);
          nsl::CMsgCell::operator<<(local_24,&local_e8[0].super_DBTR_HEADER);
          pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(pNVar8,local_28);
        }
        else {
          pEVar1 = local_38->expire_table_ptr;
          *(undefined4 *)&pEVar1->auction_id = 0;
          *(undefined4 *)((int)&pEVar1->auction_id + 4) = 0;
          local_38->buyer_id = buyerId;
          local_3c = _ZN17AuctionDictionary17makeSuccessfulBidEyPNS_21AuctionDictionaryDataEbRi
                               (this,*auctionId,local_38,true,charge_point);
          if (local_3c != 0) {
            if (local_34 == 0xffffffff) {
              return local_3c;
            }
            CharacterDictionary::AddAuctionId(&this->mBidderDic,local_38->buyer_id,*auctionId);
            return local_3c;
          }
          sVar6 = strlen(local_38->owner_nexon_id);
          strncpy(owner_id,local_38->owner_nexon_id,sVar6);
        }
                    /* Unresolved local var: DBTR_AUCTION_DB_BUYER_HISTORY dbtr_buyer@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
        tagAUCTION_DB_BUYER_HISTORY::tagAUCTION_DB_BUYER_HISTORY
                  ((tagAUCTION_DB_BUYER_HISTORY *)local_e8);
        local_e8[0].auction_id._4_4_ = *(undefined4 *)((int)auctionId + 4);
        local_e8[0].auction_id._0_4_ = (undefined4)*auctionId;
        local_e8[0].buyer_id = local_34;
        local_e8[0].buyer_name[0] = (undefined1)buyerId;
        local_e8[0].buyer_name[1] = buyerId._1_1_;
        local_e8[0].buyer_name[2] = buyerId._2_1_;
        local_e8[0].buyer_name[3] = buyerId._3_1_;
        local_e8[0].buyer_name[4] = (undefined1)local_30;
        local_e8[0].buyer_name[5] = local_30._1_1_;
        local_e8[0].buyer_name[6] = local_30._2_1_;
        local_e8[0].buyer_name[7] = local_30._3_1_;
        local_e8[0].buyer_name[8] = (undefined1)price;
        local_e8[0].buyer_name[9] = price._1_1_;
        local_e8[0].buyer_name[10] = price._2_1_;
        local_e8[0].buyer_name[0xb] = price._3_1_;
        local_e8[0]._45_4_ = 0;
        pCVar7 = nsl::DataPools::getCommonDataPool
                           (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
        local_20 = nsl::CommonDataPool::createMessage(pCVar7,3);
        local_1c = nsl::Message::getCellFromMessage(local_20);
        nsl::CMsgCell::operator<<(local_1c,&local_e8[0].super_DBTR_HEADER);
        pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
        nsl::NSLDBThread::PushTransaction(pNVar8,local_20);
        if (local_34 != 0xffffffff) {
                    /* Unresolved local var: char[128] _itemName@[???]
                       Unresolved local var: DBTR_GAME_DB_SEND_PACKAGE dbtrSendPackage@[???]
                       Unresolved local var: int category@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          if (*(int *)&(local_38->_reg_roi_category_key).field_0 != 0 ||
              *(int *)((int)&(local_38->_reg_roi_category_key).field_0 + 4) != 0) {
            GetRandomOptionName(&local_38->item_info,(char *)local_e8,0x7f);
          }
          tagGAME_DB_SEND_PACKAGE::tagGAME_DB_SEND_PACKAGE(&local_24c);
          local_24c.auction_id._4_4_ = *(undefined4 *)((int)auctionId + 4);
          local_24c.auction_id._0_4_ = (undefined4)*auctionId;
          local_24c.owner_id = local_38->owner_id;
          local_24c.receiver = local_34;
          local_24c.money = local_30;
          local_24c.item_info.seal = false;
          local_24c.item_info.item_id = 0;
          local_24c.item_info.field_2.uniItemAttr = '\0';
          local_24c.item_info.add_info = 0;
          local_24c.item_info.endurance = 0;
          local_24c.item_info.extendInfo = 0;
          local_24c.item_info.abilityType_ = '\0';
          local_24c.item_info.abilityValue_ = 0;
          pSVar9 = Auction::GetItemInfo(this->mpAuction,(local_38->item_info).item_id);
          local_18 = (uint)pSVar9->category_;
          bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_18);
          if (bVar2) {
            pacVar10 = (char (*) [255])
                       Auction::GetAvatarColorName(this->mpAuction,(local_38->item_info).add_info);
          }
          else {
            pacVar10 = LETTER_TEXT + 7;
          }
          if (*(int *)&(local_38->_reg_roi_category_key).field_0 == 0 &&
              *(int *)((int)&(local_38->_reg_roi_category_key).field_0 + 4) == 0) {
            Auction::GetItemInfo(this->mpAuction,(local_38->item_info).item_id);
            ptVar11 = (tagAUCTION_DB_UPPER_BIDDING *)std::string::c_str();
          }
          else {
            ptVar11 = local_e8;
          }
          snprintf(local_24c.letter_text,0xff,LETTER_TEXT[0],ptVar11,pacVar10);
          sVar6 = strlen(local_24c.letter_text);
          local_24c.letter_text_length = (ushort)sVar6;
          local_24c.temp_item_id = (local_38->item_info).item_id;
          pCVar7 = nsl::DataPools::getCommonDataPool
                             (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_14 = nsl::CommonDataPool::createMessage(pCVar7,3);
          local_10 = nsl::Message::getCellFromMessage(local_14);
          nsl::CMsgCell::operator<<(local_10,&local_24c.super_DBTR_HEADER);
          pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(pNVar8,local_14);
        }
        local_3c = 0;
      }
    }
  }
  else {
    local_3c = 0x24;
  }
  return local_3c;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AveragePriceDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/CharacterDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/ExpireTimeDictionary.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.h, source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/AuctionItem.h 等 512 个文件*
