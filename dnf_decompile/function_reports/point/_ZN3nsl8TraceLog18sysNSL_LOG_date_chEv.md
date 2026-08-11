# _ZN3nsl8TraceLog18sysNSL_LOG_date_chEv

`nsl::TraceLog::sysNSL_LOG_date_ch()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80b6076` | `0x5ed` | `0x80b47c2` | `0x5eb` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,393 +1,391 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x20dc,%esp
 mov    0x8(%ebp),%eax
 add    $0x344,%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEEC1ERS3_>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%edx
-lea    -0x90(%ebp),%eax
+lea    -0x8c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <stat>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 shr    $0x1f,%eax
 test   %al,%al
 je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x8f>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%esi
 call   <T> <__errno_location>
 mov    (%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"sysNSL_LOG_date_ch stat() errmsg[%s(%d)] [%s]",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
 movl   $0x1,(%esp)
 call   <T> <exit>
 mov    0x8(%ebp),%eax
 add    $0x30,%eax
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <access>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x10a>
 mov    0x8(%ebp),%eax
 movzbl 0x341(%eax),%eax
 test   %al,%al
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
 mov    0x8(%ebp),%eax
 lea    0x30(%eax),%esi
 call   <T> <__errno_location>
 mov    (%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"sysNSL_LOG_date_ch access fail : errmsg[%s(%d)] : logfilename[%s]",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x341(%eax)
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
-mov    -0x64(%ebp),%eax
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
+mov    -0x60(%ebp),%eax
 cmp    $0x1388000,%eax
 jle    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x11b>
 movb   $0x1,&_ZN3nsl18bChangedDataForLogE
 movzbl &_ZN3nsl18bChangedDataForLogE,%eax
-xor    $0x1,%eax
-test   %al,%al
-jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
+test   %al,%al
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
 movb   $0x0,&_ZN3nsl18bChangedDataForLogE
 call   <T> <_ZN3nsl8G_ScriptEv>
 movl   $0x1,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6Script13findCharValueEii>
 mov    %eax,0x8(%esp)
 movl   $"%s/old_log",0x4(%esp)
-lea    -0x1090(%ebp),%eax
+lea    -0x108c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x90(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x1090(%ebp),%eax
+lea    -0x8c(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x108c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <stat>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x2c(%ebp),%eax
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x228>
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x225>
 call   <T> <__errno_location>
 mov    (%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x1d6>
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x1d3>
 call   <T> <__errno_location>
 mov    (%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"sysNSL_LOG_date_ch stat() errmsg[%s(%d)]",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
-lea    -0x1090(%ebp),%eax
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
+lea    -0x108c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog7MakeDirEPc>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x228>
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x225>
 call   <T> <__errno_location>
 mov    (%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"sysNSL_LOG_date_ch mkdir() errmsg[%s(%d)]",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <close>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x26e>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x26b>
 mov    0x8(%ebp),%eax
 mov    0x330(%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"file close error ('%s'), fd=%d\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <close>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x2b4>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x2b1>
 mov    0x8(%ebp),%eax
 mov    0x334(%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"file close error ('%s'), fd=%d\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 mov    0x338(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <close>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x2fa>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x2f7>
 mov    0x8(%ebp),%eax
 mov    0x338(%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 movl   $"file close error ('%s'), fd=%d\n",(%esp)
 call   <T> <printf>
 movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x598>
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x329>
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x596>
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x38(%ebp)
-lea    -0x38(%ebp),%eax
+mov    %eax,-0x34(%ebp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    %eax,-0x20(%ebp)
-cmpl   $0x0,-0x24(%ebp)
-jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x3db>
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x3d9>
 mov    0x8(%ebp),%eax
 add    $0x30,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x20b0(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xc(%eax),%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%eax
 add    $0x1,%eax
 mov    %eax,-0x20ac(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x14(%eax),%ecx
 mov    $0x51eb851f,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x5,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 imul   $0x64,%edx,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x20b0(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    -0x20ac(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-lea    -0x1090(%ebp),%eax
+lea    -0x108c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s/Info_%sB#%02d%02d%02d_%02d%02d%02d.log",0x4(%esp)
-lea    -0x2090(%ebp),%eax
+lea    -0x208c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x534>
-cmpl   $0x1,-0x24(%ebp)
-jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x48f>
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x532>
+cmpl   $0x1,-0x20(%ebp)
+jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x48d>
 mov    0x8(%ebp),%eax
 add    $0x130,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x20a8(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xc(%eax),%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%eax
 add    $0x1,%eax
 mov    %eax,-0x20a4(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x14(%eax),%ecx
 mov    $0x51eb851f,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x5,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 imul   $0x64,%edx,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x20a8(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    -0x20a4(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-lea    -0x1090(%ebp),%eax
+lea    -0x108c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s/Error_%sB#%02d%02d%02d_%02d%02d%02d.log",0x4(%esp)
-lea    -0x2090(%ebp),%eax
+lea    -0x208c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x534>
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x532>
 mov    0x8(%ebp),%eax
 add    $0x230,%eax
-mov    %eax,-0x30(%ebp)
-mov    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x20a0(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%edi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%esi
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0xc(%eax),%ebx
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%eax
 add    $0x1,%eax
 mov    %eax,-0x209c(%ebp)
-mov    -0x20(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    0x14(%eax),%ecx
 mov    $0x51eb851f,%edx
 mov    %ecx,%eax
 imul   %edx
 sar    $0x5,%edx
 mov    %ecx,%eax
 sar    $0x1f,%eax
 sub    %eax,%edx
 imul   $0x64,%edx,%eax
 mov    %ecx,%edx
 sub    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x20a0(%ebp),%ecx
 mov    %ecx,0x24(%esp)
 mov    %edi,0x20(%esp)
 mov    %esi,0x1c(%esp)
 mov    %ebx,0x18(%esp)
 mov    -0x209c(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 mov    %edx,0x10(%esp)
 mov    %eax,0xc(%esp)
-lea    -0x1090(%ebp),%eax
+lea    -0x108c(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"%s/Stat_%sB#%02d%02d%02d_%02d%02d%02d.log",0x4(%esp)
-lea    -0x2090(%ebp),%eax
+lea    -0x208c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <sprintf>
-lea    -0x2090(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x30(%ebp),%eax
+lea    -0x208c(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <rename>
 shr    $0x1f,%eax
 test   %al,%al
-je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x594>
+je     <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x592>
 movl   $0x148,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6set_fdEi>
 call   <T> <__errno_location>
 mov    (%eax),%ebx
 call   <T> <__errno_location>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <strerror>
 mov    %ebx,0xc(%esp)
 mov    %eax,0x8(%esp)
 movl   $"sysNSL_LOG_date_ch rename() errmsg[%s(%d)]",0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog8errorLogEPKcz>
-addl   $0x1,-0x24(%ebp)
-cmpl   $0x2,-0x24(%ebp)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x2,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x306>
+jne    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x30a>
 movl   $0x14e,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6set_fdEi>
-jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d7>
+jmp    <T> <_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv+0x5d5>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TScopedLockINS_11TThreadLockINS_16ThreadLock_linuxEEEED1Ev>
 add    $0x20dc,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void sysNSL_LOG_date_ch(TraceLog * this) */

void __thiscall nsl::TraceLog::_ZN3nsl8TraceLog18sysNSL_LOG_date_chEv(TraceLog *this)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  Script *this_00;
  char local_2094 [4096];
  char local_1094 [4096];
  stat local_94;
  time_t local_3c;
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_> local_38;
  char *local_34;
  int local_2c;
  int local_28;
  tm *local_24;
  int local_20;
  
                    /* Unresolved local var: char[4096] logdname@[???]
                       Unresolved local var: char[4096] renfname@[???]
                       Unresolved local var: char * orifname@[???]
                       Unresolved local var: stat st@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: int rst@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>
                       slock@[???]
                       Unresolved local var: time_t now@[???]
                       Unresolved local var: tm * tm_now@[???]
                       Unresolved local var: int ret@[???] */
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::TScopedLock(&local_38,&this->lockLog);
  local_2c = stat(this->logfname,&local_94);
  if (local_2c < 0) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    piVar1 = __errno_location();
    pcVar2 = strerror(*piVar1);
                    /* try { // try from 080b60f4 to 080b662f has its CatchHandler @ 080b6632 */
    errorLog(this,"sysNSL_LOG_date_ch stat() errmsg[%s(%d)] [%s]",pcVar2,iVar3,this->logfname);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  pcVar2 = (char *)0x0;
  iVar3 = access(this->logfname,0);
  if (iVar3 == 0) {
    if (0x1388000 < local_94.st_size) {
      bChangedDataForLog = true;
    }
    if (bChangedDataForLog == true) {
      bChangedDataForLog = false;
      this_00 = G_Script();
      pcVar2 = Script::findCharValue(this_00,0,1);
      sprintf(local_1094,"%s/old_log",pcVar2);
      local_2c = stat(local_1094,&local_94);
      if (local_2c < 0) {
        piVar1 = __errno_location();
        if (*piVar1 != 2) {
          piVar1 = __errno_location();
          iVar3 = *piVar1;
          piVar1 = __errno_location();
          pcVar4 = strerror(*piVar1);
          pcVar2 = "sysNSL_LOG_date_ch stat() errmsg[%s(%d)]";
          errorLog(this,"sysNSL_LOG_date_ch stat() errmsg[%s(%d)]",pcVar4,iVar3);
          goto LAB_080b664d;
        }
        iVar3 = MakeDir(this,local_1094);
        if (iVar3 < 0) {
          piVar1 = __errno_location();
          iVar3 = *piVar1;
          piVar1 = __errno_location();
          pcVar4 = strerror(*piVar1);
          pcVar2 = "sysNSL_LOG_date_ch mkdir() errmsg[%s(%d)]";
          errorLog(this,"sysNSL_LOG_date_ch mkdir() errmsg[%s(%d)]",pcVar4,iVar3);
          goto LAB_080b664d;
        }
      }
      local_20 = close(this->logfd);
      if (local_20 != 0) {
        iVar3 = this->logfd;
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("file close error (\'%s\'), fd=%d\n",pcVar2,iVar3);
      }
      local_20 = close(this->errfd);
      if (local_20 != 0) {
        iVar3 = this->errfd;
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("file close error (\'%s\'), fd=%d\n",pcVar2,iVar3);
      }
      local_20 = close(this->statfd);
      if (local_20 != 0) {
        iVar3 = this->statfd;
        piVar1 = __errno_location();
        pcVar2 = strerror(*piVar1);
        printf("file close error (\'%s\'), fd=%d\n",pcVar2,iVar3);
      }
      for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
        if (local_28 == 0) {
          local_3c = time((time_t *)0x0);
          local_24 = localtime(&local_3c);
        }
        if (local_28 == 0) {
          local_34 = this->logfname;
          sprintf(local_2094,"%s/Info_%sB#%02d%02d%02d_%02d%02d%02d.log",local_1094,
                  this->mpServiceIdentity,local_24->tm_year % 100,local_24->tm_mon + 1,
                  local_24->tm_mday,local_24->tm_hour,local_24->tm_min,local_24->tm_sec);
        }
        else if (local_28 == 1) {
          local_34 = this->errfname;
          sprintf(local_2094,"%s/Error_%sB#%02d%02d%02d_%02d%02d%02d.log",local_1094,
                  this->mpServiceIdentity,local_24->tm_year % 100,local_24->tm_mon + 1,
                  local_24->tm_mday,local_24->tm_hour,local_24->tm_min,local_24->tm_sec);
        }
        else {
          local_34 = this->statfname;
          sprintf(local_2094,"%s/Stat_%sB#%02d%02d%02d_%02d%02d%02d.log",local_1094,
                  this->mpServiceIdentity,local_24->tm_year % 100,local_24->tm_mon + 1,
                  local_24->tm_mday,local_24->tm_hour,local_24->tm_min,local_24->tm_sec);
        }
        iVar3 = rename(local_34,local_2094);
        if (iVar3 < 0) {
          set_fd(this,0x148);
          piVar1 = __errno_location();
          iVar3 = *piVar1;
          piVar1 = __errno_location();
          pcVar2 = strerror(*piVar1);
          errorLog(this,"sysNSL_LOG_date_ch rename() errmsg[%s(%d)]",pcVar2,iVar3);
        }
      }
      pcVar2 = (char *)0x14e;
      set_fd(this,0x14e);
    }
  }
  else if (this->bNeedToLeaveErrorLogForOverSize != false) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    piVar1 = __errno_location();
    pcVar4 = strerror(*piVar1);
    pcVar2 = "sysNSL_LOG_date_ch access fail : errmsg[%s(%d)] : logfilename[%s]";
    errorLog(this,"sysNSL_LOG_date_ch access fail : errmsg[%s(%d)] : logfilename[%s]",pcVar4,iVar3,
             this->logfname);
    this->bNeedToLeaveErrorLogForOverSize = false;
  }
LAB_080b664d:
  TScopedLock<nsl::TThreadLock<nsl::ThreadLock_linux>_>::~TScopedLock(&local_38,(int)pcVar2);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/TraceLog.cpp)（约第 75 行）：

```cpp
void TraceLog::sysNSL_LOG_date_ch()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > slock(lockLog);
    struct stat st;
    int rst;
    // ORIG: 赋值在条件内（mov rst; shr $0x1f; test; je）
    if ((rst = stat(logfname, &st)) < 0)
    {
        errorLog("sysNSL_LOG_date_ch stat() errmsg[%s(%d)] [%s]", strerror(errno), errno, logfname);
        exit(1);
    }
    // 原始：access 失败分支在成功分支之前（callset 顺序）
    if (access(logfname, 0) != 0)
    {
        if (bNeedToLeaveErrorLogForOverSize != false)
        {
            errorLog("sysNSL_LOG_date_ch access fail : errmsg[%s(%d)] : logfilename[%s]", strerror(errno), errno, logfname);
            bNeedToLeaveErrorLogForOverSize = false;
        }
    }
    else
    {
        if (0x1388000 < st.st_size)
        {
            bChangedDataForLog = true;
        }
        // 原始：if (!bChangedDataForLog) 跳过；否则旋转日志
        if (bChangedDataForLog != false)
        {
            bChangedDataForLog = false;
            char logdname[4096];
            char renfname[4096];
            sprintf(logdname, "%s/old_log", G_Script()->findCharValue(0, 1));
            if ((rst = stat(logdname, &st)) < 0)
            {
                if (errno != ENOENT)
                {
                    errorLog("sysNSL_LOG_date_ch stat() errmsg[%s(%d)]", strerror(errno), errno);
                    return;
                }
                if (MakeDir(logdname) < 0)
                {
                    errorLog("sysNSL_LOG_date_ch mkdir() errmsg[%s(%d)]", strerror(errno), errno);
                    return;
                }
            }
            // 原始：close 结果存局部再与 0 比较
            int close_rst = close(logfd);
            if (close_rst != 0)
            {
                printf("file close error ('%s'), fd=%d\n", strerror(errno), logfd);
            }
            close_rst = close(errfd);
            if (close_rst != 0)
            {
                printf("file close error ('%s'), fd=%d\n", strerror(errno), errfd);
            }
            close_rst = close(statfd);
            if (close_rst != 0)
            {
                printf("file close error ('%s'), fd=%d\n", strerror(errno), statfd);
            }
            char* orifname = NULL;
            for (int i = 0; i < 3; i = i + 1)
            {
                time_t now = time(NULL);
                tm* tm_now = localtime(&now);
                if (i == 0)
                {
                    orifname = logfname;
                    sprintf(renfname, "%s/Info_%sB#%02d%02d%02d_%02d%02d%02d.log", logdname, mpServiceIdentity, tm_now->tm_year % 100, tm_now->tm_mon + 1, tm_now->tm_mday, tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
                }
                else if (i == 1)
                {
                    orifname = errfname;
                    sprintf(renfname, "%s/Error_%sB#%02d%02d%02d_%02d%02d%02d.log", logdname, mpServiceIdentity, tm_now->tm_year % 100, tm_now->tm_mon + 1, tm_now->tm_mday, tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
                }
                else
                {
                    orifname = statfname;
                    sprintf(renfname, "%s/Stat_%sB#%02d%02d%02d_%02d%02d%02d.log", logdname, mpServiceIdentity, tm_now->tm_year % 100, tm_now->tm_mon + 1, tm_now->tm_mday, tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
                }
                if (rename(orifname, renfname) < 0)
                {
                    set_fd(0x148);
                    errorLog("sysNSL_LOG_date_ch rename() errmsg[%s(%d)]", strerror(errno), errno);
                }
            }
            set_fd(0x14e);
        }
    }
}
```
