# _ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE

`HandlerFor_GA_::onAUCTION_REGIST_ITEM_GA(nsl::CMsgCell*, nsl::TCPUser*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80747aa` | `0x5c2` | `0x8074846` | `0x5d3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,372 +1,374 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x12c,%esp
-movl   $0x0,-0x3c(%ebp)
+movl   $0x0,-0x44(%ebp)
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"In  onAUCTION_REGIST_ITEM_GA",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14HandlerFor_GA_12IsGoldServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x69>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Out onAUCTION_REGIST_ITEM_GA:this is not gold server",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x1,%eax
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5b7>
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5c8>
 call   <T> <_Z21G_StatisticsCollectorv>
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN19StatisticsCollector9IncTryCntEi>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell9GetPacketEv>
-mov    %eax,-0x38(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x40(%ebp),%eax
 add    $0x99,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12ROI_Category5_sortEv>
 mov    0x8(%ebp),%eax
 lea    0x200c(%eax),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 add    $0x30,%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_Z16PrintDnfItemInfoR11DnfItemInfoPc>
 mov    0x8(%ebp),%eax
 lea    0x200c(%eax),%esi
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"onAUCTION_REGIST_ITEM_GA(), before RegistItem(), o_id : %d , item : %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-lea    -0x8f(%ebp),%eax
+lea    -0x97(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26PCK_AUCTION_LOG_MESSAGE_AGC1Ev>
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x7d(%ebp)
-movl   $0x0,-0x78(%ebp)
-movl   $0x0,-0x74(%ebp)
-movb   $0x0,-0x79(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x85(%ebp)
+movl   $0x0,-0x80(%ebp)
+movl   $0x0,-0x7c(%ebp)
+movb   $0x0,-0x81(%ebp)
+mov    -0x40(%ebp),%eax
 mov    0x16(%eax),%eax
+mov    %eax,-0x78(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x28(%eax),%eax
+mov    %eax,-0x74(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x31(%eax),%eax
 mov    %eax,-0x70(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0x28(%eax),%eax
-mov    %eax,-0x6c(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0x31(%eax),%eax
-mov    %eax,-0x68(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 movzbl 0x35(%eax),%eax
-mov    %al,-0x64(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %al,-0x6c(%ebp)
+mov    -0x40(%ebp),%eax
 mov    0x36(%eax),%eax
-mov    %eax,-0x63(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x6b(%ebp)
+mov    -0x40(%ebp),%eax
 movzwl 0x3a(%eax),%eax
-mov    %ax,-0x5f(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %ax,-0x67(%ebp)
+mov    -0x40(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x5d(%ebp)
-mov    -0x38(%ebp),%eax
+mov    %eax,-0x65(%ebp)
+mov    -0x40(%ebp),%eax
 add    $0xa5,%eax
 mov    %eax,-0xb0(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 add    $0x99,%eax
 mov    %eax,-0xac(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x95(%eax),%edi
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x87(%eax),%eax
 mov    %eax,-0xa8(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x2c(%eax),%eax
 mov    %eax,-0xa4(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x28(%eax),%eax
 mov    %eax,-0xa0(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 movzbl 0x27(%eax),%eax
 movsbl %al,%esi
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 add    $0x1a,%eax
 mov    %eax,-0x9c(%ebp)
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %eax,%ecx
 movl   $0x0,0x70(%esp)
 movl   $0x0,0x6c(%esp)
 movl   $0xffffffff,0x68(%esp)
 movl   $0x0,0x64(%esp)
-lea    -0x8f(%ebp),%eax
+lea    -0x97(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,0x60(%esp)
-mov    -0x38(%ebp),%edx
+mov    -0x40(%ebp),%edx
 mov    0x30(%edx),%eax
 mov    %eax,0x28(%esp)
 mov    0x34(%edx),%eax
 mov    %eax,0x2c(%esp)
 mov    0x38(%edx),%eax
 mov    %eax,0x30(%esp)
 mov    0x3c(%edx),%eax
 mov    %eax,0x34(%esp)
 mov    0x40(%edx),%eax
 mov    %eax,0x38(%esp)
 mov    0x44(%edx),%eax
 mov    %eax,0x3c(%esp)
 mov    0x48(%edx),%eax
 mov    %eax,0x40(%esp)
 mov    0x4c(%edx),%eax
 mov    %eax,0x44(%esp)
 mov    0x50(%edx),%eax
 mov    %eax,0x48(%esp)
 mov    0x54(%edx),%eax
 mov    %eax,0x4c(%esp)
 mov    0x58(%edx),%eax
 mov    %eax,0x50(%esp)
 mov    0x5c(%edx),%eax
 mov    %eax,0x54(%esp)
 mov    0x60(%edx),%eax
 mov    %eax,0x58(%esp)
 movzbl 0x64(%edx),%eax
 mov    %al,0x5c(%esp)
 mov    -0xb0(%ebp),%eax
 mov    %eax,0x24(%esp)
 mov    -0xac(%ebp),%eax
 mov    %eax,0x20(%esp)
 mov    %edi,0x1c(%esp)
 mov    -0xa8(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    -0xa4(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    -0xa0(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %esi,0xc(%esp)
 mov    -0x9c(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN7Auction10RegistItemEiPKcciijiRK12ROI_CategoryPc11DnfItemInfoRyliS1_b>
-mov    %eax,-0x3c(%ebp)
-lea    -0x58(%ebp),%eax
+mov    %eax,-0x44(%ebp)
+lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28PCK_AUCTION_REGIST_RESULT_AGC1Ev>
+mov    -0x40(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,-0x4e(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,-0x4a(%ebp)
+movl   $0xffffffff,-0x3c(%ebp)
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x335>
+movb   $0x0,-0x46(%ebp)
+movb   $0x1,-0x81(%ebp)
+mov    -0x44(%ebp),%ebx
+call   <T> <_Z21G_StatisticsCollectorv>
+mov    %ebx,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
+mov    -0x44(%ebp),%ebx
+call   <T> <_Z9G_Auctionv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN7Auction16TransErrToReasonEi>
+mov    %al,-0x45(%ebp)
+mov    -0x44(%ebp),%ebx
+call   <T> <_Z9G_Auctionv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN7Auction16TransErrToReasonEi>
+mov    %al,-0x61(%ebp)
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3c3>
+movb   $0x1,-0x46(%ebp)
+mov    -0x40(%ebp),%eax
+mov    0x31(%eax),%ebx
+call   <T> <_Z9G_Auctionv>
+mov    %ebx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZNK7Auction11GetItemInfoEm>
+mov    %eax,-0x38(%ebp)
+cmpl   $0x0,-0x38(%ebp)
+je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3c3>
 mov    -0x38(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x46(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x42(%ebp)
-movl   $0xffffffff,-0x34(%ebp)
-cmpl   $0x0,-0x3c(%ebp)
-je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x32c>
-movb   $0x0,-0x3e(%ebp)
-movb   $0x1,-0x79(%ebp)
-call   <T> <_Z21G_StatisticsCollectorv>
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN19StatisticsCollector10IncFailCntEii>
-call   <T> <_Z9G_Auctionv>
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN7Auction16TransErrToReasonEi>
-mov    %al,-0x3d(%ebp)
-call   <T> <_Z9G_Auctionv>
-mov    -0x3c(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN7Auction16TransErrToReasonEi>
-mov    %al,-0x59(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3ba>
-movb   $0x1,-0x3e(%ebp)
-mov    -0x38(%ebp),%eax
-mov    0x31(%eax),%ebx
-call   <T> <_Z9G_Auctionv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNK7Auction11GetItemInfoEm>
-mov    %eax,-0x30(%ebp)
-cmpl   $0x0,-0x30(%ebp)
-je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3ba>
-mov    -0x30(%ebp),%eax
 movzwl 0x20(%eax),%eax
 movzwl %ax,%eax
-mov    %eax,-0x34(%ebp)
-call   <T> <_Z9G_Auctionv>
-mov    -0x34(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0x3c(%ebp)
+mov    -0x3c(%ebp),%ebx
+call   <T> <_Z9G_Auctionv>
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction16IsAvatarCategoryEi>
 test   %al,%al
-je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3ba>
-mov    -0x38(%ebp),%eax
+je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x3c3>
+mov    -0x40(%ebp),%eax
 lea    0x65(%eax),%esi
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x36(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction19AddAvatarEmblemInfoEiPK20stAvatarEmblemInfo_t>
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 lea    0x83(%eax),%esi
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x36(%eax),%ebx
 call   <T> <_Z9G_Auctionv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7Auction22AddAvatarExpansionInfoEiPK23stAvatarExpansionInfo_t>
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
-mov    %eax,-0x2c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x28(%ebp)
-lea    -0x8f(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+lea    -0x97(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x28(%ebp),%eax
+mov    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8CMsgCell3PADEv>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    -0x2c(%ebp),%edx
+mov    -0x34(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
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
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
+mov    %eax,-0x28(%ebp)
+lea    -0x60(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl8CMsgCell3PADEv>
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    -0x2c(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4f6>
 mov    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl7Message18getCellFromMessageEv>
-mov    %eax,-0x20(%ebp)
-lea    -0x58(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8CMsgCelllsEPNS_13PACKET_HEADERE>
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl8CMsgCell3PADEv>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    -0x24(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl13TCPSendThread11PushSendMsgEPNS_7MessageE>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4ed>
-mov    -0x1c(%ebp),%eax
 mov    &_ZL6gmList(,%eax,4),%edx
-mov    -0x38(%ebp),%eax
+mov    -0x40(%ebp),%eax
 mov    0x16(%eax),%eax
 cmp    %eax,%edx
-jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4e9>
-mov    -0x38(%ebp),%eax
+jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4f2>
+mov    -0x40(%ebp),%eax
 mov    0x16(%eax),%ebx
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0x10(%esp)
 movl   $"ACK REGIST_ITEM_GA",0xc(%esp)
 movl   $"Trace Auction Delay, %s(%d)",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4f8>
-addl   $0x1,-0x1c(%ebp)
-cmpl   $0x4,-0x1c(%ebp)
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x501>
+addl   $0x1,-0x24(%ebp)
+cmpl   $0x4,-0x24(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4a4>
-cmpl   $0x0,-0x3c(%ebp)
-je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x587>
-cmpl   $0x9,-0x3c(%ebp)
-jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x549>
-mov    -0x3c(%ebp),%eax
+jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x4ad>
+cmpl   $0x0,-0x44(%ebp)
+je     <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x598>
+cmpl   $0x9,-0x44(%ebp)
+jne    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x556>
+mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
-mov    %eax,%edi
-mov    -0x78(%ebp),%ebx
-mov    -0x74(%ebp),%esi
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %edi,0x14(%esp)
+mov    %eax,-0x20(%ebp)
+mov    -0x80(%ebp),%ebx
+mov    -0x7c(%ebp),%esi
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x20(%ebp),%edx
+mov    %edx,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-mov    -0x3c(%ebp),%eax
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5b7>
-mov    -0x3c(%ebp),%eax
+mov    -0x44(%ebp),%eax
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5c8>
+mov    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11GetErrorStrEi>
-mov    %eax,%edi
-mov    -0x78(%ebp),%ebx
-mov    -0x74(%ebp),%esi
-call   <T> <_ZN3nsl10G_TraceLogEv>
-mov    %edi,0x14(%esp)
+mov    %eax,-0x1c(%ebp)
+mov    -0x80(%ebp),%ebx
+mov    -0x7c(%ebp),%esi
+call   <T> <_ZN3nsl10G_TraceLogEv>
+mov    -0x1c(%ebp),%edx
+mov    %edx,0x14(%esp)
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
-jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5b2>
-mov    -0x78(%ebp),%ebx
-mov    -0x74(%ebp),%esi
+jmp    <T> <_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE+0x5c3>
+mov    -0x80(%ebp),%ebx
+mov    -0x7c(%ebp),%esi
 call   <T> <_ZN3nsl10G_TraceLogEv>
 mov    %ebx,0xc(%esp)
 mov    %esi,0x10(%esp)
 movl   $"Out onAUCTION_REGIST_ITEM_GA, auction_id : %llu",0x8(%esp)
 movl   $0x5,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
 add    $0x12c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* WARNING: Enum "ENUM_RARITY": Some values do not have unique names */
/* DWARF original prototype: DWORD onAUCTION_REGIST_ITEM_GA(HandlerFor_GA_ * this, CMsgCell * pCell,
   TCPUser * u) */

DWORD __thiscall
HandlerFor_GA_::_ZN14HandlerFor_GA_24onAUCTION_REGIST_ITEM_GAEPN3nsl8CMsgCellEPNS0_7TCPUserE
          (HandlerFor_GA_ *this,CMsgCell *pCell,TCPUser *u)

{
  char userType;
  undefined4 uVar1;
  uint black_point;
  int instantPrice;
  int price;
  int ownerId;
  ulong itemId;
  LPPACKET_HEADER pPVar2;
  LPPACKET_HEADER pPVar3;
  LPPACKET_HEADER pPVar4;
  undefined4 uVar5;
  bool bVar6;
  TraceLog *pTVar7;
  DWORD DVar8;
  StatisticsCollector *pSVar9;
  Auction *pAVar10;
  int iVar11;
  CommonDataPool *pCVar12;
  char *pcVar13;
  int in_GS_OFFSET;
  PCK_AUCTION_LOG_MESSAGE_AG local_93;
  PCK_AUCTION_REGIST_RESULT_AG local_5c;
  DWORD local_40;
  LPPACKET_HEADER local_3c;
  uint local_38;
  STItemInfo *local_34;
  Message *local_30;
  CMsgCell *local_2c;
  Message *local_28;
  CMsgCell *local_24;
  int local_20;
  
                    /* Unresolved local var: int return_code@[???]
                       Unresolved local var: LPPCK_AUCTION_REGIST_ITEM_GA pPck@[???]
                       Unresolved local var: PCK_AUCTION_LOG_MESSAGE_AG log_packet@[???]
                       Unresolved local var: PCK_AUCTION_REGIST_RESULT_AG result_packet@[???]
                       Unresolved local var: int item_category@[???] */
  local_40 = 0;
  pTVar7 = nsl::G_TraceLog();
  nsl::TraceLog::sysLog(pTVar7,5,"In  onAUCTION_REGIST_ITEM_GA");
  bVar6 = IsGoldServer(this);
  if (bVar6) {
    pSVar9 = G_StatisticsCollector();
    StatisticsCollector::IncTryCnt(pSVar9,0);
    local_3c = nsl::CMsgCell::GetPacket(pCell);
    ROI_Category::_sort((ROI_Category *)((int)&local_3c[8].check_sum + 3));
    PrintDnfItemInfo((DnfItemInfo *)((int)&local_3c[2].sequence + 2),this->mpSzBuffer);
    uVar1 = *(undefined4 *)((int)&local_3c[1].sLength + 2);
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog
              (pTVar7,5,"onAUCTION_REGIST_ITEM_GA(), before RegistItem(), o_id : %d , item : %s",
               uVar1,this->mpSzBuffer);
    PCK_AUCTION_LOG_MESSAGE_AG::PCK_AUCTION_LOG_MESSAGE_AG(&local_93);
    local_93.char_idx = *(int *)(local_3c + 1);
    local_93.auction_id._0_4_ = 0;
    local_93.auction_id._4_4_ = 0;
    local_93.auction_log_type = '\0';
    local_93.character_id = *(int *)((int)&local_3c[1].sLength + 2);
    local_93.price = *(int *)((int)&local_3c[2].sLength + 2);
    local_93.item_id = *(ulong *)((int)&local_3c[2].sequence + 3);
    local_93.uniItemAttr = *(uchar *)((int)&local_3c[2].ack + 3);
    local_93.add_info = *(int *)(local_3c + 3);
    local_93.endurance = *(ushort *)((int)&local_3c[3].sLength + 2);
    local_93.extendInfo = local_3c[3].check_sum;
    pPVar2 = local_3c + 9;
    pPVar3 = local_3c + 8;
    iVar11 = *(int *)((int)&local_3c[8].sLength + 3);
    black_point = *(uint *)((int)&local_3c[7].check_sum + 3);
    instantPrice = *(int *)((int)&local_3c[2].check_sum + 2);
    price = *(int *)((int)&local_3c[2].sLength + 2);
    userType = *(char *)((int)&local_3c[2].sLength + 1);
    pPVar4 = local_3c + 1;
    ownerId = *(int *)((int)&local_3c[1].sLength + 2);
    pAVar10 = G_Auction();
    local_40 = Auction::RegistItem(pAVar10,ownerId,(char *)((int)&pPVar4->check_sum + 2),userType,
                                   price,instantPrice,black_point,iVar11,
                                   (ROI_Category *)((int)&pPVar3->check_sum + 3),
                                   (char *)((int)&pPVar2->sLength + 1),
                                   *(DnfItemInfo *)((int)&local_3c[2].sequence + 2),
                                   &local_93.auction_id,0,-1,(char *)0x0,false);
    PCK_AUCTION_REGIST_RESULT_AG::PCK_AUCTION_REGIST_RESULT_AG(&local_5c);
    local_5c.char_idx = *(int *)(local_3c + 1);
    local_5c.owner_id = *(int *)((int)&local_3c[1].sLength + 2);
    local_38 = 0xffffffff;
    if (local_40 == 0) {
                    /* Unresolved local var: STItemInfo * pItemInfo@[???] */
      local_5c.regist_result = '\x01';
      itemId = *(ulong *)((int)&local_3c[2].sequence + 3);
      pAVar10 = G_Auction();
      local_34 = Auction::GetItemInfo(pAVar10,itemId);
      if (local_34 != (STItemInfo *)0x0) {
        local_38 = (uint)local_34->category_;
        pAVar10 = G_Auction();
        bVar6 = Auction::IsAvatarCategory(pAVar10,local_38);
        if (bVar6) {
          pPVar2 = local_3c + 5;
          iVar11 = *(int *)(local_3c + 3);
          pAVar10 = G_Auction();
          Auction::AddAvatarEmblemInfo
                    (pAVar10,iVar11,(stAvatarEmblemInfo_t *)((int)&pPVar2->sequence + 1));
          pPVar2 = local_3c + 7;
          iVar11 = *(int *)(local_3c + 3);
          pAVar10 = G_Auction();
          Auction::AddAvatarExpansionInfo
                    (pAVar10,iVar11,(stAvatarExpansionInfo_t *)((int)&pPVar2->sLength + 3));
        }
      }
    }
    else {
      local_5c.regist_result = '\0';
      local_93.auction_log_type = '\x01';
      pSVar9 = G_StatisticsCollector();
      StatisticsCollector::IncFailCnt(pSVar9,0,local_40);
      pAVar10 = G_Auction();
      iVar11 = Auction::TransErrToReason(pAVar10,local_40);
      local_5c.result_because = (uchar)iVar11;
      pAVar10 = G_Auction();
      iVar11 = Auction::TransErrToReason(pAVar10,local_40);
      local_93.result_because = (uchar)iVar11;
    }
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
    pCVar12 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_30 = nsl::CommonDataPool::getSendMessage(pCVar12,u);
    local_2c = nsl::Message::getCellFromMessage(local_30);
    nsl::CMsgCell::operator<<(local_2c,&local_93.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_2c);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_30);
                    /* Unresolved local var: Message * msg@[???]
                       Unresolved local var: CMsgCell * cell@[???] */
    pCVar12 = nsl::DataPools::getCommonDataPool
                        (&nsl::pApp->super_DataPools,*(int *)(in_GS_OFFSET + -4));
    local_28 = nsl::CommonDataPool::getSendMessage(pCVar12,u);
    local_24 = nsl::Message::getCellFromMessage(local_28);
    nsl::CMsgCell::operator<<(local_24,&local_5c.super_PACKET_HEADER);
    nsl::CMsgCell::PAD(local_24);
    nsl::TCPSendThread::PushSendMsg((this->super_INetWorkHandler).super_IHandler.sendTCP_,local_28);
                    /* Unresolved local var: int i@[???] */
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (gmList[local_20] == *(int *)((int)&local_3c[1].sLength + 2)) {
        uVar1 = *(undefined4 *)((int)&local_3c[1].sLength + 2);
        pTVar7 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog(pTVar7,5,"Trace Auction Delay, %s(%d)","ACK REGIST_ITEM_GA",uVar1);
        break;
      }
    }
    uVar5 = local_93.auction_id._4_4_;
    uVar1 = (undefined4)local_93.auction_id;
    if (local_40 == 0) {
      pTVar7 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog(pTVar7,5,"Out onAUCTION_REGIST_ITEM_GA, auction_id : %llu",uVar1,uVar5);
    }
    else {
      if (local_40 == 9) {
        pcVar13 = nsl::GetErrorStr(9);
        uVar5 = local_93.auction_id._4_4_;
        uVar1 = (undefined4)local_93.auction_id;
        pTVar7 = nsl::G_TraceLog();
        nsl::TraceLog::sysLog
                  (pTVar7,7,"Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",uVar1,uVar5,
                   pcVar13);
        return local_40;
      }
      pcVar13 = nsl::GetErrorStr(local_40);
      uVar5 = local_93.auction_id._4_4_;
      uVar1 = (undefined4)local_93.auction_id;
      pTVar7 = nsl::G_TraceLog();
      nsl::TraceLog::sysLog
                (pTVar7,5,"Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",uVar1,uVar5,pcVar13
                );
    }
    DVar8 = 0;
  }
  else {
    pTVar7 = nsl::G_TraceLog();
    nsl::TraceLog::sysLog(pTVar7,7,"Out onAUCTION_REGIST_ITEM_GA:this is not gold server");
    DVar8 = 1;
  }
  return DVar8;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/auction_source/HandlerFor_GA_.cpp)（约第 769 行）：

```cpp
unsigned int HandlerFor_GA_::onAUCTION_REGIST_ITEM_GA(nsl::CMsgCell* pCell, nsl::TCPUser* u)
{
    unsigned int return_code = 0;

    G_TraceLog()->sysLog(5, "In  onAUCTION_REGIST_ITEM_GA");
    if (!IsGoldServer())
    {
        G_TraceLog()->sysLog(7, "Out onAUCTION_REGIST_ITEM_GA:this is not gold server");
        return 1;
    }
    G_StatisticsCollector()->IncTryCnt(0);
    PCK_AUCTION_REGIST_ITEM_GA* pPck = (PCK_AUCTION_REGIST_ITEM_GA*)pCell->GetPacket();
    pPck->_reg_roi_category_key._sort();
    PrintDnfItemInfo(pPck->item_info, mpSzBuffer);
    G_TraceLog()->sysLog(5, "onAUCTION_REGIST_ITEM_GA(), before RegistItem(), o_id : %d , item : %s",
                         pPck->owner_id, mpSzBuffer);
    PCK_AUCTION_LOG_MESSAGE_AG log_packet;
    log_packet.char_idx = pPck->char_idx;
    log_packet.auction_id = 0;
    log_packet.auction_log_type = 0;
    log_packet.character_id = pPck->owner_id;
    log_packet.price = pPck->price;
    log_packet.item_id = pPck->item_info.item_id;
    log_packet.uniItemAttr = pPck->item_info.uniItemAttr;
    log_packet.add_info = pPck->item_info.add_info;
    log_packet.endurance = pPck->item_info.endurance;
    log_packet.extendInfo = pPck->item_info.extendInfo;
    return_code = G_Auction()->RegistItem(
        pPck->owner_id, pPck->owner_name, pPck->user_type, pPck->price,
        pPck->instant_price, pPck->black_point, pPck->unit_price,
        pPck->_reg_roi_category_key, pPck->owner_nexon_id, pPck->item_info,
        log_packet.auction_id, 0, -1, NULL, false);
    PCK_AUCTION_REGIST_RESULT_AG result_packet;
    result_packet.char_idx = pPck->char_idx;
    result_packet.owner_id = pPck->owner_id;
    unsigned int item_category = 0xffffffff;
    if (return_code != 0)
    {
        result_packet.regist_result = 0;
        log_packet.auction_log_type = 1;
        G_StatisticsCollector()->IncFailCnt(0, return_code);
        result_packet.result_because =
            (unsigned char)G_Auction()->TransErrToReason(return_code);
        log_packet.result_because =
            (unsigned char)G_Auction()->TransErrToReason(return_code);
    }
    else
    {
        result_packet.regist_result = 1;
        CNRDItemInfoList::STItemInfo* pItemInfo =
            G_Auction()->GetItemInfo(pPck->item_info.item_id);
        if (pItemInfo != NULL)
        {
            item_category = (unsigned int)pItemInfo->category_;
            if (G_Auction()->IsAvatarCategory(item_category))
            {
                G_Auction()->AddAvatarEmblemInfo(pPck->item_info.add_info,
                                                 &pPck->jewel_info);
                G_Auction()->AddAvatarExpansionInfo(pPck->item_info.add_info,
                                                    &pPck->expansion);
            }
        }
    }
    // ORIG DWARF：两次发送各占独立词法块（msg/cell 各一对，槽位 -0x2c/-0x28、-0x24/-0x20）
    {
        Message* msg =
            pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
        CMsgCell* cell = msg->getCellFromMessage();
        *cell << &log_packet;
        cell->PAD();
        sendTCP_->PushSendMsg(msg);
    }
    {
        Message* msg =
            pApp->super_DataPools.getCommonDataPool(nsl::tlsThreadId)->getSendMessage(u);
        CMsgCell* cell = msg->getCellFromMessage();
        *cell << &result_packet;
        cell->PAD();
        sendTCP_->PushSendMsg(msg);
    }
    for (int i = 0; i < 5; i = i + 1)
    {
        if (gmList[i] == pPck->owner_id)
        {
            G_TraceLog()->sysLog(5, "Trace Auction Delay, %s(%d)",
                                 "ACK REGIST_ITEM_GA", pPck->owner_id);
            break;
        }
    }
    if (return_code != 0)
    {
        if (return_code == 9)
        {
            const char* errStr = GetErrorStr(return_code);
            G_TraceLog()->sysLog(7, "Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",
                                 log_packet.auction_id, errStr);
            return return_code;
        }
        {
            const char* errStr = GetErrorStr(return_code);
            G_TraceLog()->sysLog(5, "Out onAUCTION_REGIST_ITEM_GA , auction_id : %llu, %s",
                                 log_packet.auction_id, errStr);
        }
    }
    else
    {
        G_TraceLog()->sysLog(5, "Out onAUCTION_REGIST_ITEM_GA, auction_id : %llu",
                             log_packet.auction_id);
    }
    // ORIG：直接 return 0
    return 0;
}
```
