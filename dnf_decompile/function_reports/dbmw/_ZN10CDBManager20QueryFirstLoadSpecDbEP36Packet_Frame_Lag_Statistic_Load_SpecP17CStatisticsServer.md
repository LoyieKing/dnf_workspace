# _ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer

`CDBManager::QueryFirstLoadSpecDb(Packet_Frame_Lag_Statistic_Load_Spec*, CStatisticsServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807b35a` | `0x59e` | `0x805d936` | `0x5a4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,414 +1,417 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x118,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
 jne    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec",0x8(%esp)
 movl   $0x4e89,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x20,%eax
 mov    (%eax),%edx
 movl   $0x4e89,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x76>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x6f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
-jle    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x597>
-lea    -0x105(%ebp),%eax
+jg     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x94>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+lea    -0x101(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN43Packet_Frame_Lag_Statistic_Result_Load_SpecC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
-mov    %al,-0xfb(%ebp)
+mov    %al,-0xf7(%ebp)
 mov    -0x18(%ebp),%ecx
 mov    $0x2aaaaaab,%edx
 mov    %ecx,%eax
 imul   %edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x18(%ebp),%ecx
 mov    $0x2aaaaaab,%edx
 mov    %ecx,%eax
 imul   %edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 test   %edx,%edx
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0xf5>
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0xf0>
+addl   $0x1,-0x14(%ebp)
+lea    -0x101(%ebp),%eax
+lea    0xf(%eax),%edx
 mov    -0x14(%ebp),%eax
-add    $0x1,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0xf8>
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,-0xf6(%ebp)
-movl   $0x1,-0xfa(%ebp)
+mov    %eax,(%edx)
+lea    -0x101(%ebp),%eax
+add    $0xb,%eax
+movl   $0x1,(%eax)
 movl   $0x0,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x502>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x4fb>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x24,%eax
 mov    (%eax),%edx
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x14b>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x143>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x4,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0x3,%eax
+add    $0x3,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x18e>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x186>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x8,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0xb,%eax
+add    $0xb,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x1,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x1d1>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x1c9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x10,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0x3,%eax
+add    $0x3,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x2,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x214>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x20c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
-add    $0x50,%ecx
-add    %ecx,%eax
-add    $0xb,%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
+add    $0x5b,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x3,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x254>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x249>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
-add    $0x60,%ecx
-add    %ecx,%eax
-add    $0x1,%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
+add    $0x61,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x4,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x294>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x286>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x18,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
+add    $0x7,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x5,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x2d7>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x2c9>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x1c,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0xf,%eax
+add    $0xf,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x6,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x31a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x30c>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x48,%ecx
 add    %ecx,%ecx
-add    %ecx,%eax
-add    $0x7,%eax
+add    $0x7,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x7,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x35c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x34e>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x28,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0x3,%eax
+add    $0x3,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x8,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x39f>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x391>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x2c,%ecx
 shl    $0x2,%ecx
-add    %ecx,%eax
-add    $0xb,%eax
+add    $0xb,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0x9,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x3e2>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x3d4>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
 add    $0x68,%ecx
 add    %ecx,%ecx
-add    %ecx,%eax
-add    $0x3,%eax
+add    $0x3,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0xa,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x424>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x416>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x105(%ebp),%eax
-add    $0xd0,%ecx
-add    %ecx,%eax
-add    $0xf,%eax
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%ecx
+add    $0xdf,%ecx
+add    %ecx,%eax
 mov    %eax,0x8(%esp)
 movl   $0xb,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x467>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59c>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x456>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x5a2>
 addl   $0x1,-0x10(%ebp)
 mov    -0x10(%ebp),%ecx
 mov    $0x2aaaaaab,%edx
 mov    %ecx,%eax
 imul   %edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 add    %eax,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 test   %edx,%edx
-jne    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x4fe>
-movzwl -0x103(%ebp),%eax
+jne    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x4f7>
+movzwl -0xff(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-movzwl -0x103(%ebp),%eax
+movzwl -0xff(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
-mov    -0xfa(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0xfa(%ebp)
+lea    -0x101(%ebp),%eax
+add    $0xb,%eax
+lea    -0x101(%ebp),%edx
+add    $0xb,%edx
+mov    (%edx),%edx
+add    $0x1,%edx
+mov    %edx,(%eax)
 movl   $0x0,-0x10(%ebp)
 addl   $0x1,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 cmp    -0x18(%ebp),%eax
 setl   %al
 test   %al,%al
-jne    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x121>
+jne    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x120>
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x597>
+je     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x59d>
 cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x536>
+jle    <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x53c>
 cmpl   $0x5,-0x10(%ebp)
-jg     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x536>
-mov    -0x10(%ebp),%eax
-add    $0x4,%eax
-movl   $0xffffffff,-0x102(%ebp,%eax,4)
-movzwl -0x103(%ebp),%eax
+jg     <T> <_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer+0x53c>
+lea    -0x101(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0x4,%edx
+shl    $0x2,%edx
+add    $0x3,%edx
+add    %edx,%eax
+movl   $0xffffffff,(%eax)
+movzwl -0xff(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-movzwl -0x103(%ebp),%eax
+movzwl -0xff(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x105(%ebp),%eax
+lea    -0x101(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 movl   $0x0,-0x10(%ebp)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Type propagation algorithm not settling */
/* CDBManager::QueryFirstLoadSpecDb(Packet_Frame_Lag_Statistic_Load_Spec*, CStatisticsServer*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager20QueryFirstLoadSpecDbEP36Packet_Frame_Lag_Statistic_Load_SpecP17CStatisticsServer
          (CDBManager *this,Packet_Frame_Lag_Statistic_Load_Spec *param_1,CStatisticsServer *param_2
          )

{
  char cVar1;
  undefined4 uVar2;
  Packet_Frame_Lag_Statistic_Result_Load_Spec local_109 [2];
  undefined1 local_107 [5];
  Packet_Frame_Lag_Statistic_Load_Spec aPStack_102 [4];
  int local_fe;
  int local_fa [19];
  undefined1 auStack_ae [6];
  undefined1 auStack_a8 [126];
  undefined1 auStack_2a [6];
  int *local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = *(int **)(this + 0x3c);
  if (local_24 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*local_24 + 0x1c))
              (local_24,0x4e89,
               "seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec"
              );
    local_1d = (**(code **)(*local_24 + 0x20))(local_24,0x4e89);
    if (local_1d == '\x01') {
      local_1c = (**(code **)(*local_24 + 0x6c))(local_24);
      if (0 < local_1c) {
        Packet_Frame_Lag_Statistic_Result_Load_Spec::Packet_Frame_Lag_Statistic_Result_Load_Spec
                  (local_109);
        aPStack_102[3] = param_1[10];
        local_fa[0] = local_1c / 6;
        if (local_1c % 6 != 0) {
          local_fa[0] = local_fa[0] + 1;
        }
        local_fe = 1;
        local_14 = 0;
        local_18 = local_fa[0];
        for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
          local_1d = (**(code **)(*local_24 + 0x24))(local_24);
          if (local_1d != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,0,local_107 + (local_14 + 4) * 4 + 1);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x38))(local_24,1,&local_fe + local_14 + 8);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,2,local_107 + (local_14 + 0x10) * 4 + 1);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x50))(local_24,3,auStack_ae + local_14);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x50))(local_24,4,auStack_a8 + local_14);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,5,aPStack_102 + (local_14 + 0x18) * 4);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,6,(int)local_fa + (local_14 + 0x1c) * 4);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x40))(local_24,7,aPStack_102 + (local_14 + 0x48) * 2);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,8,local_107 + (local_14 + 0x28) * 4 + 1);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x34))(local_24,9,&local_fe + local_14 + 0x2c);
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x40))(local_24,10,local_107 + (local_14 + 0x68) * 2 + 1)
          ;
          if (cVar1 != '\x01') {
            return 0;
          }
          cVar1 = (**(code **)(*local_24 + 0x50))(local_24,0xb,auStack_2a + local_14);
          if (cVar1 != '\x01') {
            return 0;
          }
          local_14 = local_14 + 1;
          if (local_14 % 6 == 0) {
            CStatisticsServer::SendToServer(param_2,(char *)local_109,(uint)(ushort)local_107._0_2_)
            ;
            DNFFLib::Sleep_Ext(0,1);
            CStatisticsServer::SendToServer(param_2,(char *)local_109,(uint)(ushort)local_107._0_2_)
            ;
            local_fe = local_fe + 1;
            local_14 = 0;
          }
        }
        if (local_14 != 0) {
          if ((0 < local_14) && (local_14 < 6)) {
            *(undefined4 *)(local_107 + (local_14 + 4) * 4 + 1) = 0xffffffff;
          }
          CStatisticsServer::SendToServer(param_2,(char *)local_109,(uint)(ushort)local_107._0_2_);
          DNFFLib::Sleep_Ext(0,1);
          CStatisticsServer::SendToServer(param_2,(char *)local_109,(uint)(ushort)local_107._0_2_);
        }
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
