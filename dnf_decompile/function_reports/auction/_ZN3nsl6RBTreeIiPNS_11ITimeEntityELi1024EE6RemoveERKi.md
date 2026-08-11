# _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi

`nsl::RBTree<int, nsl::ITimeEntity*, 1024>::Remove(int const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80bf3bc` | `0x4ad` | `0x80b1faa` | `0x4c0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,382 +1,386 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE8findNodeERKi>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x4a6>
-mov    -0x28(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x7c>
-mov    -0x28(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x7c>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2b>
+mov    $0x0,%eax
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x4be>
+mov    -0x28(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x89>
+mov    -0x28(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x89>
 mov    -0x28(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x20(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x53>
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x60>
 mov    -0x20(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 setne  %al
 test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x44>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x51>
 mov    -0x1c(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    -0x1c(%ebp),%eax
 mov    0x14(%eax),%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x14(%eax)
 mov    -0x1c(%ebp),%eax
 mov    %eax,-0x28(%ebp)
 movl   $0x0,-0x24(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x8(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x98>
-mov    -0x28(%ebp),%eax
-mov    0x8(%eax),%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xa5>
+mov    -0x28(%ebp),%eax
+mov    0x4(%eax),%eax
 mov    %eax,-0x24(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xa1>
-mov    -0x28(%ebp),%eax
-mov    0x4(%eax),%eax
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xae>
+mov    -0x28(%ebp),%eax
+mov    0x8(%eax),%eax
 mov    %eax,-0x24(%ebp)
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xd1>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xc2>
+mov    0x8(%ebp),%eax
+mov    -0x24(%ebp),%edx
+mov    %edx,0x8(%eax)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xe7>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xc4>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xdc>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,0x4(%eax)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xda>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    -0x24(%ebp),%edx
-mov    %edx,0x8(%eax)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xda>
-mov    0x8(%ebp),%eax
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xe7>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,0x8(%eax)
 cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0xea>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x495>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    %edx,(%eax)
-cmpl   $0x0,-0x24(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x47b>
 movl   $0x0,-0x18(%ebp)
 movb   $0x0,-0x11(%ebp)
 mov    -0x28(%ebp),%eax
 mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 mov    -0x18(%ebp),%eax
 cmp    $0x4,%eax
-ja     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x44f>
-mov    &data#01de972c(.rodata)(,%eax,4),%eax
+ja     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x469>
+mov    &data#1c16585a(.rodata)(,%eax,4),%eax
 jmp    *%eax
 mov    -0x10(%ebp),%eax
 movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x15b>
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x16c>
 mov    -0x24(%ebp),%eax
 movzbl 0xc(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x149>
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x15a>
 mov    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 mov    -0x24(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x1,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x179>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x187>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 movl   $0x2,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE10getSiblingEv>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1fc>
-mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1f0>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1b0>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
+mov    -0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x20d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1dc>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1f9>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x1f0>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x20d>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
 movl   $0x3,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x26d>
-mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x26d>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x235>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x26d>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x24d>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x26d>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x281>
+mov    -0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x281>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x249>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x281>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x261>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x281>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,-0x10(%ebp)
 movl   $0x1,-0x18(%ebp)
 nop
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 movl   $0x4,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-movzbl 0xc(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2de>
-mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2de>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2a9>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2de>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2c1>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2de>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
-mov    -0x10(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x449>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2f2>
+mov    -0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2f2>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2bd>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2f2>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2d5>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x2f2>
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
+mov    -0x10(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x463>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x353>
-mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x353>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x353>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-movzbl 0xc(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x353>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x326>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x353>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x36a>
+mov    -0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x36a>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x36a>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+movzbl 0xc(%eax),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x36a>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x33d>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x36a>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
 mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x8(%eax),%eax
 cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
-mov    -0xc(%ebp),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x383>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-movzbl 0xc(%eax),%eax
-test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3c6>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
+mov    -0xc(%ebp),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x39a>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+movzbl 0xc(%eax),%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+movzbl 0xc(%eax),%eax
+xor    $0x1,%eax
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x3e0>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 movzbl 0xc(%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %dl,0xc(%eax)
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    0x4(%eax),%eax
 cmp    -0x10(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x41d>
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x407>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x437>
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x421>
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x449>
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x435>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x463>
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x44f>
 mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0x10(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
 movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x46c>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x486>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Remove(), DONT_REACH_HERE",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x10a>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x118>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN5boost4poolINS_33default_user_allocator_new_deleteEE4freeEPv>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    $0x1,%eax
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi+0x4ab>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool Remove(RBTree<int,_nsl::ITimeEntity*,_1024> * this, int * rKey) */

bool __thiscall
nsl::RBTree<int,_nsl::ITimeEntity*,_1024>::_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6RemoveERKi
          (RBTree<int,_nsl::ITimeEntity*,_1024> *this,int *rKey)

{
  bool bVar1;
  TraceLog *this_00;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_2c;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_28;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_24;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_20;
  undefined4 local_1c;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_14;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_10;
  
                    /* Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * target@[???] */
  local_2c = findNode(this,rKey);
  if (local_2c == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
    bVar1 = false;
  }
  else {
                    /* Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * child@[???] */
    if ((local_2c->mLeftChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) &&
       (local_2c->mRightChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0)) {
                    /* Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * next@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * rightmost@[???]
                        */
      for (local_24 = local_2c->mLeftChild; local_24 != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0;
          local_24 = local_24->mRightChild) {
        local_20 = local_24;
      }
      local_2c->mKey = local_20->mKey;
      local_2c->mData = local_20->mData;
      local_2c = local_20;
    }
    if (local_2c->mRightChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
      local_28 = local_2c->mLeftChild;
    }
    else {
      local_28 = local_2c->mRightChild;
    }
    if (local_2c->mParent == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
      this->mpRoot = local_28;
    }
    else if (local_2c->mParent->mLeftChild == local_2c) {
      local_2c->mParent->mLeftChild = local_28;
    }
    else {
      local_2c->mParent->mRightChild = local_28;
    }
    if (local_28 != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
      local_28->mParent = local_2c->mParent;
                    /* Unresolved local var: ENUM_RBTREE_DELETE_CASE delete_case@[???]
                       Unresolved local var: bool end_loop@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * pNode@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * sibling@[???] */
      local_1c = 0;
      bVar1 = false;
      local_14 = local_2c;
      while (!bVar1) {
        switch(local_1c) {
        case 0:
          if (local_14->mColor == '\x01') {
            if (local_28->mColor == '\0') {
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_28);
              bVar1 = true;
            }
            else {
              local_14 = local_28;
              local_1c = 1;
            }
          }
          else {
            bVar1 = true;
          }
          break;
        case 1:
          if (local_14->mParent == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
            bVar1 = true;
          }
          else {
            local_1c = 2;
          }
          break;
        case 2:
          local_10 = changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::getSibling(local_14);
          if (local_10 == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
            bVar1 = true;
          }
          else {
            if (local_10->mColor == '\0') {
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_14->mParent);
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_10);
              if (local_14->mParent->mLeftChild == local_14) {
                _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                          (this,local_14->mParent);
              }
              else {
                _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                          (this,local_14->mParent);
              }
            }
            local_1c = 3;
          }
          break;
        case 3:
          if ((((local_14->mParent->mColor == '\x01') && (local_10->mColor == '\x01')) &&
              ((local_10->mLeftChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
               (local_10->mLeftChild->mColor == '\x01')))) &&
             ((local_10->mRightChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
              (local_10->mRightChild->mColor == '\x01')))) {
            changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_10);
            local_14 = local_14->mParent;
            local_1c = 1;
          }
          else {
            local_1c = 4;
          }
          break;
        case 4:
          if ((((local_14->mParent->mColor == '\0') && (local_10->mColor == '\x01')) &&
              ((local_10->mLeftChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
               (local_10->mLeftChild->mColor == '\x01')))) &&
             ((local_10->mRightChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
              (local_10->mRightChild->mColor == '\x01')))) {
            changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_10);
            changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_14->mParent);
          }
          else {
            if ((local_14->mParent->mLeftChild == local_14) &&
               ((((local_10->mColor == '\x01' &&
                  (local_10->mLeftChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0)) &&
                 (local_10->mLeftChild->mColor == '\0')) &&
                ((local_10->mRightChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
                 (local_10->mRightChild->mColor == '\x01')))))) {
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_10);
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack
                        (local_10->mLeftChild);
              _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                        (this,local_10);
            }
            else if ((((local_14->mParent->mRightChild == local_14) && (local_10->mColor == '\x01'))
                     && (((local_10->mLeftChild == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0 ||
                          (local_10->mLeftChild->mColor == '\x01')) &&
                         (local_10->mRightChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0))))
                    && (local_10->mRightChild->mColor == '\0')) {
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_10);
              changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack
                        (local_10->mRightChild);
              _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                        (this,local_10);
            }
            local_10->mColor = local_14->mParent->mColor;
            changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_14->mParent);
            if (local_14->mParent->mLeftChild == local_14) {
              if (local_10->mRightChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
                changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack
                          (local_10->mRightChild);
              }
              _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                        (this,local_14->mParent);
            }
            else {
              if (local_10->mLeftChild != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
                changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack
                          (local_10->mLeftChild);
              }
              _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                        (this,local_14->mParent);
            }
          }
          bVar1 = true;
          break;
        default:
          this_00 = G_TraceLog();
          TraceLog::sysLog(this_00,8,"Remove(), DONT_REACH_HERE");
        }
      }
    }
    boost::pool<boost::default_user_allocator_new_delete>::free(this->mpRBNodePool,local_2c);
    this->mNumOfRBNode = this->mNumOfRBNode - 1;
    bVar1 = true;
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimeManager.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnections.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DataPools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Dispatchers.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/EncyptTools.h 等 505 个文件*
