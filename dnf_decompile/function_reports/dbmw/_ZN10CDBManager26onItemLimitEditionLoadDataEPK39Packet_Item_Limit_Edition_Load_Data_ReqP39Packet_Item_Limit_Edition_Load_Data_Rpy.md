# _ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy

`CDBManager::onItemLimitEditionLoadData(Packet_Item_Limit_Edition_Load_Data_Req const*, Packet_Item_Limit_Edition_Load_Data_Rpy*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x808171a` | `0x701` | `0x805b272` | `0x6a6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,582 +1,541 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %ebx
-sub    $0x1040,%esp
+sub    $0x1050,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
+mov    %eax,-0x20(%ebp)
+cmpl   $0x0,-0x20(%ebp)
 jne    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x24>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x18(%ebp)
-lea    -0x101c(%ebp),%ebx
-mov    $0x0,%eax
-mov    $0x400,%edx
-mov    %ebx,%edi
+mov    %eax,-0x1c(%ebp)
+lea    -0x102d(%ebp),%edx
+mov    $0x1000,%ebx
+mov    $0x0,%eax
 mov    %edx,%ecx
+and    $0x1,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x54>
+mov    %al,(%edx)
+add    $0x1,%edx
+sub    $0x1,%ebx
+mov    %edx,%ecx
+and    $0x2,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x66>
+mov    %ax,(%edx)
+add    $0x2,%edx
+sub    $0x2,%ebx
+mov    %ebx,%ecx
+shr    $0x2,%ecx
+mov    %edx,%edi
 rep stos %eax,%es:(%edi)
+mov    %edi,%edx
+mov    %ebx,%ecx
+and    $0x2,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x80>
+mov    %ax,(%edx)
+add    $0x2,%edx
+mov    %ebx,%ecx
+and    $0x1,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x8e>
+mov    %al,(%edx)
+add    $0x1,%edx
 mov    0xc(%ebp),%eax
 mov    0xf(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x61>
+jne    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0xa3>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0xab>
+cmp    $0x1,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0xe6>
 movl   $0xc,0x8(%esp)
 movl   $"and ipg_no ",0x4(%esp)
-lea    -0x101c(%ebp),%eax
+lea    -0x102d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-movl   $0xb,-0x14(%ebp)
-lea    -0x101c(%ebp),%eax
-add    -0x14(%ebp),%eax
-mov    0xc(%ebp),%edx
-lea    0x13(%edx),%ecx
-mov    0xc(%ebp),%edx
-mov    0xf(%edx),%edx
-mov    %eax,0x8(%esp)
-mov    %ecx,0x4(%esp)
-mov    %edx,(%esp)
+mov    0xc(%ebp),%eax
+lea    0x13(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    0xf(%eax),%eax
+lea    -0x102d(%ebp),%ecx
+add    $0xb,%ecx
+mov    %ecx,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_Z15getList2inQueryjPKjPc>
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%ecx
 mov    0xc(%ebp),%eax
 mov    0xb(%eax),%eax
 movl   $0x1c,0x1c(%esp)
-mov    -0x18(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x18(%esp)
-mov    -0x18(%ebp),%edx
+mov    -0x1c(%ebp),%edx
 mov    %edx,0x14(%esp)
-lea    -0x101c(%ebp),%edx
+lea    -0x102d(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"seLect ipg_no,item_no,item_cnt,cera_price,gold_price,avatar_period_type,total_cnt,sell_cnt,restrict_no,start_time,end_time,npc_idx,cond_charac_job,cond_lev_begin,cond_lev_end,cond_acc_create_time_begin,cond_acc_create_time_end,cond_cha_create_time_begin,cond_cha_create_time_end from limited_shop_manager where server_id=%d %s and (start_time<%d and end_time>%d) and status_flag=0 limit %d",0x8(%esp)
 movl   $0x4ec7,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x143>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4ec7,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x122>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x16e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%edx
 mov    0x10(%ebp),%eax
 mov    %dl,0xa(%eax)
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    0x10(%ebp),%edx
 mov    %eax,0xb(%edx)
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6d2>
-mov    -0x1c(%ebp),%eax
+mov    0x10(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x18(%ebp)
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x686>
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x176>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-movl   $0x0,-0xc(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x1cb>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x14(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 add    %edx,%eax
 shl    $0x3,%eax
 add    0x10(%ebp),%eax
-lea    0xf(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x1c2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-lea    0x13(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x207>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-lea    0x17(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x24c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-lea    0x1f(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x291>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x10,%eax
-add    0x10(%ebp),%eax
-lea    0x13(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x2d9>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
+add    $0xf,%eax
+mov    %eax,-0x10(%ebp)
+movl   $0x0,-0xc(%ebp)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x21d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x25a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x4(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x298>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x8(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x2d6>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x10(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x314>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x14(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-lea    0x1b(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x31e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x2d(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x352>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+movzbl -0x2d(%ebp),%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+mov    %dl,0xc(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x34,%eax
 mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x10,%eax
-add    0x10(%ebp),%eax
-lea    0x1b(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x366>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x10,%eax
-add    0x10(%ebp),%eax
-lea    0x17(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x3ae>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-lea    0xf(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x3f6>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x440>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x48a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x20,%eax
-add    0x10(%ebp),%eax
-lea    0x1b(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x4d2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x30,%eax
-add    0x10(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x51c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x2c(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x393>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x2c(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x1c(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x3d1>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x18(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x40f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x20(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x44d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x24(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x48b>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x28(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x4c9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x2c(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x507>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x30(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x48,%eax
 mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x30,%eax
-add    0x10(%ebp),%eax
-lea    0x13(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x564>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x26(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x545>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+movzwl -0x26(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %dx,0x34(%eax)
+mov    -0x20(%ebp),%eax
 mov    (%eax),%eax
 add    $0x48,%eax
 mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x30,%eax
-add    0x10(%ebp),%eax
-lea    0x15(%eax),%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x5ac>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x30,%eax
-add    0x10(%ebp),%eax
-add    $0x17,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x5f6>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x30,%eax
-add    0x10(%ebp),%eax
-add    $0x1b,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x640>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x40,%eax
-add    0x10(%ebp),%eax
-add    $0xf,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x687>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x38,%eax
-mov    (%eax),%ecx
-mov    -0x10(%ebp),%edx
-mov    %edx,%eax
-shl    $0x3,%eax
-add    %edx,%eax
-shl    $0x3,%eax
-add    $0x40,%eax
-add    0x10(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,%edx
-mov    -0xc(%ebp),%eax
-addl   $0x1,-0xc(%ebp)
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%ecx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6ce>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x6f7>
-addl   $0x1,-0x10(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x6c,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-cmp    -0x10(%ebp),%eax
-seta   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x153>
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x26(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x585>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+movzwl -0x26(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %dx,0x36(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x5c5>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x38(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x603>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x3c(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x63e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x40(%eax)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+add    $0x38,%eax
+mov    (%eax),%ecx
+mov    -0xc(%ebp),%eax
+addl   $0x1,-0xc(%ebp)
+lea    -0x24(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   *%ecx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x679>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x69c>
+mov    -0x24(%ebp),%edx
+mov    -0x10(%ebp),%eax
+mov    %edx,0x44(%eax)
+addl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
+cmp    -0x18(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy+0x1a8>
 mov    $0x1,%eax
-add    $0x1040,%esp
+add    $0x1050,%esp
 pop    %ebx
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::onItemLimitEditionLoadData(Packet_Item_Limit_Edition_Load_Data_Req const*,
   Packet_Item_Limit_Edition_Load_Data_Rpy*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy
          (CDBManager *this,Packet_Item_Limit_Edition_Load_Data_Req *param_1,
          Packet_Item_Limit_Edition_Load_Data_Rpy *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 local_1020 [2];
  char acStack_1015 [4085];
  int *local_20;
  time_t local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  bVar6 = 0;
  local_20 = *(int **)(this + 4);
  if (local_20 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_1c = time((time_t *)0x0);
    puVar5 = local_1020;
    for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    if ((*(int *)(param_1 + 0xf) != 0) ||
       (param_1[10] != (Packet_Item_Limit_Edition_Load_Data_Req)0x1)) {
      memcpy(local_1020,"and ipg_no ",0xc);
      local_18 = 0xb;
      getList2inQuery(*(uint *)(param_1 + 0xf),(uint *)(param_1 + 0x13),acStack_1015);
    }
    (**(code **)(*local_20 + 0x1c))
              (local_20,0x4ec7,
               "seLect ipg_no,item_no,item_cnt,cera_price,gold_price,avatar_period_type,total_cnt,sell_cnt,restrict_no,start_time,end_time,npc_idx,cond_charac_job,cond_lev_begin,cond_lev_end,cond_acc_create_time_begin,cond_acc_create_time_end,cond_cha_create_time_begin,cond_cha_create_time_end from limited_shop_manager where server_id=%d %s and (start_time<%d and end_time>%d) and status_flag=0 limit %d"
               ,*(undefined4 *)(param_1 + 0xb),local_1020,local_1c,local_1c,0x1c);
    cVar1 = (**(code **)(*local_20 + 0x20))(local_20,0x4ec7);
    if (cVar1 == '\x01') {
      *(Packet_Item_Limit_Edition_Load_Data_Req *)(param_2 + 10) = param_1[10];
      uVar2 = (**(code **)(*local_20 + 0x6c))(local_20);
      *(undefined4 *)(param_2 + 0xb) = uVar2;
      local_14 = 0;
      while (uVar3 = (**(code **)(*local_20 + 0x6c))(local_20), local_14 < uVar3) {
        cVar1 = (**(code **)(*local_20 + 0x24))(local_20);
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,0,param_2 + local_14 * 0x48 + 0xf);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x13);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x17);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x1f);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x23);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x50))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x1b);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x34))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x2b);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x27);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x2f);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x33);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x37);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x3b);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x3f);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x48))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x43);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x48))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x45);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x47);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x4b);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x4f);
        iVar4 = local_10;
        if (cVar1 != '\x01') {
          return 0;
        }
        local_10 = local_10 + 1;
        cVar1 = (**(code **)(*local_20 + 0x38))(local_20,iVar4,param_2 + local_14 * 0x48 + 0x53);
        if (cVar1 != '\x01') {
          return 0;
        }
        local_14 = local_14 + 1;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 293 个文件*
