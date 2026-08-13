# _ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer

`CDBManager::QueryReloadSpecDb(Packet_Frame_Lag_Statistic_Reload_Spec*, CStatisticsServer*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x807b8f8` | `0x6a4` | `0x805cd40` | `0x69e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,494 +1,494 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x128,%esp
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x20(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
 jne    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x22>
 mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 movl   $"seLect value from collect_interval where start_time <= now() and now() <= end_time order by start_time limit 1",0x8(%esp)
 movl   $0x4e8f,0x4(%esp)
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
 movl   $0x4e8f,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x76>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-lea    -0x2c(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6f>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Frame_Lag_Collect_Interval_CheckC1Ev>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x6c,%eax
 mov    (%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0xfb>
-mov    -0x20(%ebp),%eax
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0xed>
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0xc6>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0xb8>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x101>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-movw   $0x0,-0x22(%ebp)
-movzwl -0x2a(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0xf3>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+movw   $0x0,-0x1e(%ebp)
+movzwl -0x26(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x1c,%eax
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
-mov    0xb(%eax),%eax
+add    $0xb,%eax
+mov    (%eax),%eax
 mov    %eax,0xc(%esp)
 movl   $"seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec where unix_timestamp(modify_time)>%d",0x8(%esp)
 movl   $0x4e8a,0x4(%esp)
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
 movl   $0x4e8a,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %al,-0x19(%ebp)
-movzbl -0x19(%ebp),%eax
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x17c>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x169>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
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
-jle    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69d>
+jg     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x18e>
+mov    $0x1,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
 lea    -0x111(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN45Packet_Frame_Lag_Statistic_Result_Reload_SpecC1Ev>
 mov    0xc(%ebp),%eax
 movzbl 0xa(%eax),%eax
 mov    %al,-0x107(%ebp)
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x1fb>
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x1ea>
+addl   $0x1,-0x14(%ebp)
+lea    -0x111(%ebp),%eax
+lea    0xf(%eax),%edx
 mov    -0x14(%ebp),%eax
-add    $0x1,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x1fe>
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x14(%ebp),%eax
-mov    %eax,-0x102(%ebp)
-movl   $0x1,-0x106(%ebp)
+mov    %eax,(%edx)
+lea    -0x111(%ebp),%eax
+add    $0xb,%eax
+movl   $0x1,(%eax)
 movl   $0x0,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x608>
-mov    -0x20(%ebp),%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x5f5>
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x251>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x23d>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x294>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x280>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x38,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x2d7>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x2c3>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x31a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x306>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
-add    $0x50,%ecx
-add    %ecx,%eax
-add    $0xb,%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x35a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x343>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
-add    $0x60,%ecx
-add    %ecx,%eax
-add    $0x1,%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x39a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x380>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x3dd>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x3c3>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x420>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x406>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x462>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x448>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x4a5>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
-mov    (%eax),%eax
-add    $0x34,%eax
-mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x48b>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
+mov    (%eax),%eax
+add    $0x34,%eax
+mov    (%eax),%edx
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x4e8>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x4ce>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x40,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x52a>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x510>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x50,%eax
 mov    (%eax),%edx
-mov    -0x10(%ebp),%ecx
-lea    -0x111(%ebp),%eax
-add    $0xd0,%ecx
-add    %ecx,%eax
-add    $0xf,%eax
+lea    -0x111(%ebp),%eax
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
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x56d>
-mov    $0x0,%eax
-jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x6a2>
+mov    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   *%edx
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x550>
+mov    $0x0,%eax
+jmp    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69c>
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
-jne    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x604>
+jne    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x5f1>
 movzwl -0x10f(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x111(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 movzwl -0x10f(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x111(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
-mov    -0x106(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x106(%ebp)
+lea    -0x111(%ebp),%eax
+add    $0xb,%eax
+lea    -0x111(%ebp),%edx
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
-jne    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x227>
+jne    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x21a>
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x69d>
+je     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x697>
 cmpl   $0x0,-0x10(%ebp)
-jle    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x63c>
+jle    <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x636>
 cmpl   $0x5,-0x10(%ebp)
-jg     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x63c>
-mov    -0x10(%ebp),%eax
-add    $0x4,%eax
-movl   $0xffffffff,-0x10e(%ebp,%eax,4)
+jg     <T> <_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer+0x636>
+lea    -0x111(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    $0x4,%edx
+shl    $0x2,%edx
+add    $0x3,%edx
+add    %edx,%eax
+movl   $0xffffffff,(%eax)
 movzwl -0x10f(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x111(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CStatisticsServer12SendToServerEPci>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
 movzwl -0x10f(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x111(%ebp),%eax
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
/* CDBManager::QueryReloadSpecDb(Packet_Frame_Lag_Statistic_Reload_Spec*, CStatisticsServer*) */

undefined4 __thiscall
CDBManager::
_ZN10CDBManager17QueryReloadSpecDbEP38Packet_Frame_Lag_Statistic_Reload_SpecP17CStatisticsServer
          (CDBManager *this,Packet_Frame_Lag_Statistic_Reload_Spec *param_1,
          CStatisticsServer *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Packet_Frame_Lag_Statistic_Result_Reload_Spec local_115 [2];
  undefined1 local_113 [5];
  Packet_Frame_Lag_Statistic_Reload_Spec aPStack_10e [4];
  int local_10a;
  int local_106 [19];
  undefined1 auStack_ba [6];
  undefined1 auStack_b4 [126];
  undefined1 auStack_36 [6];
  Packet_Frame_Lag_Collect_Interval_Check local_30 [2];
  ushort local_2e;
  undefined2 local_26;
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
              (local_24,0x4e8f,
               "seLect value from collect_interval where start_time <= now() and now() <= end_time order by start_time limit 1"
              );
    local_1d = (**(code **)(*local_24 + 0x20))(local_24,0x4e8f);
    if (local_1d == '\x01') {
      Packet_Frame_Lag_Collect_Interval_Check::Packet_Frame_Lag_Collect_Interval_Check(local_30);
      iVar3 = (**(code **)(*local_24 + 0x6c))(local_24);
      if (iVar3 == 0) {
        local_26 = 0;
      }
      else {
        local_1d = (**(code **)(*local_24 + 0x24))(local_24);
        if (local_1d != '\x01') {
          return 0;
        }
        cVar1 = (**(code **)(*local_24 + 0x40))(local_24,0,&local_26);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      CStatisticsServer::SendToServer(param_2,(char *)local_30,(uint)local_2e);
      (**(code **)(*local_24 + 0x1c))
                (local_24,0x4e8a,
                 "seLect unique_id,unix_timestamp(modify_time),spec_id,cpu_vendor,cpu_processor_num,above_cpu_clock,below_cpu_clock,ram,videocard_vendor,videocard_device,videocard_texture_mem,os_version from monitoring_spec where unix_timestamp(modify_time)>%d"
                 ,*(undefined4 *)(param_1 + 0xb));
      local_1d = (**(code **)(*local_24 + 0x20))(local_24,0x4e8a);
      if (local_1d == '\x01') {
        local_1c = (**(code **)(*local_24 + 0x6c))(local_24);
        if (0 < local_1c) {
          Packet_Frame_Lag_Statistic_Result_Reload_Spec::
          Packet_Frame_Lag_Statistic_Result_Reload_Spec(local_115);
          aPStack_10e[3] = param_1[10];
          local_106[0] = local_1c / 6;
          if (local_1c % 6 != 0) {
            local_106[0] = local_106[0] + 1;
          }
          local_10a = 1;
          local_14 = 0;
          local_18 = local_106[0];
          for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
            local_1d = (**(code **)(*local_24 + 0x24))(local_24);
            if (local_1d != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))(local_24,0,local_113 + (local_14 + 4) * 4 + 1);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x38))(local_24,1,&local_10a + local_14 + 8);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))
                              (local_24,2,local_113 + (local_14 + 0x10) * 4 + 1);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x50))(local_24,3,auStack_ba + local_14);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x50))(local_24,4,auStack_b4 + local_14);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))(local_24,5,aPStack_10e + (local_14 + 0x18) * 4);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))
                              (local_24,6,(int)local_106 + (local_14 + 0x1c) * 4);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x40))(local_24,7,aPStack_10e + (local_14 + 0x48) * 2);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))
                              (local_24,8,local_113 + (local_14 + 0x28) * 4 + 1);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x34))(local_24,9,&local_10a + local_14 + 0x2c);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x40))
                              (local_24,10,local_113 + (local_14 + 0x68) * 2 + 1);
            if (cVar1 != '\x01') {
              return 0;
            }
            cVar1 = (**(code **)(*local_24 + 0x50))(local_24,0xb,auStack_36 + local_14);
            if (cVar1 != '\x01') {
              return 0;
            }
            local_14 = local_14 + 1;
            if (local_14 % 6 == 0) {
              CStatisticsServer::SendToServer
                        (param_2,(char *)local_115,(uint)(ushort)local_113._0_2_);
              DNFFLib::Sleep_Ext(0,1);
              CStatisticsServer::SendToServer
                        (param_2,(char *)local_115,(uint)(ushort)local_113._0_2_);
              local_10a = local_10a + 1;
              local_14 = 0;
            }
          }
          if (local_14 != 0) {
            if ((0 < local_14) && (local_14 < 6)) {
              *(undefined4 *)(local_113 + (local_14 + 4) * 4 + 1) = 0xffffffff;
            }
            CStatisticsServer::SendToServer(param_2,(char *)local_115,(uint)(ushort)local_113._0_2_)
            ;
            DNFFLib::Sleep_Ext(0,1);
            CStatisticsServer::SendToServer(param_2,(char *)local_115,(uint)(ushort)local_113._0_2_)
            ;
          }
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
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
