# _ZN17AuctionDictionary12RegistCancelEiy

`AuctionDictionary::RegistCancel(int, unsigned long long)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x8051bcc` | `0xa20` | `0x805b760` | `0xa1a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,652 +1,652 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x3f4,%esp
+sub    $0x464,%esp
 mov    0x10(%ebp),%eax
-mov    %eax,-0x3d0(%ebp)
+mov    %eax,-0x440(%ebp)
 mov    0x14(%ebp),%eax
-mov    %eax,-0x3cc(%ebp)
-movl   $0x0,-0x3c(%ebp)
-movl   $0x0,-0x38(%ebp)
+mov    %eax,-0x43c(%ebp)
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%ecx
-lea    -0x44(%ebp),%eax
-lea    -0x3d0(%ebp),%edx
+lea    -0x3c(%ebp),%eax
+lea    -0x440(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE4findERS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
-lea    -0x40(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x40(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x38(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEneERKS6_>
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x8b>
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKyPN17AuctionDictionary21AuctionDictionaryDataEEEptEv>
 mov    0x8(%eax),%eax
-mov    %eax,-0x3c(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
+mov    %eax,-0x34(%ebp)
+cmpl   $0x0,-0x34(%ebp)
 jne    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x9b>
 mov    $0x24,%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
-mov    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
+mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    0xc(%ebp),%eax
 je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xb0>
 mov    $0x2b,%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
 mov    0x8(%ebp),%ecx
 mov    0x4(%ecx),%ecx
 add    $0x51d8,%ecx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN6Search6DeleteEy>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xe9>
-mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
-mov    -0x3c(%ebp),%ecx
+mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
+mov    -0x34(%ebp),%ecx
 mov    0x8(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3114,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
 je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x129>
-mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
+mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
-lea    -0x3d0(%ebp),%eax
+lea    -0x440(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIyPN17AuctionDictionary21AuctionDictionaryDataESt4lessIyESaISt4pairIKyS2_EEE5eraseERS6_>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x154>
 mov    $0xb,%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
-lea    -0xe1(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
+lea    -0xd9(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28tagAUCTION_DB_EXPIRE_HISTORYC1Ev>
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
-mov    %eax,-0xcc(%ebp)
-mov    %edx,-0xc8(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
+mov    %eax,-0xc4(%ebp)
+mov    %edx,-0xc0(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0xc4(%ebp)
-movb   $0x2,-0xc0(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0xbc(%ebp)
+movb   $0x2,-0xb8(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0xbf(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0xb7(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0xbb(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0xb3(%ebp)
+mov    -0x34(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0xb7(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0xaf(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x14(%eax),%edx
-mov    %edx,-0xb3(%ebp)
+mov    %edx,-0xab(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0xaf(%ebp)
+mov    %edx,-0xa7(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0xab(%ebp)
+mov    %edx,-0xa3(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0xa7(%ebp)
+mov    %edx,-0x9f(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0xa3(%ebp)
+mov    %edx,-0x9b(%ebp)
 mov    0x28(%eax),%edx
-mov    %edx,-0x9f(%ebp)
+mov    %edx,-0x97(%ebp)
 mov    0x2c(%eax),%edx
-mov    %edx,-0x9b(%ebp)
+mov    %edx,-0x93(%ebp)
 mov    0x30(%eax),%edx
-mov    %edx,-0x97(%ebp)
+mov    %edx,-0x8f(%ebp)
 mov    0x34(%eax),%edx
-mov    %edx,-0x93(%ebp)
+mov    %edx,-0x8b(%ebp)
 mov    0x38(%eax),%edx
-mov    %edx,-0x8f(%ebp)
+mov    %edx,-0x87(%ebp)
 mov    0x3c(%eax),%edx
-mov    %edx,-0x8b(%ebp)
+mov    %edx,-0x83(%ebp)
 mov    0x40(%eax),%edx
-mov    %edx,-0x87(%ebp)
+mov    %edx,-0x7f(%ebp)
 mov    0x44(%eax),%edx
-mov    %edx,-0x83(%ebp)
+mov    %edx,-0x7b(%ebp)
 movzbl 0x48(%eax),%eax
-mov    %al,-0x7f(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %al,-0x77(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x50(%eax),%eax
-mov    %eax,-0x76(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x6e(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x54(%eax),%edx
-mov    %edx,-0x72(%ebp)
+mov    %edx,-0x6a(%ebp)
 mov    0x58(%eax),%edx
-mov    %edx,-0x6e(%ebp)
+mov    %edx,-0x66(%ebp)
 mov    0x5c(%eax),%eax
-mov    %eax,-0x6a(%ebp)
+mov    %eax,-0x62(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x275>
-movl   $0x0,-0x66(%ebp)
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x26f>
+movl   $0x0,-0x5e(%ebp)
+mov    -0x34(%ebp),%eax
 movzbl 0x49(%eax),%eax
-mov    %al,-0x62(%ebp)
-movl   $0x0,-0x7e(%ebp)
-movl   $0x0,-0x7a(%ebp)
+mov    %al,-0x5a(%ebp)
+movl   $0x0,-0x76(%ebp)
+movl   $0x0,-0x72(%ebp)
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
 mov    %eax,-0x2c(%ebp)
 mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x28(%ebp)
-lea    -0xe1(%ebp),%eax
+lea    -0xd9(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-lea    -0x61(%ebp),%eax
+lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25tagAUCTION_DB_DELETE_ITEMC1Ev>
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
-mov    %eax,-0x4c(%ebp)
-mov    %edx,-0x48(%ebp)
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
+mov    %eax,-0x44(%ebp)
+mov    %edx,-0x40(%ebp)
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
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x61(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x28(%ebp)
+lea    -0x59(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x24(%ebp),%edx
+mov    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33tagGAME_DB_SEND_PACKAGE_BY_EXPIREC1Ev>
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
-mov    %eax,-0x394(%ebp)
-mov    %edx,-0x390(%ebp)
-movb   $0x2,-0x3ab(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
+mov    %eax,-0x40c(%ebp)
+mov    %edx,-0x408(%ebp)
+movb   $0x2,-0x423(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x3ed>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x3e7>
+mov    -0x34(%ebp),%eax
 lea    0x14(%eax),%edx
 movl   $0x7f,0x8(%esp)
-lea    -0xe1(%ebp),%eax
+lea    -0x159(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_Z19GetRandomOptionNameP11DnfItemInfoPci>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x63e>
-movb   $0x1,-0x3aa(%ebp)
-mov    -0x3d0(%ebp),%eax
-mov    -0x3cc(%ebp),%edx
-mov    -0x3c(%ebp),%ecx
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x638>
+movb   $0x1,-0x422(%ebp)
+mov    -0x440(%ebp),%eax
+mov    -0x43c(%ebp),%edx
+mov    -0x34(%ebp),%ecx
 mov    0xc(%ecx),%ecx
 mov    0x8(%ebp),%ebx
 add    $0x3130,%ebx
 mov    %eax,0x8(%esp)
 mov    %edx,0xc(%esp)
 mov    %ecx,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN19CharacterDictionary12SubAuctionIdEiy>
-mov    %eax,-0x38(%ebp)
-cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x443>
-mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa1b>
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+cmpl   $0x0,-0x30(%ebp)
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x43d>
+mov    -0x30(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0xa15>
+mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x228(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x2a0(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0xc(%eax),%eax
-mov    %eax,-0x224(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x29c(%ebp)
+mov    -0x34(%ebp),%eax
 mov    (%eax),%eax
-mov    %eax,-0x220(%ebp)
-movb   $0x0,-0x21c(%ebp)
-movl   $0x0,-0x21b(%ebp)
-movb   $0x0,-0x217(%ebp)
-movl   $0x0,-0x216(%ebp)
-movw   $0x0,-0x212(%ebp)
-movl   $0x0,-0x210(%ebp)
-movb   $0x0,-0x20c(%ebp)
-movw   $0x0,-0x20b(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x298(%ebp)
+movb   $0x0,-0x294(%ebp)
+movl   $0x0,-0x293(%ebp)
+movb   $0x0,-0x28f(%ebp)
+movl   $0x0,-0x28e(%ebp)
+movw   $0x0,-0x28a(%ebp)
+movl   $0x0,-0x288(%ebp)
+movb   $0x0,-0x284(%ebp)
+movw   $0x0,-0x283(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x1c(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x576>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x14(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x570>
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x51d>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x517>
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x522>
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x51c>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x3fc,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x616>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x14(%ebp),%edx
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x610>
+mov    -0x1c(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5ab>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5a5>
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5b0>
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5aa>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5c7>
-lea    -0xe1(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5ea>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5c1>
+lea    -0x159(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x5e4>
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x3fc,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 add    $0x1db,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x1e7(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %ax,-0x25f(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%eax
-mov    %eax,-0xe5(%ebp)
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x645>
-movb   $0x0,-0x3aa(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x15d(%ebp)
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x63f>
+movb   $0x0,-0x422(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x38c(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x404(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x388(%ebp)
-movl   $0x0,-0x384(%ebp)
-mov    -0x3c(%ebp),%eax
+mov    %eax,-0x400(%ebp)
+movl   $0x0,-0x3fc(%ebp)
+mov    -0x34(%ebp),%eax
 mov    0x14(%eax),%edx
-mov    %edx,-0x380(%ebp)
+mov    %edx,-0x3f8(%ebp)
 mov    0x18(%eax),%edx
-mov    %edx,-0x37c(%ebp)
+mov    %edx,-0x3f4(%ebp)
 mov    0x1c(%eax),%edx
-mov    %edx,-0x378(%ebp)
+mov    %edx,-0x3f0(%ebp)
 mov    0x20(%eax),%edx
-mov    %edx,-0x374(%ebp)
+mov    %edx,-0x3ec(%ebp)
 mov    0x24(%eax),%edx
-mov    %edx,-0x370(%ebp)
+mov    %edx,-0x3e8(%ebp)
 mov    0x28(%eax),%edx
-mov    %edx,-0x36c(%ebp)
+mov    %edx,-0x3e4(%ebp)
 mov    0x2c(%eax),%edx
-mov    %edx,-0x368(%ebp)
+mov    %edx,-0x3e0(%ebp)
 mov    0x30(%eax),%edx
-mov    %edx,-0x364(%ebp)
+mov    %edx,-0x3dc(%ebp)
 mov    0x34(%eax),%edx
-mov    %edx,-0x360(%ebp)
+mov    %edx,-0x3d8(%ebp)
 mov    0x38(%eax),%edx
-mov    %edx,-0x35c(%ebp)
+mov    %edx,-0x3d4(%ebp)
 mov    0x3c(%eax),%edx
-mov    %edx,-0x358(%ebp)
+mov    %edx,-0x3d0(%ebp)
 mov    0x40(%eax),%edx
-mov    %edx,-0x354(%ebp)
+mov    %edx,-0x3cc(%ebp)
 mov    0x44(%eax),%edx
-mov    %edx,-0x350(%ebp)
+mov    %edx,-0x3c8(%ebp)
 movzbl 0x48(%eax),%eax
-mov    %al,-0x34c(%ebp)
+mov    %al,-0x3c4(%ebp)
 call   <T> <_Z9G_Auctionv>
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x7b2>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x7ac>
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x10(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x10(%ebp),%edx
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x75b>
-mov    -0x37a(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x755>
+mov    -0x3f2(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x760>
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x75a>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x37f(%ebp),%edx
+mov    -0x3f7(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x4fb,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x872>
-mov    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x86c>
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0xc(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0xc(%ebp),%edx
+mov    %eax,-0x14(%ebp)
+mov    -0x14(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x809>
-mov    -0x37a(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x803>
+mov    -0x3f2(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction18GetAvatarColorNameEi>
 mov    %eax,%ebx
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x80e>
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x808>
 mov    $&LETTER_TEXT+0x6f9,%ebx
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x58(%eax),%edx
 mov    0x54(%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x825>
-lea    -0xe1(%ebp),%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x848>
-mov    -0x37f(%ebp),%edx
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x81f>
+lea    -0x159(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x842>
+mov    -0x3f7(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    $&LETTER_TEXT+0x4fb,%edx
 mov    %ebx,0x10(%esp)
 mov    %eax,0xc(%esp)
 mov    %edx,0x8(%esp)
 movl   $0xff,0x4(%esp)
-lea    -0x3c0(%ebp),%eax
+lea    -0x438(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-mov    -0x37f(%ebp),%eax
-mov    %eax,-0x249(%ebp)
-lea    -0x3c0(%ebp),%eax
+mov    -0x3f7(%ebp),%eax
+mov    %eax,-0x2c1(%ebp)
+lea    -0x438(%ebp),%eax
 add    $0x77,%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
-mov    %ax,-0x34b(%ebp)
+mov    %ax,-0x3c3(%ebp)
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
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x18(%ebp)
-lea    -0x3c0(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x438(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
-mov    -0x1c(%ebp),%edx
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13CheckItemTypeEm>
-mov    %eax,-0x34(%ebp)
-mov    -0x34(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x93d>
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x937>
 cmp    $0x3,%eax
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x95f>
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x959>
 cmp    $0x1,%eax
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x97f>
-mov    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x979>
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction31UnregistChkMapForAvatarCreatureEbi>
-jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x97f>
-mov    -0x3c(%ebp),%eax
+jmp    <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x979>
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction31UnregistChkMapForAvatarCreatureEbi>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x15(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x30(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x30(%ebp),%edx
+mov    %eax,-0x20(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x9ea>
-mov    -0x3c(%ebp),%eax
+je     <T> <_ZN17AuctionDictionary12RegistCancelEiy+0x9e4>
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19SubAvatarEmblemInfoEi>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x1a(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22SubAvatarExpansionInfoEi>
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    0x80(%eax),%eax
 movl   $0x0,0x4(%eax)
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
-mov    -0x3c(%ebp),%eax
+mov    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl25object_pool_by_boost_poolIN17AuctionDictionary21AuctionDictionaryDataEiiiE4freeEPS2_>
 mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: int RegistCancel(AuctionDictionary * this, int ownerId, __int64
   auctionId) */

int __thiscall
AuctionDictionary::_ZN17AuctionDictionary12RegistCancelEiy
          (AuctionDictionary *this,int ownerId,__int64 auctionId)

{
  ExpireTimeDictionaryData *pEVar1;
  bool bVar2;
  pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*> *ppVar3;
  size_t sVar4;
  Auction *pAVar5;
  PAY_TYPE PVar6;
  CommonDataPool *pCVar7;
  NSLDBThread *pNVar8;
  STItemInfo *pSVar9;
  char (*pacVar10) [255];
  undefined4 uVar11;
  size_t sVar12;
  tagAUCTION_DB_EXPIRE_HISTORY *ptVar13;
  int in_GS_OFFSET;
  __int64 local_3d4 [2];
  tagGAME_DB_SEND_PACKAGE_BY_EXPIRE local_3c4;
  tagAUCTION_DB_EXPIRE_HISTORY local_e5;
  tagAUCTION_DB_DELETE_ITEM local_65;
  undefined1 local_48 [8];
  AuctionDictionaryData *local_40;
  _Base_ptr local_3c;
  _Base_ptr local_38;
  uint local_34;
  Message *local_30;
  CMsgCell *local_2c;
  Message *local_28;
  CMsgCell *local_24;
  Message *local_20;
  CMsgCell *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
                    /* Unresolved local var: AuctionDictionaryData * ptr_data@[???]
                       Unresolved local var: int error_code@[???]
                       Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                       iter@[???]
                       Unresolved local var: EnumAuctionItemType item_type@[???]
                       Unresolved local var: int item_category@[???] */
  local_40 = (AuctionDictionaryData *)0x0;
  local_3c = (_Base_ptr)0x0;
  local_3d4[0] = auctionId;
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::find((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
          *)local_48,(ulonglong *)&this->mAuctionDicTable);
  std::
  map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
  ::end((map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
         *)(local_48 + 4));
  bVar2 = std::
          _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
          ::operator!=((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)local_48,
                       (_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                        *)(local_48 + 4));
  if (bVar2) {
    ppVar3 = std::
             _Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
             ::operator->((_Rb_tree_iterator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>
                           *)local_48);
    local_40 = ppVar3->second;
  }
  if (local_40 == (AuctionDictionaryData *)0x0) {
    local_3c = (_Base_ptr)0x24;
  }
  else if (local_40->owner_id == ownerId) {
    local_3c = (_Base_ptr)Search::Delete(&this->mpAuction->mSearch,local_3d4[0]);
    if (local_3c == (_Base_ptr)0x0) {
      local_3c = (_Base_ptr)
                 CharacterDictionary::SubAuctionId
                           (&this->mRegisterDic,local_40->owner_id,local_3d4[0]);
      if (local_3c == (_Base_ptr)0x0) {
        sVar4 = std::
                map<long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*,_std::less<long_long_unsigned_int>,_std::allocator<std::pair<const_long_long_unsigned_int,_AuctionDictionary::AuctionDictionaryData*>_>_>
                ::erase(&this->mAuctionDicTable,local_3d4);
        if (sVar4 == 0) {
          local_3c = (_Base_ptr)0xb;
        }
        else {
                    /* Unresolved local var: DBTR_AUCTION_DB_EXPIRE_HISTORY dbtr_history@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          tagAUCTION_DB_EXPIRE_HISTORY::tagAUCTION_DB_EXPIRE_HISTORY(&local_e5);
          local_e5.expire_time = local_40->expire_time;
          local_e5.event_type = '\x02';
          local_e5.owner_id = local_40->owner_id;
          local_e5.buyer_id = local_40->buyer_id;
          local_e5.price = local_40->price;
          local_e5.item_info._0_4_ = *(undefined4 *)&local_40->item_info;
          local_e5.item_info._4_4_ = *(undefined4 *)((int)&(local_40->item_info).item_id + 3);
          local_e5.item_info._8_4_ = *(undefined4 *)((int)&(local_40->item_info).add_info + 2);
          local_e5.item_info.extendInfo = (local_40->item_info).extendInfo;
          local_e5.item_info.abilityType_ = (local_40->item_info).abilityType_;
          local_e5.item_info.abilityValue_ = (local_40->item_info).abilityValue_;
          local_e5.item_info.guid_.data_[0] = (local_40->item_info).guid_.data_[0];
          local_e5.item_info.guid_.data_._1_4_ =
               *(undefined4 *)((local_40->item_info).guid_.data_ + 1);
          local_e5.item_info.guid_.data_._5_4_ =
               *(undefined4 *)((local_40->item_info).guid_.data_ + 5);
          local_e5.item_info._28_4_ = *(undefined4 *)((local_40->item_info).guid_.data_ + 9);
          local_e5.item_info.random_option_.option_._3_4_ =
               *(undefined4 *)((local_40->item_info).random_option_.option_ + 1);
          local_e5.item_info.random_option_._7_4_ =
               *(undefined4 *)&(local_40->item_info).random_option_.option_[2].first_value_;
          local_e5.item_info._40_4_ =
               *(undefined4 *)&(local_40->item_info).random_option_.modify_option_.first_value_;
          local_e5.item_info.reserved_capacity.reserved_1[0] =
               (local_40->item_info).reserved_capacity.reserved_1[0];
          local_e5.item_info.reserved_capacity.reserved_1[1] =
               (local_40->item_info).reserved_capacity.reserved_1[1];
          local_e5.item_info.reserved_capacity.reserved_2 =
               (local_40->item_info).reserved_capacity.reserved_2;
          local_e5.unit_price = local_40->unit_price;
          local_e5._reg_roi_category_key.field_0._high_category_key._0_4_ =
               *(undefined4 *)&(local_40->_reg_roi_category_key).field_0;
          local_e5._reg_roi_category_key.field_0._high_category_key._4_4_ =
               *(undefined4 *)((int)&(local_40->_reg_roi_category_key).field_0 + 4);
          local_e5._reg_roi_category_key.field_1 = (local_40->_reg_roi_category_key).field_1;
          local_e5.auction_id = local_3d4[0];
          pAVar5 = G_Auction();
          PVar6 = Auction::GetPayType(pAVar5);
          if (PVar6 == PAY_TYPE_POINT) {
            local_e5.commission = 0;
            local_e5.owner_type = local_40->owner_type;
          }
          local_e5.owner_postal_id = 0;
          local_e5.buyer_postal_id = 0;
          pCVar7 = nsl::DataPools::getCommonDataPool
                             (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_30 = nsl::CommonDataPool::createMessage(pCVar7,3);
          local_2c = nsl::Message::getCellFromMessage(local_30);
          nsl::CMsgCell::operator<<(local_2c,&local_e5.super_DBTR_HEADER);
          pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(pNVar8,local_30);
                    /* Unresolved local var: DBTR_AUCTION_DB_DELETE_ITEM dbtr_delete_item@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          tagAUCTION_DB_DELETE_ITEM::tagAUCTION_DB_DELETE_ITEM(&local_65);
          local_65.auction_id = local_3d4[0];
          pCVar7 = nsl::DataPools::getCommonDataPool
                             (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_28 = nsl::CommonDataPool::createMessage(pCVar7,3);
          local_24 = nsl::Message::getCellFromMessage(local_28);
          nsl::CMsgCell::operator<<(local_24,&local_65.super_DBTR_HEADER);
          pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(pNVar8,local_28);
                    /* Unresolved local var: DBTR_GAME_DB_SEND_PACKAGE_BY_EXPIRE
                       dbtr_expire_package@[???]
                       Unresolved local var: char[128] _itemName@[???]
                       Unresolved local var: Message * pNewMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          tagGAME_DB_SEND_PACKAGE_BY_EXPIRE::tagGAME_DB_SEND_PACKAGE_BY_EXPIRE(&local_3c4);
          local_3c4.package_type = '\x02';
          local_3c4.send_to_owner.auction_id = local_3d4[0];
          if (*(int *)&(local_40->_reg_roi_category_key).field_0 != 0 ||
              *(int *)((int)&(local_40->_reg_roi_category_key).field_0 + 4) != 0) {
            GetRandomOptionName(&local_40->item_info,(char *)&local_e5,0x7f);
          }
          if (local_40->buyer_id == -1) {
            local_3c4.b_exist_buyer = false;
          }
          else {
                    /* Unresolved local var: int category@[???] */
            local_3c4.b_exist_buyer = true;
            local_3c = (_Base_ptr)
                       CharacterDictionary::SubAuctionId
                                 (&this->mBidderDic,local_40->buyer_id,local_3d4[0]);
            if (local_3c != (_Base_ptr)0x0) {
              return (int)local_3c;
            }
            local_3c4.send_to_buyer.owner_id = local_40->owner_id;
            local_3c4.send_to_buyer.receiver = local_40->buyer_id;
            local_3c4.send_to_buyer.money = local_40->price;
            local_3c4.send_to_buyer.item_info.seal = false;
            local_3c4.send_to_buyer.item_info.item_id = 0;
            local_3c4.send_to_buyer.item_info.field_2.uniItemAttr = '\0';
            local_3c4.send_to_buyer.item_info.add_info = 0;
            local_3c4.send_to_buyer.item_info.endurance = 0;
            local_3c4.send_to_buyer.item_info.extendInfo = 0;
            local_3c4.send_to_buyer.item_info.abilityType_ = '\0';
            local_3c4.send_to_buyer.item_info.abilityValue_ = 0;
            pSVar9 = Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
            local_18 = (uint)pSVar9->category_;
            pAVar5 = G_Auction();
            PVar6 = Auction::GetPayType(pAVar5);
            if (PVar6 == PAY_TYPE_POINT) {
              bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_18);
              if (bVar2) {
                pacVar10 = (char (*) [255])
                           Auction::GetAvatarColorName
                                     (this->mpAuction,(local_40->item_info).add_info);
              }
              else {
                pacVar10 = LETTER_TEXT + 7;
              }
              Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
              uVar11 = std::string::c_str();
              snprintf(local_3c4.send_to_buyer.letter_text,0xff,LETTER_TEXT[4],uVar11,pacVar10);
            }
            else {
              bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_18);
              if (bVar2) {
                pacVar10 = (char (*) [255])
                           Auction::GetAvatarColorName
                                     (this->mpAuction,(local_40->item_info).add_info);
              }
              else {
                pacVar10 = LETTER_TEXT + 7;
              }
              if (*(int *)&(local_40->_reg_roi_category_key).field_0 == 0 &&
                  *(int *)((int)&(local_40->_reg_roi_category_key).field_0 + 4) == 0) {
                Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
                ptVar13 = (tagAUCTION_DB_EXPIRE_HISTORY *)std::string::c_str();
              }
              else {
                ptVar13 = &local_e5;
              }
              snprintf(local_3c4.send_to_buyer.letter_text,0xff,LETTER_TEXT[4],ptVar13,pacVar10);
            }
            sVar12 = strlen(local_3c4.send_to_buyer.letter_text);
            local_3c4.send_to_buyer.letter_text_length = (ushort)sVar12;
            local_3c4.send_to_buyer.temp_item_id = (local_40->item_info).item_id;
          }
          local_3c4.send_to_owner.owner_id = local_40->owner_id;
          local_3c4.send_to_owner.receiver = local_40->owner_id;
          local_3c4.send_to_owner.money = 0;
          local_3c4.send_to_owner.item_info._0_4_ = *(undefined4 *)&local_40->item_info;
          uVar11 = *(undefined4 *)((int)&(local_40->item_info).item_id + 3);
          local_3c4.send_to_owner.item_info.item_id._3_1_ = (undefined1)uVar11;
          local_3c4.send_to_owner.item_info.field_2.uniItemAttr = (uchar)((uint)uVar11 >> 8);
          local_3c4.send_to_owner.item_info.add_info._0_2_ = (undefined2)((uint)uVar11 >> 0x10);
          uVar11 = *(undefined4 *)((int)&(local_40->item_info).add_info + 2);
          local_3c4.send_to_owner.item_info.add_info._2_2_ = (undefined2)uVar11;
          local_3c4.send_to_owner.item_info.endurance = (ushort)((uint)uVar11 >> 0x10);
          local_3c4.send_to_owner.item_info.extendInfo = (local_40->item_info).extendInfo;
          local_3c4.send_to_owner.item_info.abilityType_ = (local_40->item_info).abilityType_;
          local_3c4.send_to_owner.item_info.abilityValue_ = (local_40->item_info).abilityValue_;
          local_3c4.send_to_owner.item_info.guid_.data_[0] = (local_40->item_info).guid_.data_[0];
          local_3c4.send_to_owner.item_info.guid_.data_._1_4_ =
               *(undefined4 *)((local_40->item_info).guid_.data_ + 1);
          local_3c4.send_to_owner.item_info.guid_.data_._5_4_ =
               *(undefined4 *)((local_40->item_info).guid_.data_ + 5);
          local_3c4.send_to_owner.item_info._28_4_ =
               *(undefined4 *)((local_40->item_info).guid_.data_ + 9);
          local_3c4.send_to_owner.item_info.random_option_.option_._3_4_ =
               *(undefined4 *)((local_40->item_info).random_option_.option_ + 1);
          local_3c4.send_to_owner.item_info.random_option_._7_4_ =
               *(undefined4 *)&(local_40->item_info).random_option_.option_[2].first_value_;
          local_3c4.send_to_owner.item_info._40_4_ =
               *(undefined4 *)&(local_40->item_info).random_option_.modify_option_.first_value_;
          local_3c4.send_to_owner.item_info.reserved_capacity.reserved_1[0] =
               (local_40->item_info).reserved_capacity.reserved_1[0];
          local_3c4.send_to_owner.item_info.reserved_capacity.reserved_1[1] =
               (local_40->item_info).reserved_capacity.reserved_1[1];
          local_3c4.send_to_owner.item_info.reserved_capacity.reserved_2 =
               (local_40->item_info).reserved_capacity.reserved_2;
          pAVar5 = G_Auction();
          PVar6 = Auction::GetPayType(pAVar5);
          if (PVar6 == PAY_TYPE_POINT) {
                    /* Unresolved local var: int category@[???] */
            pSVar9 = Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
            local_14 = (uint)pSVar9->category_;
            bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_14);
            if (bVar2) {
              pacVar10 = (char (*) [255])
                         Auction::GetAvatarColorName
                                   (this->mpAuction,
                                    CONCAT22(local_3c4.send_to_owner.item_info.add_info._2_2_,
                                             (undefined2)local_3c4.send_to_owner.item_info.add_info)
                                   );
            }
            else {
              pacVar10 = LETTER_TEXT + 7;
            }
            Auction::GetItemInfo
                      (this->mpAuction,
                       CONCAT13(local_3c4.send_to_owner.item_info.item_id._3_1_,
                                (undefined3)local_3c4.send_to_owner.item_info.item_id));
            uVar11 = std::string::c_str();
            snprintf(local_3c4.send_to_owner.letter_text,0xff,LETTER_TEXT[5],uVar11,pacVar10);
          }
          else {
                    /* Unresolved local var: int category@[???] */
            pSVar9 = Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
            local_10 = (uint)pSVar9->category_;
            bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_10);
            if (bVar2) {
              pacVar10 = (char (*) [255])
                         Auction::GetAvatarColorName
                                   (this->mpAuction,
                                    CONCAT22(local_3c4.send_to_owner.item_info.add_info._2_2_,
                                             (undefined2)local_3c4.send_to_owner.item_info.add_info)
                                   );
            }
            else {
              pacVar10 = LETTER_TEXT + 7;
            }
            if (*(int *)&(local_40->_reg_roi_category_key).field_0 == 0 &&
                *(int *)((int)&(local_40->_reg_roi_category_key).field_0 + 4) == 0) {
              Auction::GetItemInfo
                        (this->mpAuction,
                         CONCAT13(local_3c4.send_to_owner.item_info.item_id._3_1_,
                                  (undefined3)local_3c4.send_to_owner.item_info.item_id));
              ptVar13 = (tagAUCTION_DB_EXPIRE_HISTORY *)std::string::c_str();
            }
            else {
              ptVar13 = &local_e5;
            }
            snprintf(local_3c4.send_to_owner.letter_text,0xff,LETTER_TEXT[5],ptVar13,pacVar10);
          }
          local_3c4.send_to_owner.temp_item_id =
               CONCAT13(local_3c4.send_to_owner.item_info.item_id._3_1_,
                        (undefined3)local_3c4.send_to_owner.item_info.item_id);
          sVar12 = strlen(local_3c4.send_to_owner.letter_text);
          local_3c4.send_to_owner.letter_text_length = (ushort)sVar12;
          pCVar7 = nsl::DataPools::getCommonDataPool
                             (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_20 = nsl::CommonDataPool::createMessage(pCVar7,3);
          local_1c = nsl::Message::getCellFromMessage(local_20);
          nsl::CMsgCell::operator<<(local_1c,&local_3c4.super_DBTR_HEADER);
          pNVar8 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(pNVar8,local_20);
          local_38 = (_Base_ptr)
                     Auction::CheckItemType(this->mpAuction,(local_40->item_info).item_id);
          if (local_38 == (_Base_ptr)0x2) {
            Auction::UnregistChkMapForAvatarCreature
                      (this->mpAuction,false,(local_40->item_info).add_info);
          }
          else if (local_38 == (_Base_ptr)0x3) {
            Auction::UnregistChkMapForAvatarCreature
                      (this->mpAuction,true,(local_40->item_info).add_info);
          }
          pSVar9 = Auction::GetItemInfo(this->mpAuction,(local_40->item_info).item_id);
          local_34 = (uint)pSVar9->category_;
          bVar2 = Auction::IsAvatarCategory(this->mpAuction,local_34);
          if (bVar2) {
            Auction::SubAvatarEmblemInfo(this->mpAuction,(local_40->item_info).add_info);
            Auction::SubAvatarExpansionInfo(this->mpAuction,(local_40->item_info).add_info);
          }
          pEVar1 = local_40->expire_table_ptr;
          *(undefined4 *)&pEVar1->auction_id = 0;
          *(undefined4 *)((int)&pEVar1->auction_id + 4) = 0;
          nsl::object_pool_by_boost_pool<AuctionDictionary::AuctionDictionaryData,_int,_int,_int>::
          free(&this->mAuctionDicDataPool,local_40);
          local_3c = (_Base_ptr)0x0;
        }
      }
    }
  }
  else {
    local_3c = (_Base_ptr)0x2b;
  }
  return (int)local_3c;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/dictionary/AuctionDictionary.cpp)（约第 1478 行）：

```cpp
int AuctionDictionary::RegistCancel(int ownerId, unsigned long long auctionId)
{
    AuctionDictionaryData* ptr_data = NULL;
    int error_code = 0;
    std::map<unsigned long long, AuctionDictionaryData*>::iterator iter =
        mAuctionDicTable.find(auctionId);
    if (iter != mAuctionDicTable.end())
    {
        ptr_data = iter->second;
    }
    if (ptr_data == NULL)
    {
        return 0x24;
    }
    if (ptr_data->owner_id != ownerId)
    {
        return 0x2b;
    }
    error_code = mpAuction->mSearch.Delete(auctionId);
    if (error_code != 0)
    {
        return error_code;
    }
    error_code = mRegisterDic.SubAuctionId(ptr_data->owner_id, auctionId);
    if (error_code != 0)
    {
        return error_code;
    }
    if (mAuctionDicTable.erase(auctionId) == 0)
    {
        return 0xb;
    }
    else
    {
        tagAUCTION_DB_EXPIRE_HISTORY dbtr_history;
        // ORIG：auction_id 赋值在最前（随后 expire_time/event_type/owner/buyer/price/...）
        dbtr_history.auction_id = auctionId;
        dbtr_history.expire_time = ptr_data->expire_time;
        dbtr_history.event_type = AUCTION_HISTORY_REGIST_CANCEL_EVENT;
        dbtr_history.owner_id = ptr_data->owner_id;
        dbtr_history.buyer_id = ptr_data->buyer_id;
        dbtr_history.price = ptr_data->price;
        dbtr_history.item_info = ptr_data->item_info;
        dbtr_history.unit_price = ptr_data->unit_price;
        dbtr_history._reg_roi_category_key = ptr_data->_reg_roi_category_key;
        if (G_Auction()->GetPayType() == PAY_TYPE_POINT)
        {
            dbtr_history.commission = 0;
            dbtr_history.owner_type = ptr_data->owner_type;
        }
        dbtr_history.owner_postal_id = 0;
        dbtr_history.buyer_postal_id = 0;
        Message* pMsg =
            pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->createMessage(3);
        CMsgCell* pNewCell = pMsg->getCellFromMessage();
        *pNewCell << &dbtr_history;
        pApp->super_Threads.getDBThread(0)->PushTransaction(pMsg);
        tagAUCTION_DB_DELETE_ITEM dbtr_delete_item;
        dbtr_delete_item.auction_id = auctionId;
        pMsg = pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)
                   ->createMessage(3);
        pNewCell = pMsg->getCellFromMessage();
        *pNewCell << &dbtr_delete_item;
        pApp->super_Threads.getDBThread(0)->PushTransaction(pMsg);
        tagGAME_DB_SEND_PACKAGE_BY_EXPIRE dbtr_expire_package;
        // ORIG：先 auction_id 再 package_type
        dbtr_expire_package.send_to_owner.auction_id = auctionId;
        dbtr_expire_package.package_type = AUCTION_HISTORY_REGIST_CANCEL_EVENT;
        char _itemName[128];
        if (ptr_data->_reg_roi_category_key.field_0._high_category_key != 0)
        {
            GetRandomOptionName(&ptr_data->item_info, _itemName, 0x7f);
        }
        // ORIG：大块（b_exist_buyer=true + 买家逻辑）在 then，false 块延迟置尾
        if (ptr_data->buyer_id != -1)
        {
            dbtr_expire_package.b_exist_buyer = true;
            error_code = mBidderDic.SubAuctionId(ptr_data->buyer_id, auctionId);
            if (error_code != 0)
            {
                return error_code;
            }
            dbtr_expire_package.send_to_buyer.owner_id = ptr_data->owner_id;
            dbtr_expire_package.send_to_buyer.receiver = ptr_data->buyer_id;
            dbtr_expire_package.send_to_buyer.money = ptr_data->price;
            dbtr_expire_package.send_to_buyer.item_info.seal = false;
            dbtr_expire_package.send_to_buyer.item_info.item_id = 0;
            dbtr_expire_package.send_to_buyer.item_info.uniItemAttr = '\0';
            dbtr_expire_package.send_to_buyer.item_info.add_info = 0;
            dbtr_expire_package.send_to_buyer.item_info.endurance = 0;
            dbtr_expire_package.send_to_buyer.item_info.extendInfo = 0;
            dbtr_expire_package.send_to_buyer.item_info.abilityType_ = '\0';
            dbtr_expire_package.send_to_buyer.item_info.abilityValue_ = 0;
            unsigned int category = (unsigned int)
                mpAuction->GetItemInfo(ptr_data->item_info.item_id)->category_;
            if (G_Auction()->GetPayType() == PAY_TYPE_POINT)
            {
                snprintf(dbtr_expire_package.send_to_buyer.letter_text, 0xff,
                         LETTER_TEXT[4],
                         mpAuction->GetItemInfo(ptr_data->item_info.item_id)
                             ->sName_.c_str(),
                         mpAuction->IsAvatarCategory(category)
                             ? mpAuction->GetAvatarColorName(
                                   ptr_data->item_info.add_info)
                             : LETTER_TEXT[7]);
            }
            else
            {
                snprintf(dbtr_expire_package.send_to_buyer.letter_text, 0xff,
                         LETTER_TEXT[4],
                         ptr_data->_reg_roi_category_key.field_0._high_category_key != 0
                             ? _itemName
                             : (char*)mpAuction->GetItemInfo(
                                   ptr_data->item_info.item_id)->sName_.c_str(),
                         mpAuction->IsAvatarCategory(category)
                             ? mpAuction->GetAvatarColorName(
                                   ptr_data->item_info.add_info)
                             : LETTER_TEXT[7]);
            }
            dbtr_expire_package.send_to_buyer.letter_text_length =
                (unsigned short)strlen(
                    dbtr_expire_package.send_to_buyer.letter_text);
            dbtr_expire_package.send_to_buyer.temp_item_id =
                ptr_data->item_info.item_id;
        }
        else
        {
            dbtr_expire_package.b_exist_buyer = false;
        }
        dbtr_expire_package.send_to_owner.owner_id = ptr_data->owner_id;
        dbtr_expire_package.send_to_owner.receiver = ptr_data->owner_id;
        dbtr_expire_package.send_to_owner.money = 0;
        dbtr_expire_package.send_to_owner.item_info = ptr_data->item_info;
        if (G_Auction()->GetPayType() == PAY_TYPE_POINT)
        {
            // ORIG：category 用 ptr_data 的 item_id，sName 用 dbtr 副本的 item_id
            unsigned int category = (unsigned int)
                mpAuction->GetItemInfo(ptr_data->item_info.item_id)->category_;
            snprintf(dbtr_expire_package.send_to_owner.letter_text, 0xff,
                     LETTER_TEXT[5],
                     mpAuction->GetItemInfo(
                         dbtr_expire_package.send_to_owner.item_info.item_id)
                         ->sName_.c_str(),
                     mpAuction->IsAvatarCategory(category)
                         ? mpAuction->GetAvatarColorName(
                               dbtr_expire_package.send_to_owner.item_info.add_info)
                         : LETTER_TEXT[7]);
        }
        else
        {
            unsigned int category = (unsigned int)
                mpAuction->GetItemInfo(ptr_data->item_info.item_id)->category_;
            snprintf(dbtr_expire_package.send_to_owner.letter_text, 0xff,
                     LETTER_TEXT[5],
                     ptr_data->_reg_roi_category_key.field_0._high_category_key != 0
                         ? _itemName
                         : (char*)mpAuction->GetItemInfo(
                               dbtr_expire_package.send_to_owner.item_info
                                   .item_id)
                               ->sName_.c_str(),
                     mpAuction->IsAvatarCategory(category)
                         ? mpAuction->GetAvatarColorName(
                               dbtr_expire_package.send_to_owner.item_info.add_info)
                         : LETTER_TEXT[7]);
        }
        dbtr_expire_package.send_to_owner.temp_item_id =
            dbtr_expire_package.send_to_owner.item_info.item_id;
        dbtr_expire_package.send_to_owner.letter_text_length =
            (unsigned short)strlen(
                dbtr_expire_package.send_to_owner.letter_text);
        {
            Message* pNewMsg =
                pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)
                    ->createMessage(3);
            CMsgCell* pNewCell = pNewMsg->getCellFromMessage();
            *pNewCell << &dbtr_expire_package;
            pApp->super_Threads.getDBThread(0)->PushTransaction(pNewMsg);
        }
        int item_type =
            mpAuction->CheckItemType(ptr_data->item_info.item_id);
        // ORIG 为 switch：case 序 PLAIN/CREATURE/AVATAR，gcc 4.4 -O0 反序
        // 发射 cmp 2/3/1（switch 的连续比较 + 尾 jmp，与 if/else-if 的
        // jne 反转链形态不同）
        switch (item_type)
        {
        case AUCTION_ITEM_TYPE_PLAIN:
            break;
        case AUCTION_ITEM_TYPE_CREATURE:
            mpAuction->UnregistChkMapForAvatarCreature(
                false, ptr_data->item_info.add_info);
            break;
        case AUCTION_ITEM_TYPE_AVATAR:
            mpAuction->UnregistChkMapForAvatarCreature(
                true, ptr_data->item_info.add_info);
            break;
        default:
            break;
        }
        int item_category = (int)
            mpAuction->GetItemInfo(ptr_data->item_info.item_id)->category_;
        if (mpAuction->IsAvatarCategory(item_category))
        {
            mpAuction->SubAvatarEmblemInfo(ptr_data->item_info.add_info);
            mpAuction->SubAvatarExpansionInfo(ptr_data->item_info.add_info);
        }
        ptr_data->expire_table_ptr->auction_id = 0;
        mAuctionDicDataPool.free(ptr_data);
    }
    // ORIG：尾部直接返回 0（mov $0x0,%eax），无 error_code=0 赋值
    return 0;
}
```
