# _ZN17CSignalTranslator11init_signalEv

`CSignalTranslator::init_signal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8050d46` | `0xe4b` | `0x805f5a2` | `0xe67` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,1062 +1,1076 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x8c,%esp
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0xf,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x126>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x128>
 lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x81(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGTERM",0x4(%esp)
 lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x88(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xc0>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xc2>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xba>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe2>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe2>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbc>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe4>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe4>
 lea    -0x88(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x100>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe2>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x102>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe4>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x81(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0xa,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x228>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x22c>
 lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x79(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGUSR1",0x4(%esp)
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x80(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1cb>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1cf>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1c5>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ea>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ea>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1c9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ee>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ee>
 lea    -0x80(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x205>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ea>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x209>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x1ee>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x79(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0xc,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x32a>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x330>
 lea    -0x71(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x71(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGUSR2",0x4(%esp)
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x78(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x2d3>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%esi
+mov    %ecx,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%ecx
+mov    %esi,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x78(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x2cd>
 mov    %eax,%ecx
 mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x2f2>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x2f2>
 lea    -0x78(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x2c7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x2ec>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x2ec>
-lea    -0x78(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x307>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x2ec>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x30d>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x2f2>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x71(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x71(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x1,0x8(%esp)
 movl   $0x2,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x42c>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x434>
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x69(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGINT",0x4(%esp)
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x70(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3cf>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3d7>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3c9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x3ee>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3ee>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3d1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x3f6>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x3f6>
 lea    -0x70(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x409>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x3ee>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x411>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x3f6>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x69(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0xb,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x52e>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x538>
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x61(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGSEGV",0x4(%esp)
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x68(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4d1>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4db>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4cb>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x4f0>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4f0>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4d5>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x4fa>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x4fa>
 lea    -0x68(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x50b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x4f0>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x515>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x4fa>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x61(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x630>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x63c>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x59(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGFPE",0x4(%esp)
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x60(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5d3>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5df>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5cd>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x5f2>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5f2>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5d9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x5fe>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x5fe>
 lea    -0x60(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x60d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x5f2>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x619>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x5fe>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x59(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x1,0x8(%esp)
 movl   $0xd,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x732>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x740>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x51(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGPIPE",0x4(%esp)
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x58(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x6d5>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x6e3>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x6cf>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x6f4>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x6f4>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x6dd>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x702>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x702>
 lea    -0x58(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x70f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x6f4>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x71d>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x702>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x834>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x844>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x49(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGILL",0x4(%esp)
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x50(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x7d7>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x7e7>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x7d1>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x7f6>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x7f6>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x7e1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x806>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x806>
 lea    -0x50(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x811>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x7f6>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x821>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x806>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x49(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x7,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0x936>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0x948>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGBUS",0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x8d9>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x8eb>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x8d3>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x8f8>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x8f8>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x8e5>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x90a>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x90a>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x913>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x8f8>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x925>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x90a>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0xa38>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0xa4c>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x39(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGSTKFLT",0x4(%esp)
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x40(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x9db>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x9ef>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x9d5>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x9fa>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x9fa>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0x9e9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xa0e>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xa0e>
 lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xa15>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0x9fa>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xa29>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xa0e>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x39(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x17,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0xb3a>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0xb50>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGURG",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xadd>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xaf3>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xad7>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xafc>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xafc>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xaed>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xb12>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xb12>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xb17>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xafc>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xb2d>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xb12>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x18,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0xc3c>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0xc54>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGXCPU",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbdf>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbf7>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbd9>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xbfe>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbfe>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xbf1>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xc16>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xc16>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xc19>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xbfe>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xc31>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xc16>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x19,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0xd3e>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0xd58>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGXFSZ",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xce1>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xcfb>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xcdb>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xd00>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xd00>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xcf5>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xd1a>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xd1a>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xd1b>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xd00>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xd35>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xd1a>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 movl   $&_Z14signal_handleri,0x8(%esp)
 movl   $0x1f,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator13regist_signalEiPFviE>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN17CSignalTranslator11init_signalEv+0xe40>
+test   %al,%al
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CSignalTranslator11init_signalEv+0xe5c>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"regist_signal():SIGSYS",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x20(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xde3>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xdff>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xddd>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe02>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe02>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xdf9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe1e>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe1e>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe1d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe02>
+jmp    <T> <_ZN17CSignalTranslator11init_signalEv+0xe39>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN17CSignalTranslator11init_signalEv+0xe1e>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 add    $0x8c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::init_signal() */

void __thiscall CSignalTranslator::_ZN17CSignalTranslator11init_signalEv(CSignalTranslator *this)

{
  char cVar1;
  CDNFException *pCVar2;
  string local_8c [7];
  allocator local_85;
  string local_84 [7];
  allocator local_7d;
  string local_7c [7];
  allocator local_75;
  string local_74 [7];
  allocator local_6d;
  string local_6c [7];
  allocator local_65;
  string local_64 [7];
  allocator local_5d;
  string local_5c [7];
  allocator local_55;
  string local_54 [7];
  allocator local_4d;
  string local_4c [7];
  allocator local_45;
  string local_44 [7];
  allocator local_3d;
  string local_3c [7];
  allocator local_35;
  string local_34 [7];
  allocator local_2d;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d [13];
  
  cVar1 = regist_signal(this,0xf,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 08050da1 to 08050da5 has its CatchHandler @ 08050e24 */
    std::string::string(local_8c,"regist_signal():SIGTERM",&local_85);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08050dc3 to 08050dc7 has its CatchHandler @ 08050dca */
    CDNFException::CDNFException(pCVar2,local_8c);
                    /* try { // try from 08050e0f to 08050e13 has its CatchHandler @ 08050e16 */
    std::string::~string(local_8c);
    std::allocator<char>::~allocator((allocator<char> *)&local_85);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,10,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 08050eb2 to 08050eb6 has its CatchHandler @ 08050f2c */
    std::string::string(local_84,"regist_signal():SIGUSR1",&local_7d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08050ed1 to 08050ed5 has its CatchHandler @ 08050ed8 */
    CDNFException::CDNFException(pCVar2,local_84);
                    /* try { // try from 08050f17 to 08050f1b has its CatchHandler @ 08050f1e */
    std::string::~string(local_84);
    std::allocator<char>::~allocator((allocator<char> *)&local_7d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xc,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 08050fb4 to 08050fb8 has its CatchHandler @ 0805102e */
    std::string::string(local_7c,"regist_signal():SIGUSR2",&local_75);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08050fd3 to 08050fd7 has its CatchHandler @ 08050fda */
    CDNFException::CDNFException(pCVar2,local_7c);
                    /* try { // try from 08051019 to 0805101d has its CatchHandler @ 08051020 */
    std::string::~string(local_7c);
    std::allocator<char>::~allocator((allocator<char> *)&local_75);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,2,(_func_void_int *)0x1);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080510b6 to 080510ba has its CatchHandler @ 08051130 */
    std::string::string(local_74,"regist_signal():SIGINT",&local_6d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080510d5 to 080510d9 has its CatchHandler @ 080510dc */
    CDNFException::CDNFException(pCVar2,local_74);
                    /* try { // try from 0805111b to 0805111f has its CatchHandler @ 08051122 */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xb,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080511b8 to 080511bc has its CatchHandler @ 08051232 */
    std::string::string(local_6c,"regist_signal():SIGSEGV",&local_65);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080511d7 to 080511db has its CatchHandler @ 080511de */
    CDNFException::CDNFException(pCVar2,local_6c);
                    /* try { // try from 0805121d to 08051221 has its CatchHandler @ 08051224 */
    std::string::~string(local_6c);
    std::allocator<char>::~allocator((allocator<char> *)&local_65);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,8,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080512ba to 080512be has its CatchHandler @ 08051334 */
    std::string::string(local_64,"regist_signal():SIGFPE",&local_5d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080512d9 to 080512dd has its CatchHandler @ 080512e0 */
    CDNFException::CDNFException(pCVar2,local_64);
                    /* try { // try from 0805131f to 08051323 has its CatchHandler @ 08051326 */
    std::string::~string(local_64);
    std::allocator<char>::~allocator((allocator<char> *)&local_5d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xd,(_func_void_int *)0x1);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080513bc to 080513c0 has its CatchHandler @ 08051436 */
    std::string::string(local_5c,"regist_signal():SIGPIPE",&local_55);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080513db to 080513df has its CatchHandler @ 080513e2 */
    CDNFException::CDNFException(pCVar2,local_5c);
                    /* try { // try from 08051421 to 08051425 has its CatchHandler @ 08051428 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,4,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080514be to 080514c2 has its CatchHandler @ 08051538 */
    std::string::string(local_54,"regist_signal():SIGILL",&local_4d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080514dd to 080514e1 has its CatchHandler @ 080514e4 */
    CDNFException::CDNFException(pCVar2,local_54);
                    /* try { // try from 08051523 to 08051527 has its CatchHandler @ 0805152a */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,7,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080515c0 to 080515c4 has its CatchHandler @ 0805163a */
    std::string::string(local_4c,"regist_signal():SIGBUS",&local_45);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080515df to 080515e3 has its CatchHandler @ 080515e6 */
    CDNFException::CDNFException(pCVar2,local_4c);
                    /* try { // try from 08051625 to 08051629 has its CatchHandler @ 0805162c */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x10,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080516c2 to 080516c6 has its CatchHandler @ 0805173c */
    std::string::string(local_44,"regist_signal():SIGSTKFLT",&local_3d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080516e1 to 080516e5 has its CatchHandler @ 080516e8 */
    CDNFException::CDNFException(pCVar2,local_44);
                    /* try { // try from 08051727 to 0805172b has its CatchHandler @ 0805172e */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x17,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080517c4 to 080517c8 has its CatchHandler @ 0805183e */
    std::string::string(local_3c,"regist_signal():SIGURG",&local_35);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080517e3 to 080517e7 has its CatchHandler @ 080517ea */
    CDNFException::CDNFException(pCVar2,local_3c);
                    /* try { // try from 08051829 to 0805182d has its CatchHandler @ 08051830 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)&local_35);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x18,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080518c6 to 080518ca has its CatchHandler @ 08051940 */
    std::string::string(local_34,"regist_signal():SIGXCPU",&local_2d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080518e5 to 080518e9 has its CatchHandler @ 080518ec */
    CDNFException::CDNFException(pCVar2,local_34);
                    /* try { // try from 0805192b to 0805192f has its CatchHandler @ 08051932 */
    std::string::~string(local_34);
    std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x19,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080519c8 to 080519cc has its CatchHandler @ 08051a42 */
    std::string::string(local_2c,"regist_signal():SIGXFSZ",&local_25);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080519e7 to 080519eb has its CatchHandler @ 080519ee */
    CDNFException::CDNFException(pCVar2,local_2c);
                    /* try { // try from 08051a2d to 08051a31 has its CatchHandler @ 08051a34 */
    std::string::~string(local_2c);
    std::allocator<char>::~allocator((allocator<char> *)&local_25);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x1f,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 08051aca to 08051ace has its CatchHandler @ 08051b44 */
    std::string::string(local_24,"regist_signal():SIGSYS",local_1d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08051ae9 to 08051aed has its CatchHandler @ 08051af0 */
    CDNFException::CDNFException(pCVar2,local_24);
                    /* try { // try from 08051b2f to 08051b33 has its CatchHandler @ 08051b36 */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp](source/DNFServer/GameServer/COServer/DNFSignalTranslator.cpp)（约第 65 行）：

```cpp
void CSignalTranslator::init_signal()
{
    if (!regist_signal(0xf, signal_handler))
    {
        throw CDNFException("regist_signal():SIGTERM");
    }
    if (!regist_signal(10, signal_handler))
    {
        throw CDNFException("regist_signal():SIGUSR1");
    }
    if (!regist_signal(0xc, signal_handler))
    {
        throw CDNFException("regist_signal():SIGUSR2");
    }
    if (!regist_signal(2, (void (*)(int))1))
    {
        throw CDNFException("regist_signal():SIGINT");
    }
    if (!regist_signal(0xb, signal_handler))
    {
        throw CDNFException("regist_signal():SIGSEGV");
    }
    if (!regist_signal(8, signal_handler))
    {
        throw CDNFException("regist_signal():SIGFPE");
    }
    if (!regist_signal(0xd, (void (*)(int))1))
    {
        throw CDNFException("regist_signal():SIGPIPE");
    }
    if (!regist_signal(4, signal_handler))
    {
        throw CDNFException("regist_signal():SIGILL");
    }
    if (!regist_signal(7, signal_handler))
    {
        throw CDNFException("regist_signal():SIGBUS");
    }
    if (!regist_signal(0x10, signal_handler))
    {
        throw CDNFException("regist_signal():SIGSTKFLT");
    }
    if (!regist_signal(0x17, signal_handler))
    {
        throw CDNFException("regist_signal():SIGURG");
    }
    if (!regist_signal(0x18, signal_handler))
    {
        throw CDNFException("regist_signal():SIGXCPU");
    }
    if (!regist_signal(0x19, signal_handler))
    {
        throw CDNFException("regist_signal():SIGXFSZ");
    }
    if (!regist_signal(0x1f, signal_handler))
    {
        throw CDNFException("regist_signal():SIGSYS");
    }
}
```
