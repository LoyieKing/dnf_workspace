# _ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic

`CDBManager::QueryHWspecCreate(Packet_DBMW_Save_Client_Spec_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807a172` | `0x5d8` | `0x805e4ca` | `0x4b9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,440 +1,372 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x50,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,-0x28(%ebp)
 mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x20c>
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1f3>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+add    $0xb,%eax
+mov    (%eax),%eax
+mov    %eax,-0x24(%ebp)
+mov    0xc(%ebp),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1b4>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x19e>
+mov    0xc(%ebp),%edx
+mov    -0x20(%ebp),%eax
 add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ebx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edi
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%edi,1),%eax
-movzwl %ax,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0xf,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x1c(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%esi
+mov    -0x1c(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ebx
+mov    -0x1c(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%ecx
+mov    -0x1c(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    -0x2c(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"upDate log_hardware_ting set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e78,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x44(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e78,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x112>
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0xfd>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x119>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x104>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x11e>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1ef>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%ecx,1),%eax
-movzwl %ax,%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%ebx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x48(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x48(%ebp),%eax
-add    %edx,%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0xc(%esp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x109>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x19a>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%esi
+mov    -0x1c(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%ebx
+mov    -0x1c(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ecx
+mov    -0x1c(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_hardware_ting(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e79,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e79,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1ef>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
-addl   $0x1,-0x24(%ebp)
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x19a>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4b2>
+addl   $0x1,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+cmp    -0x24(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x48>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4ad>
 mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3c>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
-mov    0xc(%ebp),%eax
-movzbl 0xa(%eax),%eax
+add    $0xa,%eax
+movzbl (%eax),%eax
 cmp    $0x1,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3f7>
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3de>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x40(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x33d>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x327>
+mov    0xc(%ebp),%edx
+mov    -0x18(%ebp),%eax
 add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%esi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edi
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%edi,1),%eax
-movzwl %ax,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0xf,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0x14(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%esi
+mov    -0x14(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ebx
+mov    -0x14(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%ecx
+mov    -0x14(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    -0x2c(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"upDate log_hardware_ting set ting=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e7a,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x40(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e7a,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x2fd>
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x286>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x304>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x28d>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x309>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3da>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%ecx,1),%eax
-movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x4c(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x4c(%ebp),%eax
-add    %edx,%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0xc(%esp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x292>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x323>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0x14(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%esi
+mov    -0x14(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%ebx
+mov    -0x14(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ecx
+mov    -0x14(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_hardware_ting(occ_time, category1, category2, category3, ting) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e7b,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e7b,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3da>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
-addl   $0x1,-0x20(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x227>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b7>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x323>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4b2>
+addl   $0x1,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+cmp    -0x24(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1d1>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4ad>
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x49c>
+mov    0xc(%ebp),%edx
+mov    -0x10(%ebp),%eax
 add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    (%ecx,%edx,1),%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edi
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%edi,1),%eax
-movzwl %ax,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    %eax,0xc(%esp)
+lea    0x0(,%eax,8),%ecx
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+add    $0xf,%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%esi
+mov    -0xc(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ebx
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%ecx
+mov    -0xc(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    -0x2c(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    %edx,0xc(%esp)
 movl   $"upDate log_hardware_ting_low set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e7c,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x3c(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e7c,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4d9>
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3fe>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
-mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e0>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x405>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e5>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%edi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-movzwl 0xf(%edx,%ecx,1),%eax
-movzwl %ax,%esi
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x19(%edx,%ecx,1),%ebx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    0x15(%edx,%ecx,1),%ecx
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x50(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x50(%ebp),%eax
-add    %edx,%eax
-add    $0x11,%eax
-movzbl (%eax),%eax
-movzbl %al,%eax
-mov    %esi,0x1c(%esp)
-mov    %ebx,0x18(%esp)
-mov    %ecx,0x14(%esp)
-mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
-mov    %eax,0xc(%esp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x40a>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x498>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+movzwl (%edx),%edx
+movzwl %dx,%esi
+mov    -0xc(%ebp),%edx
+add    $0xa,%edx
+mov    (%edx),%ebx
+mov    -0xc(%ebp),%edx
+add    $0x6,%edx
+mov    (%edx),%ecx
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+movzbl (%edx),%edx
+movzbl %dl,%edx
+mov    %esi,0x1c(%esp)
+mov    %ebx,0x18(%esp)
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    -0x2c(%ebp),%edx
+mov    %edx,0xc(%esp)
 movl   $"inSert into log_hardware_ting_low(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e7d,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edi
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x20,%eax
-mov    (%eax),%edx
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+add    $0x20,%eax
+mov    (%eax),%eax
 movl   $0x4e7d,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
-addl   $0x1,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x403>
+mov    -0x28(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x498>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4b2>
+addl   $0x1,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+cmp    -0x24(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x349>
 mov    $0x1,%eax
-add    $0x6c,%esp
+add    $0x50,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::QueryHWspecCreate(Packet_DBMW_Save_Client_Spec_Statistic*) */

undefined4 __thiscall
CDBManager::_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic
          (CDBManager *this,Packet_DBMW_Save_Client_Spec_Statistic *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  time_t tVar4;
  longlong lVar5;
  int local_28;
  int local_24;
  int local_20;
  
  tVar4 = time((time_t *)0x0);
  piVar1 = *(int **)(this + 0x10);
  if (param_1[10] == (Packet_DBMW_Save_Client_Spec_Statistic)0x0) {
    for (local_28 = 0; local_28 < *(int *)(param_1 + 0xb); local_28 = local_28 + 1) {
      (**(code **)(*piVar1 + 0x1c))
                (piVar1,0x4e78,
                 "upDate log_hardware_ting set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d"
                 ,*(undefined2 *)(param_1 + local_28 * 0xe + 0xf),tVar4,
                 param_1[local_28 * 0xe + 0x11],*(undefined4 *)(param_1 + local_28 * 0xe + 0x15),
                 *(undefined4 *)(param_1 + local_28 * 0xe + 0x19));
      cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e78);
      if ((cVar3 == '\x01') && (lVar5 = (**(code **)(*piVar1 + 0x74))(piVar1), lVar5 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*piVar1 + 0x1c))
                  (piVar1,0x4e79,
                   "inSert into log_hardware_ting(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)"
                   ,tVar4,param_1[local_28 * 0xe + 0x11],
                   *(undefined4 *)(param_1 + local_28 * 0xe + 0x15),
                   *(undefined4 *)(param_1 + local_28 * 0xe + 0x19),
                   *(undefined2 *)(param_1 + local_28 * 0xe + 0xf));
        cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e79);
        if (cVar3 != '\x01') {
          return 0;
        }
      }
    }
  }
  else if (param_1[10] == (Packet_DBMW_Save_Client_Spec_Statistic)0x1) {
    for (local_24 = 0; local_24 < *(int *)(param_1 + 0xb); local_24 = local_24 + 1) {
      (**(code **)(*piVar1 + 0x1c))
                (piVar1,0x4e7a,
                 "upDate log_hardware_ting set ting=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d"
                 ,*(undefined2 *)(param_1 + local_24 * 0xe + 0xf),tVar4,
                 param_1[local_24 * 0xe + 0x11],*(undefined4 *)(param_1 + local_24 * 0xe + 0x15),
                 *(undefined4 *)(param_1 + local_24 * 0xe + 0x19));
      cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e7a);
      if ((cVar3 == '\x01') && (lVar5 = (**(code **)(*piVar1 + 0x74))(piVar1), lVar5 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*piVar1 + 0x1c))
                  (piVar1,0x4e7b,
                   "inSert into log_hardware_ting(occ_time, category1, category2, category3, ting) values(from_unixtime(%d), %d, %d, %d, %d)"
                   ,tVar4,param_1[local_24 * 0xe + 0x11],
                   *(undefined4 *)(param_1 + local_24 * 0xe + 0x15),
                   *(undefined4 *)(param_1 + local_24 * 0xe + 0x19),
                   *(undefined2 *)(param_1 + local_24 * 0xe + 0xf));
        cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e7b);
        if (cVar3 != '\x01') {
          return 0;
        }
      }
    }
  }
  else {
    for (local_20 = 0; local_20 < *(int *)(param_1 + 0xb); local_20 = local_20 + 1) {
      (**(code **)(*piVar1 + 0x1c))
                (piVar1,0x4e7c,
                 "upDate log_hardware_ting_low set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d"
                 ,*(undefined2 *)(param_1 + local_20 * 0xe + 0xf),tVar4,
                 param_1[local_20 * 0xe + 0x11],*(undefined4 *)(param_1 + local_20 * 0xe + 0x15),
                 *(undefined4 *)(param_1 + local_20 * 0xe + 0x19));
      cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e7c);
      if ((cVar3 == '\x01') && (lVar5 = (**(code **)(*piVar1 + 0x74))(piVar1), lVar5 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*piVar1 + 0x1c))
                  (piVar1,0x4e7d,
                   "inSert into log_hardware_ting_low(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)"
                   ,tVar4,param_1[local_20 * 0xe + 0x11],
                   *(undefined4 *)(param_1 + local_20 * 0xe + 0x15),
                   *(undefined4 *)(param_1 + local_20 * 0xe + 0x19),
                   *(undefined2 *)(param_1 + local_20 * 0xe + 0xf));
        cVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,0x4e7d);
        if (cVar3 != '\x01') {
          return 0;
        }
      }
    }
  }
  return 1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 625 个文件*
