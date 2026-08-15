# _ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler

`FrameLagCollector::SaveFrameLagData(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80675dc` | `0x63e` | `0x8060828` | `0x54f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,433 +1,362 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x1fc,%esp
+sub    $0x204,%esp
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 cmp    $0x2,%eax
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x21>
-mov    $0x2,%eax
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x633>
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x540>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x88(%eax),%eax
 cmp    %eax,%edx
-jl     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5f6>
+jl     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4ff>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x6c(%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x65>
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5d>
 mov    $0x0,%eax
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x633>
-lea    -0x1af(%ebp),%eax
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x54a>
+lea    -0x1b3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN42Packet_Frame_Lag_Statistic_Write_Lag_IndexC1Ev>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetServerGroupNoEv>
-mov    %al,-0x1a5(%ebp)
-lea    -0x30(%ebp),%eax
+mov    %al,-0x1a9(%ebp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
-mov    -0x30(%ebp),%eax
-mov    %eax,-0x38(%ebp)
-lea    -0x34(%ebp),%eax
+mov    -0x34(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEC1Ev>
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%edx
 lea    -0x1bc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 sub    $0x4,%esp
 mov    -0x1bc(%ebp),%eax
-mov    %eax,-0x34(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x5ba>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    (%eax),%eax
+mov    %eax,-0x38(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4c3>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
+mov    (%eax),%eax
+mov    %eax,-0x1a8(%ebp)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,-0x1a4(%ebp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    0x4(%eax),%eax
-mov    %eax,-0x1a0(%ebp)
-movl   $0x0,-0x24(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x121>
-mov    -0x24(%ebp),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x24(%ebp),%edx
+movl   $0x0,-0x20(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x119>
+mov    -0x20(%ebp),%ebx
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
+mov    -0x20(%ebp),%edx
 add    $0x8,%edx
 movzwl 0x10(%eax,%edx,2),%eax
 lea    0x8(%ebx),%edx
-mov    %ax,-0x1ac(%ebp,%edx,2)
-addl   $0x1,-0x24(%ebp)
-cmpl   $0x7,-0x24(%ebp)
+mov    %ax,-0x1b0(%ebp,%edx,2)
+addl   $0x1,-0x20(%ebp)
+cmpl   $0x7,-0x20(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xf9>
-lea    -0x34(%ebp),%eax
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xf1>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 mov    0x30(%eax),%eax
 test   %eax,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x15a>
-movw   $0xffff,-0x18c(%ebp)
-movw   $0xffff,-0x18a(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x25c>
-lea    -0x34(%ebp),%eax
+je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x152>
+movw   $0xffff,-0x190(%ebp)
+movw   $0xffff,-0x18e(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x254>
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 mov    0x34(%eax),%eax
 mov    %eax,-0x1c0(%ebp)
 fildl  -0x1c0(%ebp)
 fstpl  -0x1e0(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 mov    0x30(%eax),%eax
 mov    $0x0,%edx
 mov    %eax,-0x1c8(%ebp)
 mov    %edx,-0x1c4(%ebp)
 fildll -0x1c8(%ebp)
 fdivrl -0x1e0(%ebp)
 fnstcw -0x1ca(%ebp)
 movzwl -0x1ca(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x1cc(%ebp)
 fldcw  -0x1cc(%ebp)
 fistps -0x1ce(%ebp)
 fldcw  -0x1ca(%ebp)
 movzwl -0x1ce(%ebp),%eax
-mov    %ax,-0x18c(%ebp)
-lea    -0x34(%ebp),%eax
+mov    %ax,-0x190(%ebp)
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 mov    0x38(%eax),%eax
 mov    %eax,-0x1c0(%ebp)
 fildl  -0x1c0(%ebp)
 fstpl  -0x1d8(%ebp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 mov    0x30(%eax),%eax
 mov    $0x0,%edx
 mov    %eax,-0x1c8(%ebp)
 mov    %edx,-0x1c4(%ebp)
 fildll -0x1c8(%ebp)
 fdivrl -0x1d8(%ebp)
 fnstcw -0x1ca(%ebp)
 movzwl -0x1ca(%ebp),%eax
 mov    $0xc,%ah
 mov    %ax,-0x1cc(%ebp)
 fldcw  -0x1cc(%ebp)
 fistps -0x1ce(%ebp)
 fldcw  -0x1ca(%ebp)
 movzwl -0x1ce(%ebp),%eax
-mov    %ax,-0x18a(%ebp)
-movl   $0x0,-0x20(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x561>
-mov    -0x20(%ebp),%eax
+mov    %ax,-0x18e(%ebp)
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x46a>
+mov    -0x1c(%ebp),%eax
+lea    -0x1b3(%ebp),%ecx
 shl    $0x3,%eax
 lea    0x0(,%eax,8),%edx
 sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0x7(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0x9(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0xb(%eax)
-mov    -0x20(%ebp),%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-movw   $0x0,0xd(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
+lea    0x20(%edx),%eax
+lea    (%ecx,%eax,1),%eax
+add    $0x7,%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x18(%ebp),%eax
+movw   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+movw   $0x0,0x2(%eax)
+mov    -0x18(%ebp),%eax
+movw   $0x0,0x4(%eax)
+mov    -0x18(%ebp),%eax
+movw   $0x0,0x6(%eax)
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
+add    $0x4,%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
 add    $0x9,%edx
 shl    $0x4,%edx
 add    %edx,%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x36c>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
+add    $0x8,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x305>
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
 add    $0xc,%edx
-mov    0xc(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x9,%edx
+mov    0x8(%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%ecx
+mov    -0x14(%ebp),%edx
+add    $0x9,%ecx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x8,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1ec(%ebp)
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x1ec(%ebp)
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dx,(%eax)
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
 shl    $0x4,%edx
 add    %edx,%eax
-add    $0xc,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
+add    $0x9c,%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x354>
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
+add    $0x14,%edx
+mov    (%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%ecx
+mov    -0x14(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0x9c,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1ec(%ebp)
+mov    %eax,%edx
 sar    $0x1f,%edx
 idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0x7(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dx,0x2(%eax)
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0xa0,%eax
 mov    (%eax),%eax
 test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3f2>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x14,%edx
-mov    0x4(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa0,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3a4>
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
+add    $0x18,%edx
+mov    0x8(%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%ecx
+mov    -0x14(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0xa0,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1ec(%ebp)
+mov    %eax,%edx
 sar    $0x1f,%edx
 idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0x9(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dx,0x4(%eax)
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
 shl    $0x4,%edx
 add    %edx,%eax
 add    $0xa4,%eax
 mov    (%eax),%eax
 test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x478>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x18,%edx
-mov    0xc(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa4,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
+jle    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3f3>
+mov    -0x1c(%ebp),%edx
+mov    -0x14(%ebp),%eax
+add    $0x20,%edx
+mov    (%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%ecx
+mov    -0x14(%ebp),%edx
+shl    $0x4,%ecx
+add    %ecx,%edx
+add    $0xa4,%edx
+mov    (%edx),%edx
+mov    %edx,-0x1ec(%ebp)
+mov    %eax,%edx
 sar    $0x1f,%edx
 idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0xb(%eax)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa8,%eax
-mov    (%eax),%eax
-test   %eax,%eax
-setg   %al
-test   %al,%al
-je     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x4fe>
-mov    -0x20(%ebp),%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-add    $0x20,%edx
-mov    0x4(%eax,%edx,4),%ebx
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    -0x20(%ebp),%edx
-shl    $0x4,%edx
-add    %edx,%eax
-add    $0xa8,%eax
-mov    (%eax),%eax
-mov    %eax,-0x1ec(%ebp)
-mov    %ebx,%edx
-mov    %edx,%eax
-sar    $0x1f,%edx
-idivl  -0x1ec(%ebp)
-mov    %eax,%ecx
-mov    %esi,%eax
-shl    $0x3,%eax
-lea    0x0(,%eax,8),%edx
-sub    %eax,%edx
-lea    -0x18(%ebp),%eax
-add    %edx,%eax
-sub    $0x177,%eax
-mov    %cx,0xd(%eax)
-movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x552>
-mov    -0x20(%ebp),%ebx
-mov    -0x1c(%ebp),%edi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
-mov    %eax,%ecx
-mov    -0x20(%ebp),%edx
-mov    -0x1c(%ebp),%esi
-mov    %ebx,%eax
-shl    $0x3,%eax
-sub    %ebx,%eax
-add    %edi,%eax
-lea    0x4(%eax),%ebx
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
+mov    %dx,0x6(%eax)
+movl   $0x0,-0x10(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x45b>
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0x10(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 shl    $0x3,%eax
 sub    %edx,%eax
-add    %esi,%eax
-add    $0x1e,%eax
-mov    0x18(%ecx,%eax,8),%edx
-mov    0x14(%ecx,%eax,8),%eax
-mov    %eax,-0x1a0(%ebp,%ebx,8)
-mov    %edx,-0x19c(%ebp,%ebx,8)
+mov    %eax,%edx
+add    -0x10(%ebp),%edx
+mov    -0xc(%ebp),%eax
+add    $0x20,%edx
+mov    (%eax,%edx,8),%edx
+mov    -0x18(%ebp),%eax
+mov    %edx,0x8(%eax,%ecx,8)
+mov    -0x10(%ebp),%ecx
+mov    -0x1c(%ebp),%edx
+mov    %edx,%eax
+shl    $0x3,%eax
+sub    %edx,%eax
+mov    %eax,%edx
+add    -0x10(%ebp),%edx
+mov    -0xc(%ebp),%eax
+mov    0x104(%eax,%edx,8),%edx
+mov    -0x18(%ebp),%eax
+add    %ecx,%ecx
+add    $0x1,%ecx
+mov    %edx,0x8(%eax,%ecx,4)
+addl   $0x1,-0x10(%ebp)
+cmpl   $0x5,-0x10(%ebp)
+setle  %al
+test   %al,%al
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x3fc>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x5,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x507>
-addl   $0x1,-0x20(%ebp)
-cmpl   $0x5,-0x20(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x268>
-lea    -0x1af(%ebp),%eax
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x260>
+lea    -0x1b3(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEptEv>
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector18FrameLagDataStruct4initEv>
 movl   $0x1,0x4(%esp)
 movl   $0x0,(%esp)
 call   <T> <_ZN7DNFFLib9Sleep_ExtEii>
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x70(%eax),%edx
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 sub    $0x4,%esp
-lea    -0x28(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN17FrameLagCollector18FrameLagDataStructEEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xc9>
+jne    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0xc1>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x6c(%eax)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 mov    0x8(%ebp),%eax
 mov    0x8c(%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 cmp    %eax,%edx
-jg     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x621>
+jg     <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x52a>
 mov    0x8(%ebp),%eax
 mov    0x90(%eax),%edx
-mov    -0x2c(%ebp),%eax
+mov    -0x30(%ebp),%eax
 cmp    %eax,%edx
-jge    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x62e>
+jge    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x537>
 mov    0x8(%ebp),%eax
 movl   $0x1e,0x88(%eax)
-mov    $0x0,%eax
-lea    -0xc(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+movl   $0x0,-0x28(%ebp)
+jmp    <T> <_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler+0x547>
+movl   $0x2,-0x28(%ebp)
+mov    -0x28(%ebp),%eax
+mov    -0x4(%ebp),%ebx
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::SaveFrameLagData(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector16SaveFrameLagDataEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_1c0 [3];
  Packet_Frame_Lag_Statistic_Write_Lag_Index local_1b3 [3];
  undefined2 auStack_1b0 [3];
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined4 local_1a4 [5];
  short local_190;
  short local_18e;
  undefined2 auStack_18c [168];
  time_t local_3c;
  undefined4 local_38;
  time_t local_34;
  int local_30;
  map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
  local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  
  if (*(int *)(this + 4) == 2) {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    if (*(int *)(this + 0x88) <= *(int *)(this + 0x10)) {
      *(undefined4 *)(this + 0x10) = 0;
      if (*(int *)(this + 0x6c) == 0) {
        return 0;
      }
      Packet_Frame_Lag_Statistic_Write_Lag_Index::Packet_Frame_Lag_Statistic_Write_Lag_Index
                (local_1b3);
      local_1a9 = CServerHandler::GetServerGroupNo(param_1);
      time(&local_34);
      local_3c = local_34;
      std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
      _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                         *)&local_38);
      std::
      map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
      ::begin((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
               *)local_1c0);
      local_38 = local_1c0[0];
      while( true ) {
        std::
        map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
        ::end(local_2c);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator!=((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38,(_Rb_tree_iterator *)local_2c);
        if (cVar1 == '\0') break;
        puVar3 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                 ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                               *)&local_38);
        local_1a8 = *puVar3;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        local_1a4[0] = *(undefined4 *)(iVar4 + 4);
        for (local_28 = 0; iVar4 = local_28, local_28 < 8; local_28 = local_28 + 1) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          auStack_1b0[iVar4 + 8] = *(undefined2 *)(iVar5 + 0x10 + (local_28 + 8) * 2);
        }
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        if (*(int *)(iVar4 + 0x30) == 0) {
          local_190 = -1;
          local_18e = -1;
        }
        else {
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = *(int *)(iVar4 + 0x34);
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          local_190 = (short)ROUND((double)iVar4 / (double)*(uint *)(iVar5 + 0x30));
          iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = *(int *)(iVar4 + 0x38);
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          local_18e = (short)ROUND((double)iVar4 / (double)*(uint *)(iVar5 + 0x30));
        }
        for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
          auStack_18c[local_24 * 0x1c] = 0;
          auStack_18c[local_24 * 0x1c + 1] = 0;
          auStack_18c[local_24 * 0x1c + 2] = 0;
          auStack_18c[local_24 * 0x1c + 3] = 0;
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + (local_24 + 9) * 0x10 + 0xc)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 0xc + (local_24 + 0xc) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c] =
                 (short)(iVar5 / *(int *)(iVar6 + (local_24 + 9) * 0x10 + 0xc));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa0)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 4 + (local_24 + 0x14) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 1] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa0));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa4)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 0xc + (local_24 + 0x18) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 2] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa4));
          }
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
          iVar4 = local_24;
          if (0 < *(int *)(iVar5 + local_24 * 0x10 + 0xa8)) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar5 = *(int *)(iVar5 + 4 + (local_24 + 0x20) * 4);
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            auStack_18c[iVar4 * 0x1c + 3] =
                 (short)(iVar5 / *(int *)(iVar6 + local_24 * 0x10 + 0xa8));
          }
          for (local_20 = 0; iVar5 = local_20, iVar4 = local_24, local_20 < 6;
              local_20 = local_20 + 1) {
            iVar6 = std::
                    _Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                                *)&local_38);
            iVar4 = iVar4 * 7 + iVar5 + 4;
            iVar5 = local_24 * 7 + local_20 + 0x1e;
            uVar2 = *(undefined4 *)(iVar6 + 0x18 + iVar5 * 8);
            local_1a4[iVar4 * 2] = *(undefined4 *)(iVar6 + 0x14 + iVar5 * 8);
            local_1a4[iVar4 * 2 + 1] = uVar2;
          }
        }
        CServerHandler::SendToDB(param_1,(PacketHeader *)local_1b3);
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>
                            *)&local_38);
        FrameLagDataStruct::init((FrameLagDataStruct *)(iVar4 + 4));
        DNFFLib::Sleep_Ext(0,1);
        std::_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>::
        operator++((_Rb_tree_iterator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>> *)
                   &local_38);
      }
      *(undefined4 *)(this + 0x6c) = 0;
    }
    time(&local_30);
    if ((local_30 < *(int *)(this + 0x8c)) || (*(int *)(this + 0x90) < local_30)) {
      *(undefined4 *)(this + 0x88) = 0x1e;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 530 行）：

```cpp
int FrameLagCollector::SaveFrameLagData(CServerHandler* handler)
{
    int ret;
    if (m_field4 == 2)
    {
        m_field10++;
        if (m_field10 >= m_collectInterval)
        {
            m_field10 = 0;
            if (m_field6c == 0)
            {
                return 0;
            }
            Packet_Frame_Lag_Statistic_Write_Lag_Index pkt;
            pkt.m_serverGroup = (char)handler->GetServerGroupNo();
            time_t t;
            time(&t);
            time_t now = t;
            (void)now;
            std::map<int, FrameLagDataStruct>::iterator it;
            for (it = m_data.begin(); it != m_data.end(); ++it)
            {
                pkt.m_key = it->first;
                pkt.m_value = it->second.m0;
                int i;
                for (i = 0; i < 8; i++)
                {
                    pkt.m_part[i] = it->second.m_b[i + 8];
                }
                if (it->second.m_c[0] == 0)
                {
                    pkt.m_ratio1 = -1;
                    pkt.m_ratio2 = -1;
                }
                else
                {
                    pkt.m_ratio1 = (short)((double)it->second.m_c[1] /
                            (double)(unsigned int)it->second.m_c[0]);
                    pkt.m_ratio2 = (short)((double)it->second.m_c[2] /
                            (double)(unsigned int)it->second.m_c[0]);
                }
                int k;
                for (k = 0; k < 6; k++)
                {
                    Packet_Frame_Lag_Statistic_Write_Lag_Index::Item* item = &pkt.m_items[k];
                    item->m_s[0] = 0;
                    item->m_s[1] = 0;
                    item->m_s[2] = 0;
                    item->m_s[3] = 0;
                    FrameLagDataStruct* ds = &it->second;
                    if (0 < ds->m_h[k][0])
                    {
                        item->m_s[0] = (short)(ds->m_d[k] / ds->m_h[k][0]);
                    }
                    if (0 < ds->m_h[k][1])
                    {
                        item->m_s[1] = (short)(ds->m_e[k] / ds->m_h[k][1]);
                    }
                    if (0 < ds->m_h[k][2])
                    {
                        item->m_s[2] = (short)(ds->m_f[k] / ds->m_h[k][2]);
                    }
                    if (0 < ds->m_h[k][3])
                    {
                        item->m_s[3] = (short)(ds->m_g[k] / ds->m_h[k][3]);
                    }
                    int j;
                    for (j = 0; j < 6; j++)
                    {
                        FrameLagDataStruct* p = &it->second;
                        item->m_pair[j][0] = p->m_i[k * 7 + j].m_words[0];
                        item->m_pair[j][1] = p->m_i[k * 7 + j].m_words[1];
                    }
                }
                handler->SendToDB((PacketHeader*)&pkt);
                it->second.init();
                DNFFLib::Sleep_Ext(0, 1);
            }
            m_field6c = 0;
        }
        time_t t2;
        time(&t2);
        if (t2 < m_field8c || m_field90 < t2)
        {
            m_collectInterval = 0x1e;
        }
        ret = 0;
    }
    else
    {
        ret = 2;
    }
    return ret;
}
```
