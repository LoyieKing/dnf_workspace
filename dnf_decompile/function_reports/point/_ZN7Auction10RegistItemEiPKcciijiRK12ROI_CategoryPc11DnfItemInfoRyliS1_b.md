# _ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b

`Auction::RegistItem(int, char const*, char, int, int, unsigned int, int, ROI_Category const&, char*, DnfItemInfo, unsigned long long&, long, int, char const*, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x805a1ae` | `0x5b5` | `0x804e8a0` | `0x5b5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,387 +1,382 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x15c,%esp
 mov    0x14(%ebp),%edx
 mov    0x78(%ebp),%eax
 mov    %dl,-0x11c(%ebp)
 mov    %al,-0x120(%ebp)
 movl   $0x0,-0x38(%ebp)
 movl   $0x0,-0x34(%ebp)
 mov    0x31(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK7Auction11GetItemInfoEm>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x51>
 mov    $0x0,%eax
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction10GetPayTypeEv>
 cmp    $0x1,%eax
 jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x76>
 movzbl -0x120(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x76>
 mov    $0x1,%eax
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x7b>
 mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x125>
+mov    %al,-0x2d(%ebp)
+cmpb   $0x0,-0x2d(%ebp)
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x124>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14ROI_AverageKeyC1Ev>
-movb   $0x0,-0x29(%ebp)
+movb   $0x0,-0x26(%ebp)
 movl   $0x0,-0x54(%ebp)
-movzbl -0x29(%ebp),%eax
+movzbl -0x26(%ebp),%eax
 movzbl %al,%esi
 lea    0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo15GetUpgradeValueEv>
 movzbl %al,%ebx
 lea    0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK11DnfItemInfo9GetItemIdEv>
 lea    -0x54(%ebp),%edx
 mov    %edx,0x14(%esp)
 mov    %esi,0x10(%esp)
 lea    -0x50(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction15GetAveragePriceEmhRK14ROI_AverageKeyhPi>
 mov    -0x54(%ebp),%eax
 cmp    $0xffffffff,%eax
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x125>
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x124>
 mov    -0x54(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x125>
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x124>
 fildl  0x1c(%ebp)
 mov    -0x54(%ebp),%eax
 mov    %eax,-0x124(%ebp)
 fildl  -0x124(%ebp)
 fdivrp %st,%st(1)
-fstpl  -0x28(%ebp)
-fldl   -0x28(%ebp)
-fldl   &data#fd0d6377(.rodata)
+fldl   &data#47fbacf6(.rodata)
 fucompp
 fnstsw %ax
 test   $0x45,%ah
 sete   %al
 test   %al,%al
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x125>
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x124>
 mov    $0x37,%eax
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
 mov    0x31(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction13CheckItemTypeEm>
-mov    %eax,-0x30(%ebp)
-movb   $0x1,-0x2b(%ebp)
-mov    -0x30(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+movb   $0x1,-0x27(%ebp)
+mov    -0x2c(%ebp),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x152>
-cmp    $0x3,%eax
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x171>
-cmp    $0x1,%eax
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1ba>
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x190>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x164>
 mov    0x36(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction29RegistChkMapForAvatarCreatureEbi>
-mov    %al,-0x2b(%ebp)
+mov    %al,-0x27(%ebp)
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1bb>
+mov    -0x2c(%ebp),%eax
+cmp    $0x3,%eax
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x18b>
 mov    0x36(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction29RegistChkMapForAvatarCreatureEbi>
-mov    %al,-0x2b(%ebp)
+mov    %al,-0x27(%ebp)
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1bb>
-movb   $0x0,-0x2b(%ebp)
+mov    -0x2c(%ebp),%eax
+cmp    $0x1,%eax
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1bb>
+movb   $0x0,-0x27(%ebp)
 mov    0x31(%ebp),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 movl   $"ERROR: Auction::RegistItem(), item_type check unknown, item_id : %d",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1bb>
-nop
-movzbl -0x2b(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1d0>
-mov    $0x23,%eax
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
+cmpb   $0x1,-0x27(%ebp)
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5a0>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction21GetNowRegistedItemNumEi>
 mov    %eax,-0x34(%ebp)
 cmpb   $0x1,-0x11c(%ebp)
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1fe>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x1f3>
 cmpl   $0x1d,-0x34(%ebp)
-jle    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x20e>
+jle    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x203>
 mov    $0x1e,%eax
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
 cmpl   $0x9,-0x34(%ebp)
-jle    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x20e>
+jle    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x203>
 mov    $0x1e,%eax
 jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
-movb   $0x0,-0x2a(%ebp)
+movb   $0x0,-0x25(%ebp)
 mov    0x68(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x235>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x22a>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16getNextAuctionIdEv>
 mov    0x68(%ebp),%ecx
 mov    %eax,(%ecx)
 mov    %edx,0x4(%ecx)
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x254>
-movb   $0x1,-0x2a(%ebp)
+jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x249>
+movb   $0x1,-0x25(%ebp)
 mov    0x68(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction17checkMaxAuctionIdEy>
 mov    0x6c(%ebp),%eax
 test   %eax,%eax
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2cb>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2c0>
 lea    0x6c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 cmpl   $0xffffffff,0xc(%ebp)
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x27d>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x272>
 mov    0x8(%ebp),%eax
 mov    0x50(%eax),%edx
 mov    0x6c(%ebp),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,0x6c(%ebp)
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2cb>
+jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2c0>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 cmp    $0xc,%eax
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2bc>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2b1>
 movl   $&data#cc9f569d(.rodata),0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2bc>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2b1>
 mov    0x8(%ebp),%eax
 mov    0x50(%eax),%edx
 mov    0x6c(%ebp),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,0x6c(%ebp)
 movl   $0xffffffff,0xc(%ebp)
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2cb>
+jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x2c0>
 mov    0x8(%ebp),%eax
 mov    0x4c(%eax),%edx
 mov    0x6c(%ebp),%eax
 lea    (%edx,%eax,1),%eax
 mov    %eax,0x6c(%ebp)
 movsbl -0x11c(%ebp),%ebx
 mov    0x6c(%ebp),%ecx
 mov    0x68(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    0x8(%ebp),%esi
 lea    0x54(%esi),%edi
 mov    0x2c(%ebp),%esi
 mov    %esi,0x3c(%esp)
 mov    %ebx,0x38(%esp)
 mov    0x28(%ebp),%ebx
 mov    %ebx,0x34(%esp)
 mov    0x74(%ebp),%ebx
 mov    %ebx,0x30(%esp)
 mov    0x70(%ebp),%ebx
 mov    %ebx,0x2c(%esp)
 mov    %ecx,0x28(%esp)
 lea    0x30(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    0x24(%ebp),%ecx
 mov    %ecx,0x20(%esp)
 mov    0x20(%ebp),%ecx
 mov    %ecx,0x1c(%esp)
 mov    0x1c(%ebp),%ecx
 mov    %ecx,0x18(%esp)
 mov    0x18(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    0x10(%ebp),%ecx
 mov    %ecx,0x10(%esp)
 mov    0xc(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 mov    %edi,(%esp)
 call   <T> <_ZN17AuctionDictionary10RegistItemEyiPKciijiR11DnfItemInfoliS1_RK12ROI_CategorycPc>
 mov    %eax,-0x38(%ebp)
 cmpl   $0x0,-0x38(%ebp)
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x359>
-mov    -0x38(%ebp),%eax
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5aa>
-movzbl -0x2a(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5a5>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5a7>
+cmpb   $0x1,-0x25(%ebp)
+je     <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x597>
 mov    0x8(%ebp),%eax
 add    $0x41d8,%eax
 mov    %eax,0x4(%esp)
 lea    0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z16PrintDnfItemInfoR11DnfItemInfoPc>
 mov    0x8(%ebp),%eax
 lea    0x41d8(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $"AuctionDictionary::RegistItem(), before DB insert, o_id : %d , item : %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 lea    -0x109(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25tagAUCTION_DB_REGIST_ITEMC1Ev>
 mov    0x68(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    (%eax),%eax
 mov    %eax,-0xf4(%ebp)
 mov    %edx,-0xf0(%ebp)
 mov    0x6c(%ebp),%eax
 mov    %eax,-0xec(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,-0xe8(%ebp)
 cmpl   $0xffffffff,0xc(%ebp)
-jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x40d>
+jne    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x3f9>
 movl   $0xd,0x8(%esp)
 movl   $&SENDER_NPC_NAME,0x4(%esp)
 lea    -0x109(%ebp),%eax
 add    $0x25,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
-jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x42d>
+jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x419>
 movl   $0xc,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x109(%ebp),%eax
 add    $0x25,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 movl   $0xffffffff,-0xd7(%ebp)
 movb   $0x0,-0xd3(%ebp)
 mov    0x18(%ebp),%eax
 mov    %eax,-0xc6(%ebp)
 mov    0x1c(%ebp),%eax
 mov    %eax,-0xc2(%ebp)
 mov    0x30(%ebp),%eax
 mov    %eax,-0xbe(%ebp)
 mov    0x34(%ebp),%eax
 mov    %eax,-0xba(%ebp)
 mov    0x38(%ebp),%eax
 mov    %eax,-0xb6(%ebp)
 mov    0x3c(%ebp),%eax
 mov    %eax,-0xb2(%ebp)
 mov    0x40(%ebp),%eax
 mov    %eax,-0xae(%ebp)
 mov    0x44(%ebp),%eax
 mov    %eax,-0xaa(%ebp)
 mov    0x48(%ebp),%eax
 mov    %eax,-0xa6(%ebp)
 mov    0x4c(%ebp),%eax
 mov    %eax,-0xa2(%ebp)
 mov    0x50(%ebp),%eax
 mov    %eax,-0x9e(%ebp)
 mov    0x54(%ebp),%eax
 mov    %eax,-0x9a(%ebp)
 mov    0x58(%ebp),%eax
 mov    %eax,-0x96(%ebp)
 mov    0x5c(%ebp),%eax
 mov    %eax,-0x92(%ebp)
 mov    0x60(%ebp),%eax
 mov    %eax,-0x8e(%ebp)
 movzbl 0x64(%ebp),%eax
 mov    %al,-0x8a(%ebp)
-movzbl -0x11c(%ebp),%eax
-mov    %al,-0x89(%ebp)
 mov    0x20(%ebp),%eax
 mov    %eax,-0x88(%ebp)
 mov    0x24(%ebp),%eax
 mov    %eax,-0x84(%ebp)
 mov    0x28(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,-0x80(%ebp)
 mov    0x4(%eax),%edx
 mov    %edx,-0x7c(%ebp)
 mov    0x8(%eax),%eax
 mov    %eax,-0x78(%ebp)
+movzbl -0x11c(%ebp),%eax
+mov    %al,-0x89(%ebp)
 mov    0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,0x8(%esp)
 mov    0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x109(%ebp),%eax
 add    $0x95,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    $0xfffffffc,%eax
 mov    %gs:(%eax),%eax
 mov    &_ZN3nsl4pAppE,%edx
 add    $0x5c,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN3nsl9DataPools17getCommonDataPoolEi>
+mov    %eax,-0x24(%ebp)
 movl   $0x3,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14CommonDataPool13createMessageEi>
 mov    %eax,-0x20(%ebp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
 mov    %eax,-0x1c(%ebp)
 lea    -0x109(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_11DBTR_HEADERE>
 mov    &_ZN3nsl4pAppE,%eax
 add    $0x18,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Threads11getDBThreadEi>
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11NSLDBThread15PushTransactionEPNS_7MessageE>
-mov    $0x0,%eax
+movl   $0x0,-0x38(%ebp)
+jmp    <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b+0x5a7>
+movl   $0x23,-0x38(%ebp)
+mov    -0x38(%ebp),%eax
 add    $0x15c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: int RegistItem(Auction * this, int ownerId, char * ownerName, char
   userType, int price, int instantPrice, uint black_point, int unitPrice, ROI_Category *
   _roi_category_key, char * owner_nexon_id, DnfItemInfo itemInfo, __int64 * auctionId, long
   expireTime, int buyerId, char * buyerName, bool isLoad) */

int __thiscall
Auction::_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b
          (Auction *this,int ownerId,char *ownerName,char userType,int price,int instantPrice,
          uint black_point,int unitPrice,ROI_Category *_roi_category_key,char *owner_nexon_id,
          DnfItemInfo itemInfo,__int64 *auctionId,long expireTime,int buyerId,char *buyerName,
          bool isLoad)

{
  bool bVar1;
  undefined4 uVar2;
  uchar itemUpgradeValue;
  STItemInfo *pSVar3;
  PAY_TYPE PVar4;
  ulong itemId;
  TraceLog *pTVar5;
  int iVar6;
  size_t sVar7;
  CommonDataPool *this_00;
  NSLDBThread *this_01;
  int in_GS_OFFSET;
  __int64 _Var8;
  undefined3 in_stack_00000075;
  tagAUCTION_DB_REGIST_ITEM local_10d;
  int local_58;
  ROI_AverageKey local_54;
  int local_3c;
  int local_38;
  EnumAuctionItemType local_34;
  char local_2f;
  char local_2e;
  undefined1 local_2d;
  double local_2c;
  Message *local_24;
  CMsgCell *local_20;
  
  bVar1 = isLoad;
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: int now_registed_item_num@[???]
                       Unresolved local var: EnumAuctionItemType item_type@[???]
                       Unresolved local var: bool is_available_item@[???]
                       Unresolved local var: bool db_loaded@[???] */
  local_3c = 0;
  local_38 = 0;
  pSVar3 = GetItemInfo(this,itemInfo.item_id);
  if (pSVar3 == (STItemInfo *)0x0) {
    local_3c = 0;
  }
  else {
    PVar4 = GetPayType(this);
    if ((PVar4 != PAY_TYPE_POINT) || (bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* Unresolved local var: ROI_AverageKey roiAverageKey@[???]
                       Unresolved local var: char itemRefineValue@[???]
                       Unresolved local var: int AvePrice@[???] */
      ROI_AverageKey::ROI_AverageKey(&local_54);
      local_2d = 0;
      local_58 = 0;
      itemUpgradeValue = DnfItemInfo::GetUpgradeValue(&itemInfo);
      itemId = DnfItemInfo::GetItemId(&itemInfo);
      GetAveragePrice(this,itemId,itemUpgradeValue,&local_54,'\0',&local_58);
                    /* Unresolved local var: double PriceRate@[???] */
      if (((local_58 != -1) && (local_58 != 0)) &&
         (local_2c = (double)instantPrice / (double)local_58, local_2c < _DAT_08152f90)) {
        return 0x37;
      }
    }
    local_34 = CheckItemType(this,CONCAT13(itemInfo.item_id._3_1_,(undefined3)itemInfo.item_id));
    local_2f = '\x01';
    if (local_34 == AUCTION_ITEM_TYPE_CREATURE) {
      local_2f = RegistChkMapForAvatarCreature
                           (this,false,
                            CONCAT22(itemInfo.add_info._2_2_,(undefined2)itemInfo.add_info));
    }
    else if (local_34 == AUCTION_ITEM_TYPE_AVATAR) {
      local_2f = RegistChkMapForAvatarCreature
                           (this,true,
                            CONCAT22(itemInfo.add_info._2_2_,(undefined2)itemInfo.add_info));
    }
    else if (local_34 != AUCTION_ITEM_TYPE_PLAIN) {
      local_2f = '\0';
      uVar2 = CONCAT13(itemInfo.item_id._3_1_,(undefined3)itemInfo.item_id);
      pTVar5 = nsl::G_TraceLog();
      nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                (pTVar5,7,"ERROR: Auction::RegistItem(), item_type check unknown, item_id : %d",
                 uVar2);
    }
    if (local_2f == '\x01') {
      local_38 = GetNowRegistedItemNum(this,ownerId);
      if (userType == '\x01') {
        if (0x1d < local_38) {
          return 0x1e;
        }
      }
      else if (9 < local_38) {
        return 0x1e;
      }
      local_2e = '\0';
      if ((int)*auctionId == 0 && *(int *)((int)auctionId + 4) == 0) {
        _Var8 = getNextAuctionId(this);
        *auctionId = _Var8;
      }
      else {
        local_2e = '\x01';
        checkMaxAuctionId(this,*auctionId);
      }
      if (expireTime == 0) {
        time(&expireTime);
        if (ownerId == -1) {
          expireTime = this->mSYSTEM_AUCTION_EXPIRE_TIME + expireTime;
        }
        else {
          sVar7 = strlen(ownerName);
          if ((sVar7 == 0xc) && (iVar6 = strcmp(ownerName,&DAT_081521e4), iVar6 == 0)) {
            expireTime = this->mSYSTEM_AUCTION_EXPIRE_TIME + expireTime;
            ownerId = -1;
          }
          else {
            expireTime = this->mAUCTION_EXPIRE_TIME + expireTime;
          }
        }
      }
      local_3c = AuctionDictionary::
                 _ZN17AuctionDictionary10RegistItemEyiPKciijiR11DnfItemInfoliS1_RK12ROI_CategorycPc
                           (&this->mAuctionDic,*auctionId,ownerId,ownerName,price,instantPrice,
                            black_point,unitPrice,&itemInfo,expireTime,buyerId,buyerName,
                            _roi_category_key,userType,owner_nexon_id);
      if (local_3c == 0) {
        if (local_2e != '\x01') {
                    /* Unresolved local var: DBTR_AUCTION_DB_REGIST_ITEM dbtr_regist_item@[???]
                       Unresolved local var: Message * pMsg@[???]
                       Unresolved local var: CMsgCell * pNewCell@[???] */
          PrintDnfItemInfo(&itemInfo,this->mpSzBuffer);
          pTVar5 = nsl::G_TraceLog();
          nsl::TraceLog::_ZN3nsl8TraceLog6sysLogEiPKcz
                    (pTVar5,5,
                     "AuctionDictionary::RegistItem(), before DB insert, o_id : %d , item : %s",
                     ownerId,this->mpSzBuffer);
          tagAUCTION_DB_REGIST_ITEM::tagAUCTION_DB_REGIST_ITEM(&local_10d);
          local_10d.auction_id._4_4_ = *(undefined4 *)((int)auctionId + 4);
          local_10d.auction_id._0_4_ = (undefined4)*auctionId;
          local_10d.expire_time = expireTime;
          local_10d.owner_id = ownerId;
          if (ownerId == -1) {
            strncpy(local_10d.owner_name,SENDER_NPC_NAME,0xd);
          }
          else {
            strncpy(local_10d.owner_name,ownerName,0xc);
          }
          local_10d.buyer_id = -1;
          local_10d.buyer_name[0] = '\0';
          local_10d.price = price;
          local_10d.instant_price = instantPrice;
          local_10d.item_info._0_4_ = itemInfo._0_4_;
          local_10d.item_info.field_2.field_0 = itemInfo.field_2.field_0;
          local_10d.item_info.item_id._3_1_ = itemInfo.item_id._3_1_;
          local_10d.item_info.add_info._0_2_ = (undefined2)itemInfo.add_info;
          local_10d.item_info.endurance = itemInfo.endurance;
          local_10d.item_info.add_info._2_2_ = itemInfo.add_info._2_2_;
          local_10d.item_info.extendInfo = itemInfo.extendInfo;
          local_10d.item_info.abilityType_ = itemInfo.abilityType_;
          local_10d.item_info.abilityValue_ = itemInfo.abilityValue_;
          local_10d.item_info.guid_.data_[0] = itemInfo.guid_.data_[0];
          local_10d.item_info.guid_.data_[1] = itemInfo.guid_.data_[1];
          local_10d.item_info.guid_.data_[2] = itemInfo.guid_.data_[2];
          local_10d.item_info.guid_.data_[3] = itemInfo.guid_.data_[3];
          local_10d.item_info.guid_.data_[4] = itemInfo.guid_.data_[4];
          local_10d.item_info.guid_.data_[5] = itemInfo.guid_.data_[5];
          local_10d.item_info.guid_.data_[6] = itemInfo.guid_.data_[6];
          local_10d.item_info.guid_.data_[7] = itemInfo.guid_.data_[7];
          local_10d.item_info.guid_.data_[8] = itemInfo.guid_.data_[8];
          local_10d.item_info.guid_.data_[9] = itemInfo.guid_.data_[9];
          local_10d.item_info.random_option_.option_[0] = itemInfo.random_option_.option_[0];
          local_10d.item_info.random_option_.option_[1] = itemInfo.random_option_.option_[1];
          local_10d.item_info.random_option_.option_[2].option_index_ =
               itemInfo.random_option_.option_[2].option_index_;
          local_10d.item_info.random_option_.option_[2].first_value_ =
               itemInfo.random_option_.option_[2].first_value_;
          local_10d.item_info.random_option_.option_[2].second_value_ =
               itemInfo.random_option_.option_[2].second_value_;
          local_10d.item_info.random_option_.seed_.field_0 = itemInfo.random_option_.seed_.field_0;
          local_10d.item_info.random_option_.modify_option_.option_index_ =
               itemInfo.random_option_.modify_option_.option_index_;
          local_10d.item_info.random_option_.modify_option_.first_value_ =
               itemInfo.random_option_.modify_option_.first_value_;
          local_10d.item_info.random_option_.modify_option_.second_value_ =
               itemInfo.random_option_.modify_option_.second_value_;
          local_10d.item_info.random_option_.modify_seed_.field_0 =
               itemInfo.random_option_.modify_seed_.field_0;
          local_10d.item_info.separate_info.field_0 = itemInfo.separate_info.field_0;
          local_10d.item_info.reserved_capacity.reserved_1[0] =
               itemInfo.reserved_capacity.reserved_1[0];
          local_10d.item_info.reserved_capacity.reserved_1[1] =
               itemInfo.reserved_capacity.reserved_1[1];
          local_10d.item_info.reserved_capacity.reserved_2 = itemInfo.reserved_capacity.reserved_2;
          local_10d.black_point = black_point;
          local_10d.unit_price = unitPrice;
          local_10d._reg_roi_category_key.field_0._high_category_key._0_4_ =
               *(undefined4 *)&_roi_category_key->field_0;
          local_10d._reg_roi_category_key.field_0._high_category_key._4_4_ =
               *(undefined4 *)((int)&_roi_category_key->field_0 + 4);
          local_10d._reg_roi_category_key.field_1 = _roi_category_key->field_1;
          local_10d.owner_type = userType;
          sVar7 = strlen(owner_nexon_id);
          strncpy(local_10d.owner_nexon_id,owner_nexon_id,sVar7);
          this_00 = nsl::DataPools::getCommonDataPool
                              (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
          local_24 = nsl::CommonDataPool::_ZN3nsl14CommonDataPool13createMessageEi(this_00,3);
          local_20 = nsl::Message::getCellFromMessage(local_24);
          nsl::CMsgCell::operator<<(local_20,&local_10d.super_DBTR_HEADER);
          this_01 = nsl::Threads::getDBThread(&nsl::pApp->super_Threads,0);
          nsl::NSLDBThread::PushTransaction(this_01,local_24);
        }
        local_3c = 0;
      }
    }
    else {
      local_3c = 0x23;
    }
  }
  return local_3c;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/auction/Auction.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
