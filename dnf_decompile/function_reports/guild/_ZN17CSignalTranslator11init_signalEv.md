# _ZN17CSignalTranslator11init_signalEv

`CSignalTranslator::init_signal()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804b422` | `0xe4b` | `0x8083d16` | `0xe67` |

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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
+test   %eax,%eax
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
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
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
                    /* try { // try from 0804b47d to 0804b481 has its CatchHandler @ 0804b500 */
    std::string::string(local_8c,"regist_signal():SIGTERM",&local_85);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b49f to 0804b4a3 has its CatchHandler @ 0804b4a6 */
    CDNFException::CDNFException(pCVar2,local_8c);
                    /* try { // try from 0804b4eb to 0804b4ef has its CatchHandler @ 0804b4f2 */
    std::string::~string(local_8c);
    std::allocator<char>::~allocator((allocator<char> *)&local_85);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,10,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804b58e to 0804b592 has its CatchHandler @ 0804b608 */
    std::string::string(local_84,"regist_signal():SIGUSR1",&local_7d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b5ad to 0804b5b1 has its CatchHandler @ 0804b5b4 */
    CDNFException::CDNFException(pCVar2,local_84);
                    /* try { // try from 0804b5f3 to 0804b5f7 has its CatchHandler @ 0804b5fa */
    std::string::~string(local_84);
    std::allocator<char>::~allocator((allocator<char> *)&local_7d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xc,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804b690 to 0804b694 has its CatchHandler @ 0804b70a */
    std::string::string(local_7c,"regist_signal():SIGUSR2",&local_75);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b6af to 0804b6b3 has its CatchHandler @ 0804b6b6 */
    CDNFException::CDNFException(pCVar2,local_7c);
                    /* try { // try from 0804b6f5 to 0804b6f9 has its CatchHandler @ 0804b6fc */
    std::string::~string(local_7c);
    std::allocator<char>::~allocator((allocator<char> *)&local_75);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,2,(_func_void_int *)0x1);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804b792 to 0804b796 has its CatchHandler @ 0804b80c */
    std::string::string(local_74,"regist_signal():SIGINT",&local_6d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b7b1 to 0804b7b5 has its CatchHandler @ 0804b7b8 */
    CDNFException::CDNFException(pCVar2,local_74);
                    /* try { // try from 0804b7f7 to 0804b7fb has its CatchHandler @ 0804b7fe */
    std::string::~string(local_74);
    std::allocator<char>::~allocator((allocator<char> *)&local_6d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xb,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804b894 to 0804b898 has its CatchHandler @ 0804b90e */
    std::string::string(local_6c,"regist_signal():SIGSEGV",&local_65);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b8b3 to 0804b8b7 has its CatchHandler @ 0804b8ba */
    CDNFException::CDNFException(pCVar2,local_6c);
                    /* try { // try from 0804b8f9 to 0804b8fd has its CatchHandler @ 0804b900 */
    std::string::~string(local_6c);
    std::allocator<char>::~allocator((allocator<char> *)&local_65);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,8,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804b996 to 0804b99a has its CatchHandler @ 0804ba10 */
    std::string::string(local_64,"regist_signal():SIGFPE",&local_5d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804b9b5 to 0804b9b9 has its CatchHandler @ 0804b9bc */
    CDNFException::CDNFException(pCVar2,local_64);
                    /* try { // try from 0804b9fb to 0804b9ff has its CatchHandler @ 0804ba02 */
    std::string::~string(local_64);
    std::allocator<char>::~allocator((allocator<char> *)&local_5d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0xd,(_func_void_int *)0x1);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804ba98 to 0804ba9c has its CatchHandler @ 0804bb12 */
    std::string::string(local_5c,"regist_signal():SIGPIPE",&local_55);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bab7 to 0804babb has its CatchHandler @ 0804babe */
    CDNFException::CDNFException(pCVar2,local_5c);
                    /* try { // try from 0804bafd to 0804bb01 has its CatchHandler @ 0804bb04 */
    std::string::~string(local_5c);
    std::allocator<char>::~allocator((allocator<char> *)&local_55);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,4,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804bb9a to 0804bb9e has its CatchHandler @ 0804bc14 */
    std::string::string(local_54,"regist_signal():SIGILL",&local_4d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bbb9 to 0804bbbd has its CatchHandler @ 0804bbc0 */
    CDNFException::CDNFException(pCVar2,local_54);
                    /* try { // try from 0804bbff to 0804bc03 has its CatchHandler @ 0804bc06 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,7,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804bc9c to 0804bca0 has its CatchHandler @ 0804bd16 */
    std::string::string(local_4c,"regist_signal():SIGBUS",&local_45);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bcbb to 0804bcbf has its CatchHandler @ 0804bcc2 */
    CDNFException::CDNFException(pCVar2,local_4c);
                    /* try { // try from 0804bd01 to 0804bd05 has its CatchHandler @ 0804bd08 */
    std::string::~string(local_4c);
    std::allocator<char>::~allocator((allocator<char> *)&local_45);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x10,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804bd9e to 0804bda2 has its CatchHandler @ 0804be18 */
    std::string::string(local_44,"regist_signal():SIGSTKFLT",&local_3d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bdbd to 0804bdc1 has its CatchHandler @ 0804bdc4 */
    CDNFException::CDNFException(pCVar2,local_44);
                    /* try { // try from 0804be03 to 0804be07 has its CatchHandler @ 0804be0a */
    std::string::~string(local_44);
    std::allocator<char>::~allocator((allocator<char> *)&local_3d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x17,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804bea0 to 0804bea4 has its CatchHandler @ 0804bf1a */
    std::string::string(local_3c,"regist_signal():SIGURG",&local_35);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bebf to 0804bec3 has its CatchHandler @ 0804bec6 */
    CDNFException::CDNFException(pCVar2,local_3c);
                    /* try { // try from 0804bf05 to 0804bf09 has its CatchHandler @ 0804bf0c */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)&local_35);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x18,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804bfa2 to 0804bfa6 has its CatchHandler @ 0804c01c */
    std::string::string(local_34,"regist_signal():SIGXCPU",&local_2d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804bfc1 to 0804bfc5 has its CatchHandler @ 0804bfc8 */
    CDNFException::CDNFException(pCVar2,local_34);
                    /* try { // try from 0804c007 to 0804c00b has its CatchHandler @ 0804c00e */
    std::string::~string(local_34);
    std::allocator<char>::~allocator((allocator<char> *)&local_2d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x19,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804c0a4 to 0804c0a8 has its CatchHandler @ 0804c11e */
    std::string::string(local_2c,"regist_signal():SIGXFSZ",&local_25);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804c0c3 to 0804c0c7 has its CatchHandler @ 0804c0ca */
    CDNFException::CDNFException(pCVar2,local_2c);
                    /* try { // try from 0804c109 to 0804c10d has its CatchHandler @ 0804c110 */
    std::string::~string(local_2c);
    std::allocator<char>::~allocator((allocator<char> *)&local_25);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  cVar1 = regist_signal(this,0x1f,signal_handler);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0804c1a6 to 0804c1aa has its CatchHandler @ 0804c220 */
    std::string::string(local_24,"regist_signal():SIGSYS",local_1d);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804c1c5 to 0804c1c9 has its CatchHandler @ 0804c1cc */
    CDNFException::CDNFException(pCVar2,local_24);
                    /* try { // try from 0804c20b to 0804c20f has its CatchHandler @ 0804c212 */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFSignalTranslator.cpp](source/DNFServer/GameServer/Guild/DNFSignalTranslator.cpp)（约第 133 行）：

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
