# _ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic

`CDBManager::QueryHWspecCreate(Packet_DBMW_Save_Client_Spec_Statistic*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807a172` | `0x5d8` | `0x805e11a` | `0x5f0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,440 +1,448 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x7c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x3c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-mov    %eax,-0x28(%ebp)
+mov    %eax,-0x38(%ebp)
 mov    0xc(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x34(%ebp),%eax
 movzbl 0xa(%eax),%eax
 test   %al,%al
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
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x218>
+mov    -0x34(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x30(%ebp)
+movl   $0x0,-0x2c(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x202>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ebx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 lea    (%ecx,%edx,1),%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edi
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%edi
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%edi,1),%eax
 movzwl %ax,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate log_hardware_ting set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e78,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x44(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x54(%ebp)
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e78,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x112>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x121>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x119>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x128>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x11e>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1ef>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x12d>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1fe>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%ecx,1),%eax
 movzwl %ax,%esi
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%ebx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ecx
-mov    -0x24(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x48(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x48(%ebp),%eax
+mov    -0x2c(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x58(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x58(%ebp),%eax
 add    %edx,%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_hardware_ting(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e79,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edi
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
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
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x24(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3c>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
-mov    0xc(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x1fe>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
+addl   $0x1,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
+cmp    -0x30(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4b>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e3>
+mov    -0x34(%ebp),%eax
 movzbl 0xa(%eax),%eax
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
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x409>
+mov    -0x34(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x28(%ebp)
+movl   $0x0,-0x24(%ebp)
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3f3>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%esi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 lea    (%ecx,%edx,1),%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edi
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%edi
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%edi,1),%eax
 movzwl %ax,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate log_hardware_ting set ting=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e7a,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x40(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x50(%ebp)
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e7a,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x2fd>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x312>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x304>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x319>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x309>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3da>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x31e>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3ef>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%ecx,1),%eax
 movzwl %ax,%esi
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%ebx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ecx
-mov    -0x20(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x4c(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x4c(%ebp),%eax
+mov    -0x24(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x5c(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x5c(%ebp),%eax
 add    %edx,%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_hardware_ting(occ_time, category1, category2, category3, ting) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e7b,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edi
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
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
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x3ef>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
+addl   $0x1,-0x24(%ebp)
+mov    -0x24(%ebp),%eax
+cmp    -0x28(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x23c>
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e3>
+mov    -0x34(%ebp),%eax
 mov    0xb(%eax),%eax
-cmp    -0x20(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x227>
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5cb>
+mov    %eax,-0x20(%ebp)
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b7>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-add    $0x1c,%eax
-mov    (%eax),%eax
-mov    %eax,-0x3c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d2>
+mov    -0x38(%ebp),%eax
+mov    (%eax),%eax
+add    $0x1c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%esi
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ebx
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 lea    (%ecx,%edx,1),%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%ecx
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edi
+mov    -0x34(%ebp),%edi
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%edi,1),%eax
 movzwl %ax,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
-mov    -0x2c(%ebp),%edx
+mov    -0x3c(%ebp),%edx
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
 movl   $"upDate log_hardware_ting_low set total=%d where occ_time=from_unixtime(%d) and category1=%d and category2=%d and category3=%d",0x8(%esp)
 movl   $0x4e7c,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *-0x3c(%ebp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *-0x4c(%ebp)
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e7c,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4d9>
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4f4>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x74,%eax
 mov    (%eax),%edx
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 or     %edx,%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e0>
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4fb>
 mov    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x4e5>
-mov    $0x0,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x500>
+mov    $0x0,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5ce>
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edi
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 movzwl 0xf(%edx,%ecx,1),%eax
 movzwl %ax,%esi
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x19(%edx,%ecx,1),%ebx
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%ecx
+mov    -0x34(%ebp),%ecx
 add    %eax,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
 mov    0x15(%edx,%ecx,1),%ecx
 mov    -0x1c(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,-0x50(%ebp)
-add    %eax,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-mov    -0x50(%ebp),%eax
+mov    -0x34(%ebp),%edx
+mov    %edx,-0x60(%ebp)
+add    %eax,%eax
+lea    0x0(,%eax,8),%edx
+sub    %eax,%edx
+mov    -0x60(%ebp),%eax
 add    %edx,%eax
 add    $0x11,%eax
 movzbl (%eax),%eax
 movzbl %al,%eax
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    %ecx,0x14(%esp)
 mov    %eax,0x10(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x3c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into log_hardware_ting_low(occ_time, category1, category2, category3, total) values(from_unixtime(%d), %d, %d, %d, %d)",0x8(%esp)
 movl   $0x4e7d,0x4(%esp)
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edi
-mov    -0x28(%ebp),%eax
+mov    -0x38(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e7d,0x4(%esp)
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5b3>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5d0>
+mov    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5ce>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x5e8>
 addl   $0x1,-0x1c(%ebp)
-mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
-cmp    -0x1c(%ebp),%eax
-setg   %al
-test   %al,%al
-jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x403>
+mov    -0x1c(%ebp),%eax
+cmp    -0x20(%ebp),%eax
+setl   %al
+test   %al,%al
+jne    <T> <_ZN10CDBManager17QueryHWspecCreateEP38Packet_DBMW_Save_Client_Spec_Statistic+0x41e>
 mov    $0x1,%eax
-add    $0x6c,%esp
+add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
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

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBMWCommon.h, source/DNFServer/GameServer/DBMW/DBMWTypes.h, source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/DBMW/DBManager.h, source/DNFServer/GameServer/DBMW/DNFAppConfig.h, source/DNFServer/GameServer/DBMW/DNFAppStartInit.h, source/DNFServer/GameServer/DBMW/DNFAppStopInit.h 等 280 个文件*
