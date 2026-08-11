# _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_

`nsl::RBTree<int, nsl::ITimeEntity*, 1024>::Insert(int const&, nsl::ITimeEntity* const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80bf020` | `0x39b` | `0x80b1c18` | `0x392` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,275 +1,271 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5boost4poolINS_33default_user_allocator_new_deleteEE6mallocEv>
 mov    %eax,-0x28(%ebp)
 cmpl   $0x0,-0x28(%ebp)
 jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x44>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Insert(), OUT_OF_MEMORY",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x399>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x390>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE4initEv>
 mov    0xc(%ebp),%eax
 mov    (%eax),%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    0x10(%ebp),%eax
 mov    (%eax),%edx
 mov    -0x28(%ebp),%eax
 mov    %edx,0x14(%eax)
 movl   $0x0,-0x24(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x20(%ebp)
 movl   $0x0,-0x1c(%ebp)
 jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xdd>
 mov    -0x20(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x28(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    %eax,%edx
 jge    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xa6>
 movl   $0x1,-0x24(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,-0x20(%ebp)
 jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xdd>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xcd>
 mov    -0x28(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    -0x20(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    %eax,%edx
 jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xcd>
 mov    $0x0,%eax
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x399>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x390>
 movl   $0x2,-0x24(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x20(%ebp)
 cmpl   $0x0,-0x20(%ebp)
 setne  %al
 test   %al,%al
 jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x7e>
-mov    -0x24(%ebp),%eax
-cmp    $0x1,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0xf7>
-cmp    $0x2,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x10a>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x11d>
+cmpl   $0x1,-0x24(%ebp)
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x101>
 mov    -0x1c(%ebp),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    -0x28(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,(%eax)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x149>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x146>
+cmpl   $0x2,-0x24(%ebp)
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x11a>
 mov    -0x1c(%ebp),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%eax)
 mov    -0x28(%ebp),%eax
 mov    -0x1c(%ebp),%edx
 mov    %edx,(%eax)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x149>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x146>
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x140>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x13d>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Insert(), ROOT_INSERT_ERROR",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 mov    0x8(%ebp),%eax
 mov    -0x28(%ebp),%edx
 mov    %edx,0x8(%eax)
 movl   $0x0,-0x18(%ebp)
 movb   $0x0,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 mov    -0x18(%ebp),%eax
 cmp    $0x1,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1ab>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1a8>
 cmp    $0x1,%eax
-jg     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x16f>
+jg     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x16c>
 test   %eax,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x182>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x359>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x17f>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x350>
 cmp    $0x2,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1cd>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1ca>
 cmp    $0x3,%eax
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x23c>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x359>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x233>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x350>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x19f>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x19c>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 movl   $0x1,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 movzbl 0xc(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1c1>
+test   %al,%al
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1be>
 movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 movl   $0x2,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE8getUncleEv>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x230>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1e9>
 mov    -0x10(%ebp),%eax
 movzbl 0xc(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x230>
+je     <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x1f6>
+movl   $0x3,-0x18(%ebp)
+nop
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 mov    -0x28(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE14getGrandParentEv>
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE14getGrandParentEv>
 mov    %eax,-0xc(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+cmp    -0x28(%ebp),%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x27c>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x27c>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
+mov    -0x28(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x28(%ebp)
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2b5>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+cmp    -0x28(%ebp),%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2b5>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2b5>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
+mov    -0x28(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
-movl   $0x0,-0x18(%ebp)
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x28(%ebp)
-nop
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
-movl   $0x3,-0x18(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE14getGrandParentEv>
-mov    %eax,-0xc(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x285>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x285>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    0x4(%eax),%eax
+cmp    -0x28(%ebp),%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2fd>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2fd>
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x34a>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%eax
+mov    0x8(%eax),%eax
+cmp    -0x28(%ebp),%eax
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x32d>
+mov    -0x28(%ebp),%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    0x8(%eax),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x32d>
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-mov    -0x28(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,-0x28(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2be>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2be>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x2be>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-mov    -0x28(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE13SetColorBlackEv>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl15changes_meaning6RBNodeIiPNS_11ITimeEntityELi1024EE11SetColorRedEv>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    0x4(%eax),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x306>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x306>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x353>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%eax
-mov    0x8(%eax),%eax
-cmp    -0x28(%ebp),%eax
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x336>
-mov    -0x28(%ebp),%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    0x8(%eax),%eax
-cmp    %eax,%edx
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x336>
-mov    -0xc(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE>
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x353>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x34a>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Insert(), err RBTREE_INSERT_CASE_UNCLE_NOT_RED_AFERT_ALIGN",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movb   $0x1,-0x11(%ebp)
-jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x376>
+jmp    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x36d>
 call   <T> <_ZN3nsl10G_TraceLogEv>
 movl   $"Insert(),err RBTREE_INSERT_CASE_DONT_REACH_HERE",0x8(%esp)
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TraceLog6sysLogEiPKcz>
 movzbl -0x11(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x159>
+jne    <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_+0x156>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: bool Insert(RBTree<int,_nsl::ITimeEntity*,_1024> * this, int * rKey,
   ITimeEntity * * rNewData) */

bool __thiscall
nsl::RBTree<int,_nsl::ITimeEntity*,_1024>::
_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE6InsertERKiRKS2_
          (RBTree<int,_nsl::ITimeEntity*,_1024> *this,int *rKey,ITimeEntity **rNewData)

{
  bool bVar1;
  TraceLog *pTVar2;
  RBNode<int,_nsl::ITimeEntity*,_1024> *pRVar3;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_2c;
  int local_28;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_24;
  RBNode<int,_nsl::ITimeEntity*,_1024> *local_20;
  uint local_1c;
  
                    /* Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * newNode@[???]
                       Unresolved local var: int preFlow@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * curr@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * pre@[???]
                       Unresolved local var: ENUM_RBTREE_INSERT_CASE insert_case@[???]
                       Unresolved local var: bool end_loop@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> * uncle@[???]
                       Unresolved local var: RBNode<int,_nsl::ITimeEntity*,_1024> *
                       grand_parent@[???] */
  local_2c = boost::pool<boost::default_user_allocator_new_delete>::malloc(this->mpRBNodePool);
  if (local_2c == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
    pTVar2 = G_TraceLog();
    TraceLog::sysLog(pTVar2,8,"Insert(), OUT_OF_MEMORY");
    bVar1 = false;
  }
  else {
    changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::init(local_2c);
    local_2c->mKey = *rKey;
    local_2c->mData = *rNewData;
    local_28 = 0;
    local_24 = this->mpRoot;
    local_20 = (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0;
    while (local_24 != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
      local_20 = local_24;
      if (local_2c->mKey < local_24->mKey) {
        local_28 = 1;
        local_24 = local_24->mLeftChild;
      }
      else {
        if ((this->mDuplicatePermit != true) && (local_2c->mKey == local_24->mKey)) {
          return false;
        }
        local_28 = 2;
        local_24 = local_24->mRightChild;
      }
    }
    if (local_28 == 1) {
      local_20->mLeftChild = local_2c;
      local_2c->mParent = local_20;
    }
    else if (local_28 == 2) {
      local_20->mRightChild = local_2c;
      local_2c->mParent = local_20;
    }
    else {
      if (local_20 != (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
        pTVar2 = G_TraceLog();
        TraceLog::sysLog(pTVar2,8,"Insert(), ROOT_INSERT_ERROR");
      }
      this->mpRoot = local_2c;
    }
    local_1c = 0;
    bVar1 = false;
    while (!bVar1) {
      if (local_1c == 1) {
        if (local_2c->mParent->mColor == '\x01') {
          bVar1 = true;
        }
        else {
          local_1c = 2;
        }
      }
      else if (local_1c < 2) {
        if (local_1c == 0) {
          if (local_2c->mParent == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) {
            changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_2c);
            bVar1 = true;
          }
          else {
            local_1c = 1;
          }
        }
        else {
LAB_080bf379:
          pTVar2 = G_TraceLog();
          TraceLog::sysLog(pTVar2,8,"Insert(),err RBTREE_INSERT_CASE_DONT_REACH_HERE");
        }
      }
      else if (local_1c == 2) {
        pRVar3 = changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::getUncle(local_2c);
        if ((pRVar3 == (RBNode<int,_nsl::ITimeEntity*,_1024> *)0x0) || (pRVar3->mColor != '\0')) {
          local_1c = 3;
        }
        else {
          changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_2c->mParent);
          changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(pRVar3);
          local_2c = changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::getGrandParent(local_2c)
          ;
          changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(local_2c);
          local_1c = 0;
        }
      }
      else {
        if (local_1c != 3) goto LAB_080bf379;
        pRVar3 = changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::getGrandParent(local_2c);
        if ((local_2c->mParent->mRightChild == local_2c) &&
           (local_2c->mParent == pRVar3->mLeftChild)) {
          _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                    (this,local_2c->mParent);
          local_2c = local_2c->mLeftChild;
        }
        else if ((local_2c->mParent->mLeftChild == local_2c) &&
                (local_2c->mParent == pRVar3->mRightChild)) {
          _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                    (this,local_2c->mParent);
          local_2c = local_2c->mRightChild;
        }
        changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorBlack(local_2c->mParent);
        changes_meaning::RBNode<int,_nsl::ITimeEntity*,_1024>::SetColorRed(pRVar3);
        if ((local_2c->mParent->mLeftChild == local_2c) && (local_2c->mParent == pRVar3->mLeftChild)
           ) {
          _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE11rotateRightEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                    (this,pRVar3);
        }
        else if ((local_2c->mParent->mRightChild == local_2c) &&
                (local_2c->mParent == pRVar3->mRightChild)) {
          _ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE10rotateLeftEPNS_15changes_meaning6RBNodeIiS2_Li1024EEE
                    (this,pRVar3);
        }
        else {
          pTVar2 = G_TraceLog();
          TraceLog::sysLog(pTVar2,8,"Insert(), err RBTREE_INSERT_CASE_UNCLE_NOT_RED_AFERT_ALIGN");
        }
        bVar1 = true;
      }
    }
    this->mNumOfRBNode = this->mNumOfRBNode + 1;
    bVar1 = true;
  }
  return bVar1;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimeManager.cpp, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/System.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/Thread.h, source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/ThreadLock.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DBConnections.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/DataPools.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/Dispatchers.h, source/DNFServer/GameServer/ServerLab/ServerLib/common_source/EncyptTools.h 等 505 个文件*
